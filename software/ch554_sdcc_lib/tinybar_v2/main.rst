                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _showImage16
                                     13 	.globl _displayImage
                                     14 	.globl _pallette
                                     15 	.globl _bitbangSetup
                                     16 	.globl _mDelaymS
                                     17 	.globl _CfgFsys
                                     18 	.globl _SSW
                                     19 	.globl _BTN
                                     20 	.globl _UIF_BUS_RST
                                     21 	.globl _UIF_DETECT
                                     22 	.globl _UIF_TRANSFER
                                     23 	.globl _UIF_SUSPEND
                                     24 	.globl _UIF_HST_SOF
                                     25 	.globl _UIF_FIFO_OV
                                     26 	.globl _U_SIE_FREE
                                     27 	.globl _U_TOG_OK
                                     28 	.globl _U_IS_NAK
                                     29 	.globl _ADC_CHAN0
                                     30 	.globl _ADC_CHAN1
                                     31 	.globl _CMP_CHAN
                                     32 	.globl _ADC_START
                                     33 	.globl _ADC_IF
                                     34 	.globl _CMP_IF
                                     35 	.globl _CMPO
                                     36 	.globl _U1RI
                                     37 	.globl _U1TI
                                     38 	.globl _U1RB8
                                     39 	.globl _U1TB8
                                     40 	.globl _U1REN
                                     41 	.globl _U1SMOD
                                     42 	.globl _U1SM0
                                     43 	.globl _S0_R_FIFO
                                     44 	.globl _S0_T_FIFO
                                     45 	.globl _S0_FREE
                                     46 	.globl _S0_IF_BYTE
                                     47 	.globl _S0_IF_FIRST
                                     48 	.globl _S0_IF_OV
                                     49 	.globl _S0_FST_ACT
                                     50 	.globl _CP_RL2
                                     51 	.globl _C_T2
                                     52 	.globl _TR2
                                     53 	.globl _EXEN2
                                     54 	.globl _TCLK
                                     55 	.globl _RCLK
                                     56 	.globl _EXF2
                                     57 	.globl _CAP1F
                                     58 	.globl _TF2
                                     59 	.globl _RI
                                     60 	.globl _TI
                                     61 	.globl _RB8
                                     62 	.globl _TB8
                                     63 	.globl _REN
                                     64 	.globl _SM2
                                     65 	.globl _SM1
                                     66 	.globl _SM0
                                     67 	.globl _IT0
                                     68 	.globl _IE0
                                     69 	.globl _IT1
                                     70 	.globl _IE1
                                     71 	.globl _TR0
                                     72 	.globl _TF0
                                     73 	.globl _TR1
                                     74 	.globl _TF1
                                     75 	.globl _RXD
                                     76 	.globl _PWM1_
                                     77 	.globl _TXD
                                     78 	.globl _PWM2_
                                     79 	.globl _AIN3
                                     80 	.globl _VBUS1
                                     81 	.globl _INT0
                                     82 	.globl _TXD1_
                                     83 	.globl _INT1
                                     84 	.globl _T0
                                     85 	.globl _RXD1_
                                     86 	.globl _PWM2
                                     87 	.globl _T1
                                     88 	.globl _UDP
                                     89 	.globl _UDM
                                     90 	.globl _TIN0
                                     91 	.globl _CAP1
                                     92 	.globl _T2
                                     93 	.globl _AIN0
                                     94 	.globl _VBUS2
                                     95 	.globl _TIN1
                                     96 	.globl _CAP2
                                     97 	.globl _T2EX
                                     98 	.globl _RXD_
                                     99 	.globl _TXD_
                                    100 	.globl _AIN1
                                    101 	.globl _UCC1
                                    102 	.globl _TIN2
                                    103 	.globl _SCS
                                    104 	.globl _CAP1_
                                    105 	.globl _T2_
                                    106 	.globl _AIN2
                                    107 	.globl _UCC2
                                    108 	.globl _TIN3
                                    109 	.globl _PWM1
                                    110 	.globl _MOSI
                                    111 	.globl _TIN4
                                    112 	.globl _RXD1
                                    113 	.globl _MISO
                                    114 	.globl _TIN5
                                    115 	.globl _TXD1
                                    116 	.globl _SCK
                                    117 	.globl _IE_SPI0
                                    118 	.globl _IE_TKEY
                                    119 	.globl _IE_USB
                                    120 	.globl _IE_ADC
                                    121 	.globl _IE_UART1
                                    122 	.globl _IE_PWMX
                                    123 	.globl _IE_GPIO
                                    124 	.globl _IE_WDOG
                                    125 	.globl _PX0
                                    126 	.globl _PT0
                                    127 	.globl _PX1
                                    128 	.globl _PT1
                                    129 	.globl _PS
                                    130 	.globl _PT2
                                    131 	.globl _PL_FLAG
                                    132 	.globl _PH_FLAG
                                    133 	.globl _EX0
                                    134 	.globl _ET0
                                    135 	.globl _EX1
                                    136 	.globl _ET1
                                    137 	.globl _ES
                                    138 	.globl _ET2
                                    139 	.globl _E_DIS
                                    140 	.globl _EA
                                    141 	.globl _P
                                    142 	.globl _F1
                                    143 	.globl _OV
                                    144 	.globl _RS0
                                    145 	.globl _RS1
                                    146 	.globl _F0
                                    147 	.globl _AC
                                    148 	.globl _CY
                                    149 	.globl _UEP1_DMA_H
                                    150 	.globl _UEP1_DMA_L
                                    151 	.globl _UEP1_DMA
                                    152 	.globl _UEP0_DMA_H
                                    153 	.globl _UEP0_DMA_L
                                    154 	.globl _UEP0_DMA
                                    155 	.globl _UEP2_3_MOD
                                    156 	.globl _UEP4_1_MOD
                                    157 	.globl _UEP3_DMA_H
                                    158 	.globl _UEP3_DMA_L
                                    159 	.globl _UEP3_DMA
                                    160 	.globl _UEP2_DMA_H
                                    161 	.globl _UEP2_DMA_L
                                    162 	.globl _UEP2_DMA
                                    163 	.globl _USB_DEV_AD
                                    164 	.globl _USB_CTRL
                                    165 	.globl _USB_INT_EN
                                    166 	.globl _UEP4_T_LEN
                                    167 	.globl _UEP4_CTRL
                                    168 	.globl _UEP0_T_LEN
                                    169 	.globl _UEP0_CTRL
                                    170 	.globl _USB_RX_LEN
                                    171 	.globl _USB_MIS_ST
                                    172 	.globl _USB_INT_ST
                                    173 	.globl _USB_INT_FG
                                    174 	.globl _UEP3_T_LEN
                                    175 	.globl _UEP3_CTRL
                                    176 	.globl _UEP2_T_LEN
                                    177 	.globl _UEP2_CTRL
                                    178 	.globl _UEP1_T_LEN
                                    179 	.globl _UEP1_CTRL
                                    180 	.globl _UDEV_CTRL
                                    181 	.globl _USB_C_CTRL
                                    182 	.globl _TKEY_DATH
                                    183 	.globl _TKEY_DATL
                                    184 	.globl _TKEY_DAT
                                    185 	.globl _TKEY_CTRL
                                    186 	.globl _ADC_DATA
                                    187 	.globl _ADC_CFG
                                    188 	.globl _ADC_CTRL
                                    189 	.globl _SBAUD1
                                    190 	.globl _SBUF1
                                    191 	.globl _SCON1
                                    192 	.globl _SPI0_SETUP
                                    193 	.globl _SPI0_CK_SE
                                    194 	.globl _SPI0_CTRL
                                    195 	.globl _SPI0_DATA
                                    196 	.globl _SPI0_STAT
                                    197 	.globl _PWM_CK_SE
                                    198 	.globl _PWM_CTRL
                                    199 	.globl _PWM_DATA1
                                    200 	.globl _PWM_DATA2
                                    201 	.globl _T2CAP1H
                                    202 	.globl _T2CAP1L
                                    203 	.globl _T2CAP1
                                    204 	.globl _TH2
                                    205 	.globl _TL2
                                    206 	.globl _T2COUNT
                                    207 	.globl _RCAP2H
                                    208 	.globl _RCAP2L
                                    209 	.globl _RCAP2
                                    210 	.globl _T2MOD
                                    211 	.globl _T2CON
                                    212 	.globl _SBUF
                                    213 	.globl _SCON
                                    214 	.globl _TH1
                                    215 	.globl _TH0
                                    216 	.globl _TL1
                                    217 	.globl _TL0
                                    218 	.globl _TMOD
                                    219 	.globl _TCON
                                    220 	.globl _XBUS_AUX
                                    221 	.globl _PIN_FUNC
                                    222 	.globl _P3_DIR_PU
                                    223 	.globl _P3_MOD_OC
                                    224 	.globl _P3
                                    225 	.globl _P2
                                    226 	.globl _P1_DIR_PU
                                    227 	.globl _P1_MOD_OC
                                    228 	.globl _P1
                                    229 	.globl _ROM_CTRL
                                    230 	.globl _ROM_DATA_H
                                    231 	.globl _ROM_DATA_L
                                    232 	.globl _ROM_DATA
                                    233 	.globl _ROM_ADDR_H
                                    234 	.globl _ROM_ADDR_L
                                    235 	.globl _ROM_ADDR
                                    236 	.globl _GPIO_IE
                                    237 	.globl _IP_EX
                                    238 	.globl _IE_EX
                                    239 	.globl _IP
                                    240 	.globl _IE
                                    241 	.globl _WDOG_COUNT
                                    242 	.globl _RESET_KEEP
                                    243 	.globl _WAKE_CTRL
                                    244 	.globl _CLOCK_CFG
                                    245 	.globl _PCON
                                    246 	.globl _GLOBAL_CFG
                                    247 	.globl _SAFE_MOD
                                    248 	.globl _DPH
                                    249 	.globl _DPL
                                    250 	.globl _SP
                                    251 	.globl _B
                                    252 	.globl _ACC
                                    253 	.globl _PSW
                                    254 	.globl _bootloader
                                    255 ;--------------------------------------------------------
                                    256 ; special function registers
                                    257 ;--------------------------------------------------------
                                    258 	.area RSEG    (ABS,DATA)
      000000                        259 	.org 0x0000
                           0000D0   260 _PSW	=	0x00d0
                           0000E0   261 _ACC	=	0x00e0
                           0000F0   262 _B	=	0x00f0
                           000081   263 _SP	=	0x0081
                           000082   264 _DPL	=	0x0082
                           000083   265 _DPH	=	0x0083
                           0000A1   266 _SAFE_MOD	=	0x00a1
                           0000B1   267 _GLOBAL_CFG	=	0x00b1
                           000087   268 _PCON	=	0x0087
                           0000B9   269 _CLOCK_CFG	=	0x00b9
                           0000A9   270 _WAKE_CTRL	=	0x00a9
                           0000FE   271 _RESET_KEEP	=	0x00fe
                           0000FF   272 _WDOG_COUNT	=	0x00ff
                           0000A8   273 _IE	=	0x00a8
                           0000B8   274 _IP	=	0x00b8
                           0000E8   275 _IE_EX	=	0x00e8
                           0000E9   276 _IP_EX	=	0x00e9
                           0000C7   277 _GPIO_IE	=	0x00c7
                           008584   278 _ROM_ADDR	=	0x8584
                           000084   279 _ROM_ADDR_L	=	0x0084
                           000085   280 _ROM_ADDR_H	=	0x0085
                           008F8E   281 _ROM_DATA	=	0x8f8e
                           00008E   282 _ROM_DATA_L	=	0x008e
                           00008F   283 _ROM_DATA_H	=	0x008f
                           000086   284 _ROM_CTRL	=	0x0086
                           000090   285 _P1	=	0x0090
                           000092   286 _P1_MOD_OC	=	0x0092
                           000093   287 _P1_DIR_PU	=	0x0093
                           0000A0   288 _P2	=	0x00a0
                           0000B0   289 _P3	=	0x00b0
                           000096   290 _P3_MOD_OC	=	0x0096
                           000097   291 _P3_DIR_PU	=	0x0097
                           0000C6   292 _PIN_FUNC	=	0x00c6
                           0000A2   293 _XBUS_AUX	=	0x00a2
                           000088   294 _TCON	=	0x0088
                           000089   295 _TMOD	=	0x0089
                           00008A   296 _TL0	=	0x008a
                           00008B   297 _TL1	=	0x008b
                           00008C   298 _TH0	=	0x008c
                           00008D   299 _TH1	=	0x008d
                           000098   300 _SCON	=	0x0098
                           000099   301 _SBUF	=	0x0099
                           0000C8   302 _T2CON	=	0x00c8
                           0000C9   303 _T2MOD	=	0x00c9
                           00CBCA   304 _RCAP2	=	0xcbca
                           0000CA   305 _RCAP2L	=	0x00ca
                           0000CB   306 _RCAP2H	=	0x00cb
                           00CDCC   307 _T2COUNT	=	0xcdcc
                           0000CC   308 _TL2	=	0x00cc
                           0000CD   309 _TH2	=	0x00cd
                           00CFCE   310 _T2CAP1	=	0xcfce
                           0000CE   311 _T2CAP1L	=	0x00ce
                           0000CF   312 _T2CAP1H	=	0x00cf
                           00009B   313 _PWM_DATA2	=	0x009b
                           00009C   314 _PWM_DATA1	=	0x009c
                           00009D   315 _PWM_CTRL	=	0x009d
                           00009E   316 _PWM_CK_SE	=	0x009e
                           0000F8   317 _SPI0_STAT	=	0x00f8
                           0000F9   318 _SPI0_DATA	=	0x00f9
                           0000FA   319 _SPI0_CTRL	=	0x00fa
                           0000FB   320 _SPI0_CK_SE	=	0x00fb
                           0000FC   321 _SPI0_SETUP	=	0x00fc
                           0000C0   322 _SCON1	=	0x00c0
                           0000C1   323 _SBUF1	=	0x00c1
                           0000C2   324 _SBAUD1	=	0x00c2
                           000080   325 _ADC_CTRL	=	0x0080
                           00009A   326 _ADC_CFG	=	0x009a
                           00009F   327 _ADC_DATA	=	0x009f
                           0000C3   328 _TKEY_CTRL	=	0x00c3
                           00C5C4   329 _TKEY_DAT	=	0xc5c4
                           0000C4   330 _TKEY_DATL	=	0x00c4
                           0000C5   331 _TKEY_DATH	=	0x00c5
                           000091   332 _USB_C_CTRL	=	0x0091
                           0000D1   333 _UDEV_CTRL	=	0x00d1
                           0000D2   334 _UEP1_CTRL	=	0x00d2
                           0000D3   335 _UEP1_T_LEN	=	0x00d3
                           0000D4   336 _UEP2_CTRL	=	0x00d4
                           0000D5   337 _UEP2_T_LEN	=	0x00d5
                           0000D6   338 _UEP3_CTRL	=	0x00d6
                           0000D7   339 _UEP3_T_LEN	=	0x00d7
                           0000D8   340 _USB_INT_FG	=	0x00d8
                           0000D9   341 _USB_INT_ST	=	0x00d9
                           0000DA   342 _USB_MIS_ST	=	0x00da
                           0000DB   343 _USB_RX_LEN	=	0x00db
                           0000DC   344 _UEP0_CTRL	=	0x00dc
                           0000DD   345 _UEP0_T_LEN	=	0x00dd
                           0000DE   346 _UEP4_CTRL	=	0x00de
                           0000DF   347 _UEP4_T_LEN	=	0x00df
                           0000E1   348 _USB_INT_EN	=	0x00e1
                           0000E2   349 _USB_CTRL	=	0x00e2
                           0000E3   350 _USB_DEV_AD	=	0x00e3
                           00E5E4   351 _UEP2_DMA	=	0xe5e4
                           0000E4   352 _UEP2_DMA_L	=	0x00e4
                           0000E5   353 _UEP2_DMA_H	=	0x00e5
                           00E7E6   354 _UEP3_DMA	=	0xe7e6
                           0000E6   355 _UEP3_DMA_L	=	0x00e6
                           0000E7   356 _UEP3_DMA_H	=	0x00e7
                           0000EA   357 _UEP4_1_MOD	=	0x00ea
                           0000EB   358 _UEP2_3_MOD	=	0x00eb
                           00EDEC   359 _UEP0_DMA	=	0xedec
                           0000EC   360 _UEP0_DMA_L	=	0x00ec
                           0000ED   361 _UEP0_DMA_H	=	0x00ed
                           00EFEE   362 _UEP1_DMA	=	0xefee
                           0000EE   363 _UEP1_DMA_L	=	0x00ee
                           0000EF   364 _UEP1_DMA_H	=	0x00ef
                                    365 ;--------------------------------------------------------
                                    366 ; special function bits
                                    367 ;--------------------------------------------------------
                                    368 	.area RSEG    (ABS,DATA)
      000000                        369 	.org 0x0000
                           0000D7   370 _CY	=	0x00d7
                           0000D6   371 _AC	=	0x00d6
                           0000D5   372 _F0	=	0x00d5
                           0000D4   373 _RS1	=	0x00d4
                           0000D3   374 _RS0	=	0x00d3
                           0000D2   375 _OV	=	0x00d2
                           0000D1   376 _F1	=	0x00d1
                           0000D0   377 _P	=	0x00d0
                           0000AF   378 _EA	=	0x00af
                           0000AE   379 _E_DIS	=	0x00ae
                           0000AD   380 _ET2	=	0x00ad
                           0000AC   381 _ES	=	0x00ac
                           0000AB   382 _ET1	=	0x00ab
                           0000AA   383 _EX1	=	0x00aa
                           0000A9   384 _ET0	=	0x00a9
                           0000A8   385 _EX0	=	0x00a8
                           0000BF   386 _PH_FLAG	=	0x00bf
                           0000BE   387 _PL_FLAG	=	0x00be
                           0000BD   388 _PT2	=	0x00bd
                           0000BC   389 _PS	=	0x00bc
                           0000BB   390 _PT1	=	0x00bb
                           0000BA   391 _PX1	=	0x00ba
                           0000B9   392 _PT0	=	0x00b9
                           0000B8   393 _PX0	=	0x00b8
                           0000EF   394 _IE_WDOG	=	0x00ef
                           0000EE   395 _IE_GPIO	=	0x00ee
                           0000ED   396 _IE_PWMX	=	0x00ed
                           0000EC   397 _IE_UART1	=	0x00ec
                           0000EB   398 _IE_ADC	=	0x00eb
                           0000EA   399 _IE_USB	=	0x00ea
                           0000E9   400 _IE_TKEY	=	0x00e9
                           0000E8   401 _IE_SPI0	=	0x00e8
                           000097   402 _SCK	=	0x0097
                           000097   403 _TXD1	=	0x0097
                           000097   404 _TIN5	=	0x0097
                           000096   405 _MISO	=	0x0096
                           000096   406 _RXD1	=	0x0096
                           000096   407 _TIN4	=	0x0096
                           000095   408 _MOSI	=	0x0095
                           000095   409 _PWM1	=	0x0095
                           000095   410 _TIN3	=	0x0095
                           000095   411 _UCC2	=	0x0095
                           000095   412 _AIN2	=	0x0095
                           000094   413 _T2_	=	0x0094
                           000094   414 _CAP1_	=	0x0094
                           000094   415 _SCS	=	0x0094
                           000094   416 _TIN2	=	0x0094
                           000094   417 _UCC1	=	0x0094
                           000094   418 _AIN1	=	0x0094
                           000093   419 _TXD_	=	0x0093
                           000092   420 _RXD_	=	0x0092
                           000091   421 _T2EX	=	0x0091
                           000091   422 _CAP2	=	0x0091
                           000091   423 _TIN1	=	0x0091
                           000091   424 _VBUS2	=	0x0091
                           000091   425 _AIN0	=	0x0091
                           000090   426 _T2	=	0x0090
                           000090   427 _CAP1	=	0x0090
                           000090   428 _TIN0	=	0x0090
                           0000B7   429 _UDM	=	0x00b7
                           0000B6   430 _UDP	=	0x00b6
                           0000B5   431 _T1	=	0x00b5
                           0000B4   432 _PWM2	=	0x00b4
                           0000B4   433 _RXD1_	=	0x00b4
                           0000B4   434 _T0	=	0x00b4
                           0000B3   435 _INT1	=	0x00b3
                           0000B2   436 _TXD1_	=	0x00b2
                           0000B2   437 _INT0	=	0x00b2
                           0000B2   438 _VBUS1	=	0x00b2
                           0000B2   439 _AIN3	=	0x00b2
                           0000B1   440 _PWM2_	=	0x00b1
                           0000B1   441 _TXD	=	0x00b1
                           0000B0   442 _PWM1_	=	0x00b0
                           0000B0   443 _RXD	=	0x00b0
                           00008F   444 _TF1	=	0x008f
                           00008E   445 _TR1	=	0x008e
                           00008D   446 _TF0	=	0x008d
                           00008C   447 _TR0	=	0x008c
                           00008B   448 _IE1	=	0x008b
                           00008A   449 _IT1	=	0x008a
                           000089   450 _IE0	=	0x0089
                           000088   451 _IT0	=	0x0088
                           00009F   452 _SM0	=	0x009f
                           00009E   453 _SM1	=	0x009e
                           00009D   454 _SM2	=	0x009d
                           00009C   455 _REN	=	0x009c
                           00009B   456 _TB8	=	0x009b
                           00009A   457 _RB8	=	0x009a
                           000099   458 _TI	=	0x0099
                           000098   459 _RI	=	0x0098
                           0000CF   460 _TF2	=	0x00cf
                           0000CF   461 _CAP1F	=	0x00cf
                           0000CE   462 _EXF2	=	0x00ce
                           0000CD   463 _RCLK	=	0x00cd
                           0000CC   464 _TCLK	=	0x00cc
                           0000CB   465 _EXEN2	=	0x00cb
                           0000CA   466 _TR2	=	0x00ca
                           0000C9   467 _C_T2	=	0x00c9
                           0000C8   468 _CP_RL2	=	0x00c8
                           0000FF   469 _S0_FST_ACT	=	0x00ff
                           0000FE   470 _S0_IF_OV	=	0x00fe
                           0000FD   471 _S0_IF_FIRST	=	0x00fd
                           0000FC   472 _S0_IF_BYTE	=	0x00fc
                           0000FB   473 _S0_FREE	=	0x00fb
                           0000FA   474 _S0_T_FIFO	=	0x00fa
                           0000F8   475 _S0_R_FIFO	=	0x00f8
                           0000C7   476 _U1SM0	=	0x00c7
                           0000C5   477 _U1SMOD	=	0x00c5
                           0000C4   478 _U1REN	=	0x00c4
                           0000C3   479 _U1TB8	=	0x00c3
                           0000C2   480 _U1RB8	=	0x00c2
                           0000C1   481 _U1TI	=	0x00c1
                           0000C0   482 _U1RI	=	0x00c0
                           000087   483 _CMPO	=	0x0087
                           000086   484 _CMP_IF	=	0x0086
                           000085   485 _ADC_IF	=	0x0085
                           000084   486 _ADC_START	=	0x0084
                           000083   487 _CMP_CHAN	=	0x0083
                           000081   488 _ADC_CHAN1	=	0x0081
                           000080   489 _ADC_CHAN0	=	0x0080
                           0000DF   490 _U_IS_NAK	=	0x00df
                           0000DE   491 _U_TOG_OK	=	0x00de
                           0000DD   492 _U_SIE_FREE	=	0x00dd
                           0000DC   493 _UIF_FIFO_OV	=	0x00dc
                           0000DB   494 _UIF_HST_SOF	=	0x00db
                           0000DA   495 _UIF_SUSPEND	=	0x00da
                           0000D9   496 _UIF_TRANSFER	=	0x00d9
                           0000D8   497 _UIF_DETECT	=	0x00d8
                           0000D8   498 _UIF_BUS_RST	=	0x00d8
                           000094   499 _BTN	=	0x0094
                           0000B2   500 _SSW	=	0x00b2
                                    501 ;--------------------------------------------------------
                                    502 ; overlayable register banks
                                    503 ;--------------------------------------------------------
                                    504 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        505 	.ds 8
                                    506 ;--------------------------------------------------------
                                    507 ; internal ram data
                                    508 ;--------------------------------------------------------
                                    509 	.area DSEG    (DATA)
      000008                        510 _bootloader::
      000008                        511 	.ds 2
                                    512 ;--------------------------------------------------------
                                    513 ; overlayable items in internal ram 
                                    514 ;--------------------------------------------------------
                                    515 ;--------------------------------------------------------
                                    516 ; Stack segment in internal ram 
                                    517 ;--------------------------------------------------------
                                    518 	.area	SSEG
      00001F                        519 __start__stack:
      00001F                        520 	.ds	1
                                    521 
                                    522 ;--------------------------------------------------------
                                    523 ; indirectly addressable internal ram data
                                    524 ;--------------------------------------------------------
                                    525 	.area ISEG    (DATA)
                                    526 ;--------------------------------------------------------
                                    527 ; absolute internal ram data
                                    528 ;--------------------------------------------------------
                                    529 	.area IABS    (ABS,DATA)
                                    530 	.area IABS    (ABS,DATA)
                                    531 ;--------------------------------------------------------
                                    532 ; bit data
                                    533 ;--------------------------------------------------------
                                    534 	.area BSEG    (BIT)
                                    535 ;--------------------------------------------------------
                                    536 ; paged external ram data
                                    537 ;--------------------------------------------------------
                                    538 	.area PSEG    (PAG,XDATA)
                                    539 ;--------------------------------------------------------
                                    540 ; external ram data
                                    541 ;--------------------------------------------------------
                                    542 	.area XSEG    (XDATA)
                                    543 ;--------------------------------------------------------
                                    544 ; absolute external ram data
                                    545 ;--------------------------------------------------------
                                    546 	.area XABS    (ABS,XDATA)
                                    547 ;--------------------------------------------------------
                                    548 ; external initialized ram data
                                    549 ;--------------------------------------------------------
                                    550 	.area XISEG   (XDATA)
                                    551 	.area HOME    (CODE)
                                    552 	.area GSINIT0 (CODE)
                                    553 	.area GSINIT1 (CODE)
                                    554 	.area GSINIT2 (CODE)
                                    555 	.area GSINIT3 (CODE)
                                    556 	.area GSINIT4 (CODE)
                                    557 	.area GSINIT5 (CODE)
                                    558 	.area GSINIT  (CODE)
                                    559 	.area GSFINAL (CODE)
                                    560 	.area CSEG    (CODE)
                                    561 ;--------------------------------------------------------
                                    562 ; interrupt vector 
                                    563 ;--------------------------------------------------------
                                    564 	.area HOME    (CODE)
      000000                        565 __interrupt_vect:
      000000 02 00 08         [24]  566 	ljmp	__sdcc_gsinit_startup
                                    567 ;--------------------------------------------------------
                                    568 ; global & static initialisations
                                    569 ;--------------------------------------------------------
                                    570 	.area HOME    (CODE)
                                    571 	.area GSINIT  (CODE)
                                    572 	.area GSFINAL (CODE)
                                    573 	.area GSINIT  (CODE)
                                    574 	.globl __sdcc_gsinit_startup
                                    575 	.globl __sdcc_program_startup
                                    576 	.globl __start__stack
                                    577 	.globl __mcs51_genXINIT
                                    578 	.globl __mcs51_genXRAMCLEAR
                                    579 	.globl __mcs51_genRAMCLEAR
                                    580 ;	C:/Users/zfx/Desktop/Tinybar-V2-master/software/ch554_sdcc_lib/examples/../include/bootloader.h:4: void (* __data bootloader)(void) = BOOT_ADDR;
      000061 75 08 00         [24]  581 	mov	_bootloader,#0x00
      000064 75 09 38         [24]  582 	mov	(_bootloader + 1),#0x38
                                    583 	.area GSFINAL (CODE)
      000067 02 00 03         [24]  584 	ljmp	__sdcc_program_startup
                                    585 ;--------------------------------------------------------
                                    586 ; Home
                                    587 ;--------------------------------------------------------
                                    588 	.area HOME    (CODE)
                                    589 	.area HOME    (CODE)
      000003                        590 __sdcc_program_startup:
      000003 02 00 6A         [24]  591 	ljmp	_main
                                    592 ;	return from main will return to caller
                                    593 ;--------------------------------------------------------
                                    594 ; code
                                    595 ;--------------------------------------------------------
                                    596 	.area CSEG    (CODE)
                                    597 ;------------------------------------------------------------
                                    598 ;Allocation info for local variables in function 'main'
                                    599 ;------------------------------------------------------------
                                    600 ;text_num                  Allocated to registers r7 
                                    601 ;mark                      Allocated to registers 
                                    602 ;------------------------------------------------------------
                                    603 ;	main.c:17: void main()
                                    604 ;	-----------------------------------------
                                    605 ;	 function main
                                    606 ;	-----------------------------------------
      00006A                        607 _main:
                           000007   608 	ar7 = 0x07
                           000006   609 	ar6 = 0x06
                           000005   610 	ar5 = 0x05
                           000004   611 	ar4 = 0x04
                           000003   612 	ar3 = 0x03
                           000002   613 	ar2 = 0x02
                           000001   614 	ar1 = 0x01
                           000000   615 	ar0 = 0x00
                                    616 ;	main.c:19: uint8_t text_num = 0;
      00006A 7F 00            [12]  617 	mov	r7,#0x00
                                    618 ;	main.c:21: CfgFsys();
      00006C C0 07            [24]  619 	push	ar7
      00006E 12 0A C6         [24]  620 	lcall	_CfgFsys
                                    621 ;	main.c:22: mDelaymS(50);
      000071 90 00 32         [24]  622 	mov	dptr,#0x0032
      000074 12 0A EE         [24]  623 	lcall	_mDelaymS
      000077 D0 07            [24]  624 	pop	ar7
                                    625 ;	main.c:23: if (BTN == 0)
      000079 20 94 20         [24]  626 	jb	_BTN,00107$
                                    627 ;	main.c:25: mDelaymS(50);
      00007C 90 00 32         [24]  628 	mov	dptr,#0x0032
      00007F C0 07            [24]  629 	push	ar7
      000081 12 0A EE         [24]  630 	lcall	_mDelaymS
      000084 D0 07            [24]  631 	pop	ar7
                                    632 ;	main.c:26: if (BTN == 0)
      000086 20 94 13         [24]  633 	jb	_BTN,00107$
                                    634 ;	main.c:28: EA = 0;
      000089 C2 AF            [12]  635 	clr	_EA
                                    636 ;	main.c:29: mDelaymS(100);
      00008B 90 00 64         [24]  637 	mov	dptr,#0x0064
      00008E 12 0A EE         [24]  638 	lcall	_mDelaymS
                                    639 ;	main.c:30: bootloader();
      000091 85 08 82         [24]  640 	mov	dpl,_bootloader
      000094 85 09 83         [24]  641 	mov	dph,(_bootloader + 1)
      000097 12 00 06         [24]  642 	lcall	__sdcc_call_dptr
                                    643 ;	main.c:31: while (1)
      00009A                        644 00102$:
      00009A 80 FE            [24]  645 	sjmp	00102$
      00009C                        646 00107$:
                                    647 ;	main.c:36: bitbangSetup();
      00009C C0 07            [24]  648 	push	ar7
      00009E 12 00 E1         [24]  649 	lcall	_bitbangSetup
                                    650 ;	main.c:37: pallette();
      0000A1 12 08 0B         [24]  651 	lcall	_pallette
      0000A4 D0 07            [24]  652 	pop	ar7
                                    653 ;	main.c:39: while (1)
      0000A6                        654 00123$:
                                    655 ;	main.c:41: if(text_num % 2 == 0){
      0000A6 EF               [12]  656 	mov	a,r7
      0000A7 20 E0 0E         [24]  657 	jb	acc.0,00113$
                                    658 ;	main.c:42: if (SSW == 0)
      0000AA 20 B2 17         [24]  659 	jb	_SSW,00114$
                                    660 ;	main.c:44: showImage16(text_num);
      0000AD 8F 82            [24]  661 	mov	dpl,r7
      0000AF C0 07            [24]  662 	push	ar7
      0000B1 12 04 30         [24]  663 	lcall	_showImage16
      0000B4 D0 07            [24]  664 	pop	ar7
      0000B6 80 0C            [24]  665 	sjmp	00114$
      0000B8                        666 00113$:
                                    667 ;	main.c:47: if (SSW == 0)
      0000B8 20 B2 09         [24]  668 	jb	_SSW,00114$
                                    669 ;	main.c:49: displayImage(text_num);
      0000BB 8F 82            [24]  670 	mov	dpl,r7
      0000BD C0 07            [24]  671 	push	ar7
      0000BF 12 01 29         [24]  672 	lcall	_displayImage
      0000C2 D0 07            [24]  673 	pop	ar7
      0000C4                        674 00114$:
                                    675 ;	main.c:52: if (BTN == 0)
      0000C4 20 94 DF         [24]  676 	jb	_BTN,00123$
                                    677 ;	main.c:54: mDelaymS(50);
      0000C7 90 00 32         [24]  678 	mov	dptr,#0x0032
      0000CA C0 07            [24]  679 	push	ar7
      0000CC 12 0A EE         [24]  680 	lcall	_mDelaymS
      0000CF D0 07            [24]  681 	pop	ar7
                                    682 ;	main.c:55: if (BTN == 0)
      0000D1 20 94 08         [24]  683 	jb	_BTN,00117$
                                    684 ;	main.c:57: text_num++;
      0000D4 0F               [12]  685 	inc	r7
                                    686 ;	main.c:58: text_num %= 11;
      0000D5 75 F0 0B         [24]  687 	mov	b,#0x0b
      0000D8 EF               [12]  688 	mov	a,r7
      0000D9 84               [48]  689 	div	ab
      0000DA AF F0            [24]  690 	mov	r7,b
                                    691 ;	main.c:60: while (BTN == 0)
      0000DC                        692 00117$:
      0000DC 30 94 FD         [24]  693 	jnb	_BTN,00117$
      0000DF 80 C5            [24]  694 	sjmp	00123$
                                    695 	.area CSEG    (CODE)
                                    696 	.area CONST   (CODE)
                                    697 	.area XINIT   (CODE)
                                    698 	.area CABS    (ABS,CODE)
