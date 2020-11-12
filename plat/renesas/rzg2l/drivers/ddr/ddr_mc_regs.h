/*
 * Copyright (c) 2020, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __DDR_MC_REGS_H__
#define __DDR_MC_REGS_H__

#define	DENALI_CTL_00		(0x0000)
#define	DENALI_CTL_01		(0x0004)
#define	DENALI_CTL_02		(0x0008)
#define	DENALI_CTL_03		(0x000C)
#define	DENALI_CTL_04		(0x0010)
#define	DENALI_CTL_05		(0x0014)
#define	DENALI_CTL_06		(0x0018)
#define	DENALI_CTL_07		(0x001C)
#define	DENALI_CTL_08		(0x0020)
#define	DENALI_CTL_09		(0x0024)
#define	DENALI_CTL_10		(0x0028)
#define	DENALI_CTL_11		(0x002C)
#define	DENALI_CTL_12		(0x0030)
#define	DENALI_CTL_13		(0x0034)
#define	DENALI_CTL_14		(0x0038)
#define	DENALI_CTL_15		(0x003C)
#define	DENALI_CTL_16		(0x0040)
#define	DENALI_CTL_17		(0x0044)
#define	DENALI_CTL_18		(0x0048)
#define	DENALI_CTL_19		(0x004C)
#define	DENALI_CTL_20		(0x0050)
#define	DENALI_CTL_21		(0x0054)
#define	DENALI_CTL_22		(0x0058)
#define	DENALI_CTL_23		(0x005C)
#define	DENALI_CTL_24		(0x0060)
#define	DENALI_CTL_25		(0x0064)
#define	DENALI_CTL_26		(0x0068)
#define	DENALI_CTL_27		(0x006C)
#define	DENALI_CTL_28		(0x0070)
#define	DENALI_CTL_29		(0x0074)
#define	DENALI_CTL_30		(0x0078)
#define	DENALI_CTL_31		(0x007C)
#define	DENALI_CTL_32		(0x0080)
#define	DENALI_CTL_33		(0x0084)
#define	DENALI_CTL_34		(0x0088)
#define	DENALI_CTL_35		(0x008C)
#define	DENALI_CTL_36		(0x0090)
#define	DENALI_CTL_37		(0x0094)
#define	DENALI_CTL_38		(0x0098)
#define	DENALI_CTL_39		(0x009C)
#define	DENALI_CTL_40		(0x00A0)
#define	DENALI_CTL_41		(0x00A4)
#define	DENALI_CTL_42		(0x00A8)
#define	DENALI_CTL_43		(0x00AC)
#define	DENALI_CTL_44		(0x00B0)
#define	DENALI_CTL_45		(0x00B4)
#define	DENALI_CTL_46		(0x00B8)
#define	DENALI_CTL_47		(0x00BC)
#define	DENALI_CTL_48		(0x00C0)
#define	DENALI_CTL_49		(0x00C4)
#define	DENALI_CTL_50		(0x00C8)
#define	DENALI_CTL_51		(0x00CC)
#define	DENALI_CTL_52		(0x00D0)
#define	DENALI_CTL_53		(0x00D4)
#define	DENALI_CTL_54		(0x00D8)
#define	DENALI_CTL_55		(0x00DC)
#define	DENALI_CTL_56		(0x00E0)
#define	DENALI_CTL_57		(0x00E4)
#define	DENALI_CTL_58		(0x00E8)
#define	DENALI_CTL_59		(0x00EC)
#define	DENALI_CTL_60		(0x00F0)
#define	DENALI_CTL_61		(0x00F4)
#define	DENALI_CTL_62		(0x00F8)
#define	DENALI_CTL_63		(0x00FC)
#define	DENALI_CTL_64		(0x0100)
#define	DENALI_CTL_65		(0x0104)
#define	DENALI_CTL_66		(0x0108)
#define	DENALI_CTL_67		(0x010C)
#define	DENALI_CTL_68		(0x0110)
#define	DENALI_CTL_69		(0x0114)
#define	DENALI_CTL_70		(0x0118)
#define	DENALI_CTL_71		(0x011C)
#define	DENALI_CTL_72		(0x0120)
#define	DENALI_CTL_73		(0x0124)
#define	DENALI_CTL_74		(0x0128)
#define	DENALI_CTL_75		(0x012C)
#define	DENALI_CTL_76		(0x0130)
#define	DENALI_CTL_77		(0x0134)
#define	DENALI_CTL_78		(0x0138)
#define	DENALI_CTL_79		(0x013C)
#define	DENALI_CTL_80		(0x0140)
#define	DENALI_CTL_81		(0x0144)
#define	DENALI_CTL_82		(0x0148)
#define	DENALI_CTL_83		(0x014C)
#define	DENALI_CTL_84		(0x0150)
#define	DENALI_CTL_85		(0x0154)
#define	DENALI_CTL_86		(0x0158)
#define	DENALI_CTL_87		(0x015C)
#define	DENALI_CTL_88		(0x0160)
#define	DENALI_CTL_89		(0x0164)
#define	DENALI_CTL_90		(0x0168)
#define	DENALI_CTL_91		(0x016C)
#define	DENALI_CTL_92		(0x0170)
#define	DENALI_CTL_93		(0x0174)
#define	DENALI_CTL_94		(0x0178)
#define	DENALI_CTL_95		(0x017C)
#define	DENALI_CTL_96		(0x0180)
#define	DENALI_CTL_97		(0x0184)
#define	DENALI_CTL_98		(0x0188)
#define	DENALI_CTL_99		(0x018C)
#define	DENALI_CTL_100		(0x0190)
#define	DENALI_CTL_101		(0x0194)
#define	DENALI_CTL_102		(0x0198)
#define	DENALI_CTL_103		(0x019C)
#define	DENALI_CTL_104		(0x01A0)
#define	DENALI_CTL_105		(0x01A4)
#define	DENALI_CTL_106		(0x01A8)
#define	DENALI_CTL_107		(0x01AC)
#define	DENALI_CTL_108		(0x01B0)
#define	DENALI_CTL_109		(0x01B4)
#define	DENALI_CTL_110		(0x01B8)
#define	DENALI_CTL_111		(0x01BC)
#define	DENALI_CTL_112		(0x01C0)
#define	DENALI_CTL_113		(0x01C4)
#define	DENALI_CTL_114		(0x01C8)
#define	DENALI_CTL_115		(0x01CC)
#define	DENALI_CTL_116		(0x01D0)
#define	DENALI_CTL_117		(0x01D4)
#define	DENALI_CTL_118		(0x01D8)
#define	DENALI_CTL_119		(0x01DC)
#define	DENALI_CTL_120		(0x01E0)
#define	DENALI_CTL_121		(0x01E4)
#define	DENALI_CTL_122		(0x01E8)
#define	DENALI_CTL_123		(0x01EC)
#define	DENALI_CTL_124		(0x01F0)
#define	DENALI_CTL_125		(0x01F4)
#define	DENALI_CTL_126		(0x01F8)
#define	DENALI_CTL_127		(0x01FC)
#define	DENALI_CTL_128		(0x0200)
#define	DENALI_CTL_129		(0x0204)
#define	DENALI_CTL_130		(0x0208)
#define	DENALI_CTL_131		(0x020C)
#define	DENALI_CTL_132		(0x0210)
#define	DENALI_CTL_133		(0x0214)
#define	DENALI_CTL_134		(0x0218)
#define	DENALI_CTL_135		(0x021C)
#define	DENALI_CTL_136		(0x0220)
#define	DENALI_CTL_137		(0x0224)
#define	DENALI_CTL_138		(0x0228)
#define	DENALI_CTL_139		(0x022C)
#define	DENALI_CTL_140		(0x0230)
#define	DENALI_CTL_141		(0x0234)
#define	DENALI_CTL_142		(0x0238)
#define	DENALI_CTL_143		(0x023C)
#define	DENALI_CTL_144		(0x0240)
#define	DENALI_CTL_145		(0x0244)
#define	DENALI_CTL_146		(0x0248)
#define	DENALI_CTL_147		(0x024C)
#define	DENALI_CTL_148		(0x0250)
#define	DENALI_CTL_149		(0x0254)
#define	DENALI_CTL_150		(0x0258)
#define	DENALI_CTL_151		(0x025C)
#define	DENALI_CTL_152		(0x0260)
#define	DENALI_CTL_153		(0x0264)
#define	DENALI_CTL_154		(0x0268)
#define	DENALI_CTL_155		(0x026C)
#define	DENALI_CTL_156		(0x0270)
#define	DENALI_CTL_157		(0x0274)
#define	DENALI_CTL_158		(0x0278)
#define	DENALI_CTL_159		(0x027C)
#define	DENALI_CTL_160		(0x0280)
#define	DENALI_CTL_161		(0x0284)
#define	DENALI_CTL_162		(0x0288)
#define	DENALI_CTL_163		(0x028C)
#define	DENALI_CTL_164		(0x0290)
#define	DENALI_CTL_165		(0x0294)
#define	DENALI_CTL_166		(0x0298)
#define	DENALI_CTL_167		(0x029C)
#define	DENALI_CTL_168		(0x02A0)
#define	DENALI_CTL_169		(0x02A4)
#define	DENALI_CTL_170		(0x02A8)
#define	DENALI_CTL_171		(0x02AC)
#define	DENALI_CTL_172		(0x02B0)
#define	DENALI_CTL_173		(0x02B4)
#define	DENALI_CTL_174		(0x02B8)
#define	DENALI_CTL_175		(0x02BC)
#define	DENALI_CTL_176		(0x02C0)
#define	DENALI_CTL_177		(0x02C4)
#define	DENALI_CTL_178		(0x02C8)
#define	DENALI_CTL_179		(0x02CC)
#define	DENALI_CTL_180		(0x02D0)
#define	DENALI_CTL_181		(0x02D4)
#define	DENALI_CTL_182		(0x02D8)
#define	DENALI_CTL_183		(0x02DC)
#define	DENALI_CTL_184		(0x02E0)
#define	DENALI_CTL_185		(0x02E4)
#define	DENALI_CTL_186		(0x02E8)
#define	DENALI_CTL_187		(0x02EC)
#define	DENALI_CTL_188		(0x02F0)
#define	DENALI_CTL_189		(0x02F4)
#define	DENALI_CTL_190		(0x02F8)
#define	DENALI_CTL_191		(0x02FC)
#define	DENALI_CTL_192		(0x0300)
#define	DENALI_CTL_193		(0x0304)
#define	DENALI_CTL_194		(0x0308)
#define	DENALI_CTL_195		(0x030C)
#define	DENALI_CTL_196		(0x0310)
#define	DENALI_CTL_197		(0x0314)
#define	DENALI_CTL_198		(0x0318)
#define	DENALI_CTL_199		(0x031C)
#define	DENALI_CTL_200		(0x0320)
#define	DENALI_CTL_201		(0x0324)
#define	DENALI_CTL_202		(0x0328)
#define	DENALI_CTL_203		(0x032C)
#define	DENALI_CTL_204		(0x0330)
#define	DENALI_CTL_205		(0x0334)
#define	DENALI_CTL_206		(0x0338)
#define	DENALI_CTL_207		(0x033C)
#define	DENALI_CTL_208		(0x0340)
#define	DENALI_CTL_209		(0x0344)
#define	DENALI_CTL_210		(0x0348)
#define	DENALI_CTL_211		(0x034C)
#define	DENALI_CTL_212		(0x0350)
#define	DENALI_CTL_213		(0x0354)
#define	DENALI_CTL_214		(0x0358)
#define	DENALI_CTL_215		(0x035C)
#define	DENALI_CTL_216		(0x0360)
#define	DENALI_CTL_217		(0x0364)
#define	DENALI_CTL_218		(0x0368)
#define	DENALI_CTL_219		(0x036C)
#define	DENALI_CTL_220		(0x0370)
#define	DENALI_CTL_221		(0x0374)
#define	DENALI_CTL_222		(0x0378)
#define	DENALI_CTL_223		(0x037C)
#define	DENALI_CTL_224		(0x0380)
#define	DENALI_CTL_225		(0x0384)
#define	DENALI_CTL_226		(0x0388)
#define	DENALI_CTL_227		(0x038C)
#define	DENALI_CTL_228		(0x0390)
#define	DENALI_CTL_229		(0x0394)
#define	DENALI_CTL_230		(0x0398)
#define	DENALI_CTL_231		(0x039C)
#define	DENALI_CTL_232		(0x03A0)
#define	DENALI_CTL_233		(0x03A4)
#define	DENALI_CTL_234		(0x03A8)
#define	DENALI_CTL_235		(0x03AC)
#define	DENALI_CTL_236		(0x03B0)
#define	DENALI_CTL_237		(0x03B4)
#define	DENALI_CTL_238		(0x03B8)
#define	DENALI_CTL_239		(0x03BC)
#define	DENALI_CTL_240		(0x03C0)
#define	DENALI_CTL_241		(0x03C4)
#define	DENALI_CTL_242		(0x03C8)
#define	DENALI_CTL_243		(0x03CC)
#define	DENALI_CTL_244		(0x03D0)
#define	DENALI_CTL_245		(0x03D4)
#define	DENALI_CTL_246		(0x03D8)
#define	DENALI_CTL_247		(0x03DC)
#define	DENALI_CTL_248		(0x03E0)
#define	DENALI_CTL_249		(0x03E4)
#define	DENALI_CTL_250		(0x03E8)
#define	DENALI_CTL_251		(0x03EC)
#define	DENALI_CTL_252		(0x03F0)
#define	DENALI_CTL_253		(0x03F4)
#define	DENALI_CTL_254		(0x03F8)
#define	DENALI_CTL_255		(0x03FC)
#define	DENALI_CTL_256		(0x0400)
#define	DENALI_CTL_257		(0x0404)
#define	DENALI_CTL_258		(0x0408)
#define	DENALI_CTL_259		(0x040C)
#define	DENALI_CTL_260		(0x0410)
#define	DENALI_CTL_261		(0x0414)
#define	DENALI_CTL_262		(0x0418)
#define	DENALI_CTL_263		(0x041C)
#define	DENALI_CTL_264		(0x0420)
#define	DENALI_CTL_265		(0x0424)
#define	DENALI_CTL_266		(0x0428)
#define	DENALI_CTL_267		(0x042C)
#define	DENALI_CTL_268		(0x0430)
#define	DENALI_CTL_269		(0x0434)
#define	DENALI_CTL_270		(0x0438)
#define	DENALI_CTL_271		(0x043C)
#define	DENALI_CTL_272		(0x0440)
#define	DENALI_CTL_273		(0x0444)
#define	DENALI_CTL_274		(0x0448)
#define	DENALI_CTL_275		(0x044C)
#define	DENALI_CTL_276		(0x0450)
#define	DENALI_CTL_277		(0x0454)
#define	DENALI_CTL_278		(0x0458)
#define	DENALI_CTL_279		(0x045C)
#define	DENALI_CTL_280		(0x0460)
#define	DENALI_CTL_281		(0x0464)
#define	DENALI_CTL_282		(0x0468)
#define	DENALI_CTL_283		(0x046C)
#define	DENALI_CTL_284		(0x0470)
#define	DENALI_CTL_285		(0x0474)
#define	DENALI_CTL_286		(0x0478)
#define	DENALI_CTL_287		(0x047C)
#define	DENALI_CTL_288		(0x0480)
#define	DENALI_CTL_289		(0x0484)
#define	DENALI_CTL_290		(0x0488)
#define	DENALI_CTL_291		(0x048C)
#define	DENALI_CTL_292		(0x0490)
#define	DENALI_CTL_293		(0x0494)
#define	DENALI_CTL_294		(0x0498)
#define	DENALI_CTL_295		(0x049C)
#define	DENALI_CTL_296		(0x04A0)
#define	DENALI_CTL_297		(0x04A4)
#define	DENALI_CTL_298		(0x04A8)
#define	DENALI_CTL_299		(0x04AC)
#define	DENALI_CTL_300		(0x04B0)
#define	DENALI_CTL_301		(0x04B4)
#define	DENALI_CTL_302		(0x04B8)
#define	DENALI_CTL_303		(0x04BC)
#define	DENALI_CTL_304		(0x04C0)
#define	DENALI_CTL_305		(0x04C4)
#define	DENALI_CTL_306		(0x04C8)
#define	DENALI_CTL_307		(0x04CC)
#define	DENALI_CTL_308		(0x04D0)
#define	DENALI_CTL_309		(0x04D4)
#define	DENALI_CTL_310		(0x04D8)
#define	DENALI_CTL_311		(0x04DC)
#define	DENALI_CTL_312		(0x04E0)
#define	DENALI_CTL_313		(0x04E4)
#define	DENALI_CTL_314		(0x04E8)
#define	DENALI_CTL_315		(0x04EC)
#define	DENALI_CTL_316		(0x04F0)
#define	DENALI_CTL_317		(0x04F4)
#define	DENALI_CTL_318		(0x04F8)
#define	DENALI_CTL_319		(0x04FC)
#define	DENALI_CTL_320		(0x0500)
#define	DENALI_CTL_321		(0x0504)
#define	DENALI_CTL_322		(0x0508)
#define	DENALI_CTL_323		(0x050C)
#define	DENALI_CTL_324		(0x0510)
#define	DENALI_CTL_325		(0x0514)
#define	DENALI_CTL_326		(0x0518)
#define	DENALI_CTL_327		(0x051C)
#define	DENALI_CTL_328		(0x0520)
#define	DENALI_CTL_329		(0x0524)
#define	DENALI_CTL_330		(0x0528)
#define	DENALI_CTL_331		(0x052C)
#define	DENALI_CTL_332		(0x0530)
#define	DENALI_CTL_333		(0x0534)
#define	DENALI_CTL_334		(0x0538)
#define	DENALI_CTL_335		(0x053C)
#define	DENALI_CTL_336		(0x0540)
#define	DENALI_CTL_337		(0x0544)
#define	DENALI_CTL_338		(0x0548)
#define	DENALI_CTL_339		(0x054C)
#define	DENALI_CTL_340		(0x0550)
#define	DENALI_CTL_341		(0x0554)
#define	DENALI_CTL_342		(0x0558)
#define	DENALI_CTL_343		(0x055C)
#define	DENALI_CTL_344		(0x0560)
#define	DENALI_CTL_345		(0x0564)
#define	DENALI_CTL_346		(0x0568)
#define	DENALI_CTL_347		(0x056C)
#define	DENALI_CTL_348		(0x0570)
#define	DENALI_CTL_349		(0x0574)
#define	DENALI_CTL_350		(0x0578)
#define	DENALI_CTL_351		(0x057C)
#define	DENALI_CTL_352		(0x0580)
#define	DENALI_CTL_353		(0x0584)
#define	DENALI_CTL_354		(0x0588)
#define	DENALI_CTL_355		(0x058C)
#define	DENALI_CTL_356		(0x0590)
#define	DENALI_CTL_357		(0x0594)
#define	DENALI_CTL_358		(0x0598)
#define	DENALI_CTL_359		(0x059C)
#define	DENALI_CTL_360		(0x05A0)
#define	DENALI_CTL_361		(0x05A4)
#define	DENALI_CTL_362		(0x05A8)
#define	DENALI_CTL_363		(0x05AC)
#define	DENALI_CTL_364		(0x05B0)
#define	DENALI_CTL_365		(0x05B4)
#define	DENALI_CTL_366		(0x05B8)
#define	DENALI_CTL_367		(0x05BC)
#define	DENALI_CTL_368		(0x05C0)
#define	DENALI_CTL_369		(0x05C4)
#define	DENALI_CTL_370		(0x05C8)
#define	DENALI_CTL_371		(0x05CC)
#define	DENALI_CTL_372		(0x05D0)
#define	DENALI_CTL_373		(0x05D4)
#define	DENALI_CTL_374		(0x05D8)
#define	DENALI_CTL_375		(0x05DC)
#define	DENALI_CTL_376		(0x05E0)
#define	DENALI_CTL_377		(0x05E4)
#define	DENALI_CTL_378		(0x05E8)
#define	DENALI_CTL_379		(0x05EC)
#define	DENALI_CTL_380		(0x05F0)
#define	DENALI_CTL_381		(0x05F4)
#define	DENALI_CTL_382		(0x05F8)
#define	DENALI_CTL_383		(0x05FC)
#define	DENALI_CTL_384		(0x0600)
#define	DENALI_CTL_385		(0x0604)
#define	DENALI_CTL_386		(0x0608)
#define	DENALI_CTL_387		(0x060C)
#define	DENALI_CTL_388		(0x0610)
#define	DENALI_CTL_389		(0x0614)
#define	DENALI_CTL_390		(0x0618)
#define	DENALI_CTL_391		(0x061C)
#define	DENALI_CTL_392		(0x0620)
#define	DENALI_CTL_393		(0x0624)
#define	DENALI_CTL_394		(0x0628)
#define	DENALI_CTL_395		(0x062C)
#define	DENALI_CTL_396		(0x0630)
#define	DENALI_CTL_397		(0x0634)
#define	DENALI_CTL_398		(0x0638)
#define	DENALI_CTL_399		(0x063C)
#define	DENALI_CTL_400		(0x0640)
#define	DENALI_CTL_401		(0x0644)
#define	DENALI_CTL_402		(0x0648)
#define	DENALI_CTL_403		(0x064C)
#define	DENALI_CTL_404		(0x0650)
#define	DENALI_CTL_405		(0x0654)
#define	DENALI_CTL_406		(0x0658)
#define	DENALI_CTL_407		(0x065C)
#define	DENALI_CTL_408		(0x0660)
#define	DENALI_CTL_409		(0x0664)
#define	DENALI_CTL_410		(0x0668)
#define	DENALI_CTL_411		(0x066C)
#define	DENALI_CTL_412		(0x0670)
#define	DENALI_CTL_413		(0x0674)
#define	DENALI_CTL_414		(0x0678)
#define	DENALI_CTL_415		(0x067C)
#define	DENALI_CTL_416		(0x0680)
#define	DENALI_CTL_417		(0x0684)
#define	DENALI_CTL_418		(0x0688)
#define	DENALI_CTL_419		(0x068C)
#define	DENALI_CTL_420		(0x0690)
#define	DENALI_CTL_421		(0x0694)
#define	DENALI_CTL_422		(0x0698)
#define	DENALI_CTL_423		(0x069C)
#define	DENALI_CTL_424		(0x06A0)
#define	DENALI_CTL_425		(0x06A4)
#define	DENALI_CTL_426		(0x06A8)
#define	DENALI_CTL_427		(0x06AC)
#define	DENALI_CTL_428		(0x06B0)
#define	DENALI_CTL_429		(0x06B4)
#define	DENALI_CTL_430		(0x06B8)
#define	DENALI_CTL_431		(0x06BC)
#define	DENALI_CTL_432		(0x06C0)
#define	DENALI_CTL_433		(0x06C4)
#define	DENALI_CTL_434		(0x06C8)
#define	DENALI_CTL_435		(0x06CC)

#endif	// __DDR_MC_REGS_H__