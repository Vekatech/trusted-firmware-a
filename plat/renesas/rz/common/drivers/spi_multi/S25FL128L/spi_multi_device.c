/*
 * Copyright (c) 2024, Vekatech Ltd. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include <stdint.h>
#include <lib/utils_def.h>
#include <lib/mmio.h>
#include <arch_helpers.h>
#include <spi_multi_regs.h>
#include <spi_multi.h>
#include <spi_multi_reg_values.h>

#include <drivers/delay_timer.h>
#include <common/debug.h>

void spi_multi_setup_device( void )
{

    uint32_t val;
    uint8_t read_status, read_config1;
 
    mmio_write_32(SPIM_PHYOFFSET1, SPIM_PHYOFFSET1_SET_VALUE);
    mmio_write_32(SPIM_PHYOFFSET2, SPIM_PHYOFFSET2_SET_VALUE);
    spi_multi_timing_set();

    /*  Set Data read option */
    /* Required when command 0xEB is specified.
     * Not required when a command other than is specified,
     * but there is no problem in operation.
     */
    val = SPIM_DROPR_SET_VALUE;
    mmio_write_32(SPIM_DROPR, val);

    read_config1 = spi_multi_cmd_read(SMCMR_CMD_READ_CONFIG_REGISTER1);
    if ((read_config1 & CONFIG1_QUAD_NV) == CONFIG1_QUAD_NV) {
        return;
    }

    NOTICE("S25FL128L: Setting Quad Data Width!\n");

    /* Write Enable Command */
    spi_multi_cmd_write(SMCMR_CMD_WRITE_ENABLE,SPI_MANUAL_COMMAND_SIZE_0,0);
   /* status 1 WEL check */
    while(1) {
        read_status = spi_multi_cmd_read(SMCMR_CMD_READ_STATUS_REGISTER1);
        if ((read_status & STATUS_1_WEL) == STATUS_1_WEL) {
            break;
        } else {
            udelay(STATUS_BUSY_READ_DELAY_TIME);
            continue;
        }
    }

    /* Write Config Register 1 Command Quad Enable */
    val = (read_status << SMWDR0_1BYTE_DATA_BIT_SHIFT) | ((CONFIG1_QUAD_NV | read_config1) << 16);

    spi_multi_cmd_write(SMCMR_CMD_WRITE_REGISTER,SPI_MANUAL_COMMAND_SIZE_16_BIT,val);
    /* status 1 BUSY check */
    while(1) {
        read_status = spi_multi_cmd_read(SMCMR_CMD_READ_STATUS_REGISTER1);
        if ((read_status & STATUS_1_WIP_BIT) == STATUS_1_WIP) {
            udelay(STATUS_BUSY_READ_DELAY_TIME);
            continue;
        } else {
            break;
        }
    }
    return;
}
