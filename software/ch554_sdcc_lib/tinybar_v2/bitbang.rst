                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.8.3 #10738 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module bitbang
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _bitbangWs2812_PARM_2
                                     12 	.globl _LED
                                     13 	.globl _UIF_BUS_RST
                                     14 	.globl _UIF_DETECT
                                     15 	.globl _UIF_TRANSFER
                                     16 	.globl _UIF_SUSPEND
                                     17 	.globl _UIF_HST_SOF
                                     18 	.globl _UIF_FIFO_OV
                                     19 	.globl _U_SIE_FREE
                                     20 	.globl _U_TOG_OK
                                     21 	.globl _U_IS_NAK
                                     22 	.globl _ADC_CHAN0
                                     23 	.globl _ADC_CHAN1
                                     24 	.globl _CMP_CHAN
                                     25 	.globl _ADC_START
                                     26 	.globl _ADC_IF
                                     27 	.globl _CMP_IF
                                     28 	.globl _CMPO
                                     29 	.globl _U1RI
                                     30 	.globl _U1TI
                                     31 	.globl _U1RB8
                                     32 	.globl _U1TB8
                                     33 	.globl _U1REN
                                     34 	.globl _U1SMOD
                                     35 	.globl _U1SM0
                                     36 	.globl _S0_R_FIFO
                                     37 	.globl _S0_T_FIFO
                                     38 	.globl _S0_FREE
                                     39 	.globl _S0_IF_BYTE
                                     40 	.globl _S0_IF_FIRST
                                     41 	.globl _S0_IF_OV
                                     42 	.globl _S0_FST_ACT
                                     43 	.globl _CP_RL2
                                     44 	.globl _C_T2
                                     45 	.globl _TR2
                                     46 	.globl _EXEN2
                                     47 	.globl _TCLK
                                     48 	.globl _RCLK
                                     49 	.globl _EXF2
                                     50 	.globl _CAP1F
                                     51 	.globl _TF2
                                     52 	.globl _RI
                                     53 	.globl _TI
                                     54 	.globl _RB8
                                     55 	.globl _TB8
                                     56 	.globl _REN
                                     57 	.globl _SM2
                                     58 	.globl _SM1
                                     59 	.globl _SM0
                                     60 	.globl _IT0
                                     61 	.globl _IE0
                                     62 	.globl _IT1
                                     63 	.globl _IE1
                                     64 	.globl _TR0
                                     65 	.globl _TF0
                                     66 	.globl _TR1
                                     67 	.globl _TF1
                                     68 	.globl _RXD
                                     69 	.globl _PWM1_
                                     70 	.globl _TXD
                                     71 	.globl _PWM2_
                                     72 	.globl _AIN3
                                     73 	.globl _VBUS1
                                     74 	.globl _INT0
                                     75 	.globl _TXD1_
                                     76 	.globl _INT1
                                     77 	.globl _T0
                                     78 	.globl _RXD1_
                                     79 	.globl _PWM2
                                     80 	.globl _T1
                                     81 	.globl _UDP
                                     82 	.globl _UDM
                                     83 	.globl _TIN0
                                     84 	.globl _CAP1
                                     85 	.globl _T2
                                     86 	.globl _AIN0
                                     87 	.globl _VBUS2
                                     88 	.globl _TIN1
                                     89 	.globl _CAP2
                                     90 	.globl _T2EX
                                     91 	.globl _RXD_
                                     92 	.globl _TXD_
                                     93 	.globl _AIN1
                                     94 	.globl _UCC1
                                     95 	.globl _TIN2
                                     96 	.globl _SCS
                                     97 	.globl _CAP1_
                                     98 	.globl _T2_
                                     99 	.globl _AIN2
                                    100 	.globl _UCC2
                                    101 	.globl _TIN3
                                    102 	.globl _PWM1
                                    103 	.globl _MOSI
                                    104 	.globl _TIN4
                                    105 	.globl _RXD1
                                    106 	.globl _MISO
                                    107 	.globl _TIN5
                                    108 	.globl _TXD1
                                    109 	.globl _SCK
                                    110 	.globl _IE_SPI0
                                    111 	.globl _IE_TKEY
                                    112 	.globl _IE_USB
                                    113 	.globl _IE_ADC
                                    114 	.globl _IE_UART1
                                    115 	.globl _IE_PWMX
                                    116 	.globl _IE_GPIO
                                    117 	.globl _IE_WDOG
                                    118 	.globl _PX0
                                    119 	.globl _PT0
                                    120 	.globl _PX1
                                    121 	.globl _PT1
                                    122 	.globl _PS
                                    123 	.globl _PT2
                                    124 	.globl _PL_FLAG
                                    125 	.globl _PH_FLAG
                                    126 	.globl _EX0
                                    127 	.globl _ET0
                                    128 	.globl _EX1
                                    129 	.globl _ET1
                                    130 	.globl _ES
                                    131 	.globl _ET2
                                    132 	.globl _E_DIS
                                    133 	.globl _EA
                                    134 	.globl _P
                                    135 	.globl _F1
                                    136 	.globl _OV
                                    137 	.globl _RS0
                                    138 	.globl _RS1
                                    139 	.globl _F0
                                    140 	.globl _AC
                                    141 	.globl _CY
                                    142 	.globl _UEP1_DMA_H
                                    143 	.globl _UEP1_DMA_L
                                    144 	.globl _UEP1_DMA
                                    145 	.globl _UEP0_DMA_H
                                    146 	.globl _UEP0_DMA_L
                                    147 	.globl _UEP0_DMA
                                    148 	.globl _UEP2_3_MOD
                                    149 	.globl _UEP4_1_MOD
                                    150 	.globl _UEP3_DMA_H
                                    151 	.globl _UEP3_DMA_L
                                    152 	.globl _UEP3_DMA
                                    153 	.globl _UEP2_DMA_H
                                    154 	.globl _UEP2_DMA_L
                                    155 	.globl _UEP2_DMA
                                    156 	.globl _USB_DEV_AD
                                    157 	.globl _USB_CTRL
                                    158 	.globl _USB_INT_EN
                                    159 	.globl _UEP4_T_LEN
                                    160 	.globl _UEP4_CTRL
                                    161 	.globl _UEP0_T_LEN
                                    162 	.globl _UEP0_CTRL
                                    163 	.globl _USB_RX_LEN
                                    164 	.globl _USB_MIS_ST
                                    165 	.globl _USB_INT_ST
                                    166 	.globl _USB_INT_FG
                                    167 	.globl _UEP3_T_LEN
                                    168 	.globl _UEP3_CTRL
                                    169 	.globl _UEP2_T_LEN
                                    170 	.globl _UEP2_CTRL
                                    171 	.globl _UEP1_T_LEN
                                    172 	.globl _UEP1_CTRL
                                    173 	.globl _UDEV_CTRL
                                    174 	.globl _USB_C_CTRL
                                    175 	.globl _TKEY_DATH
                                    176 	.globl _TKEY_DATL
                                    177 	.globl _TKEY_DAT
                                    178 	.globl _TKEY_CTRL
                                    179 	.globl _ADC_DATA
                                    180 	.globl _ADC_CFG
                                    181 	.globl _ADC_CTRL
                                    182 	.globl _SBAUD1
                                    183 	.globl _SBUF1
                                    184 	.globl _SCON1
                                    185 	.globl _SPI0_SETUP
                                    186 	.globl _SPI0_CK_SE
                                    187 	.globl _SPI0_CTRL
                                    188 	.globl _SPI0_DATA
                                    189 	.globl _SPI0_STAT
                                    190 	.globl _PWM_CK_SE
                                    191 	.globl _PWM_CTRL
                                    192 	.globl _PWM_DATA1
                                    193 	.globl _PWM_DATA2
                                    194 	.globl _T2CAP1H
                                    195 	.globl _T2CAP1L
                                    196 	.globl _T2CAP1
                                    197 	.globl _TH2
                                    198 	.globl _TL2
                                    199 	.globl _T2COUNT
                                    200 	.globl _RCAP2H
                                    201 	.globl _RCAP2L
                                    202 	.globl _RCAP2
                                    203 	.globl _T2MOD
                                    204 	.globl _T2CON
                                    205 	.globl _SBUF
                                    206 	.globl _SCON
                                    207 	.globl _TH1
                                    208 	.globl _TH0
                                    209 	.globl _TL1
                                    210 	.globl _TL0
                                    211 	.globl _TMOD
                                    212 	.globl _TCON
                                    213 	.globl _XBUS_AUX
                                    214 	.globl _PIN_FUNC
                                    215 	.globl _P3_DIR_PU
                                    216 	.globl _P3_MOD_OC
                                    217 	.globl _P3
                                    218 	.globl _P2
                                    219 	.globl _P1_DIR_PU
                                    220 	.globl _P1_MOD_OC
                                    221 	.globl _P1
                                    222 	.globl _ROM_CTRL
                                    223 	.globl _ROM_DATA_H
                                    224 	.globl _ROM_DATA_L
                                    225 	.globl _ROM_DATA
                                    226 	.globl _ROM_ADDR_H
                                    227 	.globl _ROM_ADDR_L
                                    228 	.globl _ROM_ADDR
                                    229 	.globl _GPIO_IE
                                    230 	.globl _IP_EX
                                    231 	.globl _IE_EX
                                    232 	.globl _IP
                                    233 	.globl _IE
                                    234 	.globl _WDOG_COUNT
                                    235 	.globl _RESET_KEEP
                                    236 	.globl _WAKE_CTRL
                                    237 	.globl _CLOCK_CFG
                                    238 	.globl _PCON
                                    239 	.globl _GLOBAL_CFG
                                    240 	.globl _SAFE_MOD
                                    241 	.globl _DPH
                                    242 	.globl _DPL
                                    243 	.globl _SP
                                    244 	.globl _B
                                    245 	.globl _ACC
                                    246 	.globl _PSW
                                    247 	.globl _bitbangSetup
                                    248 	.globl _bitbangWs2812
                                    249 ;--------------------------------------------------------
                                    250 ; special function registers
                                    251 ;--------------------------------------------------------
                                    252 	.area RSEG    (ABS,DATA)
      000000                        253 	.org 0x0000
                           0000D0   254 _PSW	=	0x00d0
                           0000E0   255 _ACC	=	0x00e0
                           0000F0   256 _B	=	0x00f0
                           000081   257 _SP	=	0x0081
                           000082   258 _DPL	=	0x0082
                           000083   259 _DPH	=	0x0083
                           0000A1   260 _SAFE_MOD	=	0x00a1
                           0000B1   261 _GLOBAL_CFG	=	0x00b1
                           000087   262 _PCON	=	0x0087
                           0000B9   263 _CLOCK_CFG	=	0x00b9
                           0000A9   264 _WAKE_CTRL	=	0x00a9
                           0000FE   265 _RESET_KEEP	=	0x00fe
                           0000FF   266 _WDOG_COUNT	=	0x00ff
                           0000A8   267 _IE	=	0x00a8
                           0000B8   268 _IP	=	0x00b8
                           0000E8   269 _IE_EX	=	0x00e8
                           0000E9   270 _IP_EX	=	0x00e9
                           0000C7   271 _GPIO_IE	=	0x00c7
                           008584   272 _ROM_ADDR	=	0x8584
                           000084   273 _ROM_ADDR_L	=	0x0084
                           000085   274 _ROM_ADDR_H	=	0x0085
                           008F8E   275 _ROM_DATA	=	0x8f8e
                           00008E   276 _ROM_DATA_L	=	0x008e
                           00008F   277 _ROM_DATA_H	=	0x008f
                           000086   278 _ROM_CTRL	=	0x0086
                           000090   279 _P1	=	0x0090
                           000092   280 _P1_MOD_OC	=	0x0092
                           000093   281 _P1_DIR_PU	=	0x0093
                           0000A0   282 _P2	=	0x00a0
                           0000B0   283 _P3	=	0x00b0
                           000096   284 _P3_MOD_OC	=	0x0096
                           000097   285 _P3_DIR_PU	=	0x0097
                           0000C6   286 _PIN_FUNC	=	0x00c6
                           0000A2   287 _XBUS_AUX	=	0x00a2
                           000088   288 _TCON	=	0x0088
                           000089   289 _TMOD	=	0x0089
                           00008A   290 _TL0	=	0x008a
                           00008B   291 _TL1	=	0x008b
                           00008C   292 _TH0	=	0x008c
                           00008D   293 _TH1	=	0x008d
                           000098   294 _SCON	=	0x0098
                           000099   295 _SBUF	=	0x0099
                           0000C8   296 _T2CON	=	0x00c8
                           0000C9   297 _T2MOD	=	0x00c9
                           00CBCA   298 _RCAP2	=	0xcbca
                           0000CA   299 _RCAP2L	=	0x00ca
                           0000CB   300 _RCAP2H	=	0x00cb
                           00CDCC   301 _T2COUNT	=	0xcdcc
                           0000CC   302 _TL2	=	0x00cc
                           0000CD   303 _TH2	=	0x00cd
                           00CFCE   304 _T2CAP1	=	0xcfce
                           0000CE   305 _T2CAP1L	=	0x00ce
                           0000CF   306 _T2CAP1H	=	0x00cf
                           00009B   307 _PWM_DATA2	=	0x009b
                           00009C   308 _PWM_DATA1	=	0x009c
                           00009D   309 _PWM_CTRL	=	0x009d
                           00009E   310 _PWM_CK_SE	=	0x009e
                           0000F8   311 _SPI0_STAT	=	0x00f8
                           0000F9   312 _SPI0_DATA	=	0x00f9
                           0000FA   313 _SPI0_CTRL	=	0x00fa
                           0000FB   314 _SPI0_CK_SE	=	0x00fb
                           0000FC   315 _SPI0_SETUP	=	0x00fc
                           0000C0   316 _SCON1	=	0x00c0
                           0000C1   317 _SBUF1	=	0x00c1
                           0000C2   318 _SBAUD1	=	0x00c2
                           000080   319 _ADC_CTRL	=	0x0080
                           00009A   320 _ADC_CFG	=	0x009a
                           00009F   321 _ADC_DATA	=	0x009f
                           0000C3   322 _TKEY_CTRL	=	0x00c3
                           00C5C4   323 _TKEY_DAT	=	0xc5c4
                           0000C4   324 _TKEY_DATL	=	0x00c4
                           0000C5   325 _TKEY_DATH	=	0x00c5
                           000091   326 _USB_C_CTRL	=	0x0091
                           0000D1   327 _UDEV_CTRL	=	0x00d1
                           0000D2   328 _UEP1_CTRL	=	0x00d2
                           0000D3   329 _UEP1_T_LEN	=	0x00d3
                           0000D4   330 _UEP2_CTRL	=	0x00d4
                           0000D5   331 _UEP2_T_LEN	=	0x00d5
                           0000D6   332 _UEP3_CTRL	=	0x00d6
                           0000D7   333 _UEP3_T_LEN	=	0x00d7
                           0000D8   334 _USB_INT_FG	=	0x00d8
                           0000D9   335 _USB_INT_ST	=	0x00d9
                           0000DA   336 _USB_MIS_ST	=	0x00da
                           0000DB   337 _USB_RX_LEN	=	0x00db
                           0000DC   338 _UEP0_CTRL	=	0x00dc
                           0000DD   339 _UEP0_T_LEN	=	0x00dd
                           0000DE   340 _UEP4_CTRL	=	0x00de
                           0000DF   341 _UEP4_T_LEN	=	0x00df
                           0000E1   342 _USB_INT_EN	=	0x00e1
                           0000E2   343 _USB_CTRL	=	0x00e2
                           0000E3   344 _USB_DEV_AD	=	0x00e3
                           00E5E4   345 _UEP2_DMA	=	0xe5e4
                           0000E4   346 _UEP2_DMA_L	=	0x00e4
                           0000E5   347 _UEP2_DMA_H	=	0x00e5
                           00E7E6   348 _UEP3_DMA	=	0xe7e6
                           0000E6   349 _UEP3_DMA_L	=	0x00e6
                           0000E7   350 _UEP3_DMA_H	=	0x00e7
                           0000EA   351 _UEP4_1_MOD	=	0x00ea
                           0000EB   352 _UEP2_3_MOD	=	0x00eb
                           00EDEC   353 _UEP0_DMA	=	0xedec
                           0000EC   354 _UEP0_DMA_L	=	0x00ec
                           0000ED   355 _UEP0_DMA_H	=	0x00ed
                           00EFEE   356 _UEP1_DMA	=	0xefee
                           0000EE   357 _UEP1_DMA_L	=	0x00ee
                           0000EF   358 _UEP1_DMA_H	=	0x00ef
                                    359 ;--------------------------------------------------------
                                    360 ; special function bits
                                    361 ;--------------------------------------------------------
                                    362 	.area RSEG    (ABS,DATA)
      000000                        363 	.org 0x0000
                           0000D7   364 _CY	=	0x00d7
                           0000D6   365 _AC	=	0x00d6
                           0000D5   366 _F0	=	0x00d5
                           0000D4   367 _RS1	=	0x00d4
                           0000D3   368 _RS0	=	0x00d3
                           0000D2   369 _OV	=	0x00d2
                           0000D1   370 _F1	=	0x00d1
                           0000D0   371 _P	=	0x00d0
                           0000AF   372 _EA	=	0x00af
                           0000AE   373 _E_DIS	=	0x00ae
                           0000AD   374 _ET2	=	0x00ad
                           0000AC   375 _ES	=	0x00ac
                           0000AB   376 _ET1	=	0x00ab
                           0000AA   377 _EX1	=	0x00aa
                           0000A9   378 _ET0	=	0x00a9
                           0000A8   379 _EX0	=	0x00a8
                           0000BF   380 _PH_FLAG	=	0x00bf
                           0000BE   381 _PL_FLAG	=	0x00be
                           0000BD   382 _PT2	=	0x00bd
                           0000BC   383 _PS	=	0x00bc
                           0000BB   384 _PT1	=	0x00bb
                           0000BA   385 _PX1	=	0x00ba
                           0000B9   386 _PT0	=	0x00b9
                           0000B8   387 _PX0	=	0x00b8
                           0000EF   388 _IE_WDOG	=	0x00ef
                           0000EE   389 _IE_GPIO	=	0x00ee
                           0000ED   390 _IE_PWMX	=	0x00ed
                           0000EC   391 _IE_UART1	=	0x00ec
                           0000EB   392 _IE_ADC	=	0x00eb
                           0000EA   393 _IE_USB	=	0x00ea
                           0000E9   394 _IE_TKEY	=	0x00e9
                           0000E8   395 _IE_SPI0	=	0x00e8
                           000097   396 _SCK	=	0x0097
                           000097   397 _TXD1	=	0x0097
                           000097   398 _TIN5	=	0x0097
                           000096   399 _MISO	=	0x0096
                           000096   400 _RXD1	=	0x0096
                           000096   401 _TIN4	=	0x0096
                           000095   402 _MOSI	=	0x0095
                           000095   403 _PWM1	=	0x0095
                           000095   404 _TIN3	=	0x0095
                           000095   405 _UCC2	=	0x0095
                           000095   406 _AIN2	=	0x0095
                           000094   407 _T2_	=	0x0094
                           000094   408 _CAP1_	=	0x0094
                           000094   409 _SCS	=	0x0094
                           000094   410 _TIN2	=	0x0094
                           000094   411 _UCC1	=	0x0094
                           000094   412 _AIN1	=	0x0094
                           000093   413 _TXD_	=	0x0093
                           000092   414 _RXD_	=	0x0092
                           000091   415 _T2EX	=	0x0091
                           000091   416 _CAP2	=	0x0091
                           000091   417 _TIN1	=	0x0091
                           000091   418 _VBUS2	=	0x0091
                           000091   419 _AIN0	=	0x0091
                           000090   420 _T2	=	0x0090
                           000090   421 _CAP1	=	0x0090
                           000090   422 _TIN0	=	0x0090
                           0000B7   423 _UDM	=	0x00b7
                           0000B6   424 _UDP	=	0x00b6
                           0000B5   425 _T1	=	0x00b5
                           0000B4   426 _PWM2	=	0x00b4
                           0000B4   427 _RXD1_	=	0x00b4
                           0000B4   428 _T0	=	0x00b4
                           0000B3   429 _INT1	=	0x00b3
                           0000B2   430 _TXD1_	=	0x00b2
                           0000B2   431 _INT0	=	0x00b2
                           0000B2   432 _VBUS1	=	0x00b2
                           0000B2   433 _AIN3	=	0x00b2
                           0000B1   434 _PWM2_	=	0x00b1
                           0000B1   435 _TXD	=	0x00b1
                           0000B0   436 _PWM1_	=	0x00b0
                           0000B0   437 _RXD	=	0x00b0
                           00008F   438 _TF1	=	0x008f
                           00008E   439 _TR1	=	0x008e
                           00008D   440 _TF0	=	0x008d
                           00008C   441 _TR0	=	0x008c
                           00008B   442 _IE1	=	0x008b
                           00008A   443 _IT1	=	0x008a
                           000089   444 _IE0	=	0x0089
                           000088   445 _IT0	=	0x0088
                           00009F   446 _SM0	=	0x009f
                           00009E   447 _SM1	=	0x009e
                           00009D   448 _SM2	=	0x009d
                           00009C   449 _REN	=	0x009c
                           00009B   450 _TB8	=	0x009b
                           00009A   451 _RB8	=	0x009a
                           000099   452 _TI	=	0x0099
                           000098   453 _RI	=	0x0098
                           0000CF   454 _TF2	=	0x00cf
                           0000CF   455 _CAP1F	=	0x00cf
                           0000CE   456 _EXF2	=	0x00ce
                           0000CD   457 _RCLK	=	0x00cd
                           0000CC   458 _TCLK	=	0x00cc
                           0000CB   459 _EXEN2	=	0x00cb
                           0000CA   460 _TR2	=	0x00ca
                           0000C9   461 _C_T2	=	0x00c9
                           0000C8   462 _CP_RL2	=	0x00c8
                           0000FF   463 _S0_FST_ACT	=	0x00ff
                           0000FE   464 _S0_IF_OV	=	0x00fe
                           0000FD   465 _S0_IF_FIRST	=	0x00fd
                           0000FC   466 _S0_IF_BYTE	=	0x00fc
                           0000FB   467 _S0_FREE	=	0x00fb
                           0000FA   468 _S0_T_FIFO	=	0x00fa
                           0000F8   469 _S0_R_FIFO	=	0x00f8
                           0000C7   470 _U1SM0	=	0x00c7
                           0000C5   471 _U1SMOD	=	0x00c5
                           0000C4   472 _U1REN	=	0x00c4
                           0000C3   473 _U1TB8	=	0x00c3
                           0000C2   474 _U1RB8	=	0x00c2
                           0000C1   475 _U1TI	=	0x00c1
                           0000C0   476 _U1RI	=	0x00c0
                           000087   477 _CMPO	=	0x0087
                           000086   478 _CMP_IF	=	0x0086
                           000085   479 _ADC_IF	=	0x0085
                           000084   480 _ADC_START	=	0x0084
                           000083   481 _CMP_CHAN	=	0x0083
                           000081   482 _ADC_CHAN1	=	0x0081
                           000080   483 _ADC_CHAN0	=	0x0080
                           0000DF   484 _U_IS_NAK	=	0x00df
                           0000DE   485 _U_TOG_OK	=	0x00de
                           0000DD   486 _U_SIE_FREE	=	0x00dd
                           0000DC   487 _UIF_FIFO_OV	=	0x00dc
                           0000DB   488 _UIF_HST_SOF	=	0x00db
                           0000DA   489 _UIF_SUSPEND	=	0x00da
                           0000D9   490 _UIF_TRANSFER	=	0x00d9
                           0000D8   491 _UIF_DETECT	=	0x00d8
                           0000D8   492 _UIF_BUS_RST	=	0x00d8
                           000095   493 _LED	=	0x0095
                                    494 ;--------------------------------------------------------
                                    495 ; overlayable register banks
                                    496 ;--------------------------------------------------------
                                    497 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        498 	.ds 8
                                    499 ;--------------------------------------------------------
                                    500 ; internal ram data
                                    501 ;--------------------------------------------------------
                                    502 	.area DSEG    (DATA)
                                    503 ;--------------------------------------------------------
                                    504 ; overlayable items in internal ram 
                                    505 ;--------------------------------------------------------
                                    506 	.area	OSEG    (OVR,DATA)
      00001B                        507 _bitbangWs2812_PARM_2:
      00001B                        508 	.ds 2
                                    509 ;--------------------------------------------------------
                                    510 ; indirectly addressable internal ram data
                                    511 ;--------------------------------------------------------
                                    512 	.area ISEG    (DATA)
                                    513 ;--------------------------------------------------------
                                    514 ; absolute internal ram data
                                    515 ;--------------------------------------------------------
                                    516 	.area IABS    (ABS,DATA)
                                    517 	.area IABS    (ABS,DATA)
                                    518 ;--------------------------------------------------------
                                    519 ; bit data
                                    520 ;--------------------------------------------------------
                                    521 	.area BSEG    (BIT)
                                    522 ;--------------------------------------------------------
                                    523 ; paged external ram data
                                    524 ;--------------------------------------------------------
                                    525 	.area PSEG    (PAG,XDATA)
                                    526 ;--------------------------------------------------------
                                    527 ; external ram data
                                    528 ;--------------------------------------------------------
                                    529 	.area XSEG    (XDATA)
                                    530 ;--------------------------------------------------------
                                    531 ; absolute external ram data
                                    532 ;--------------------------------------------------------
                                    533 	.area XABS    (ABS,XDATA)
                                    534 ;--------------------------------------------------------
                                    535 ; external initialized ram data
                                    536 ;--------------------------------------------------------
                                    537 	.area XISEG   (XDATA)
                                    538 	.area HOME    (CODE)
                                    539 	.area GSINIT0 (CODE)
                                    540 	.area GSINIT1 (CODE)
                                    541 	.area GSINIT2 (CODE)
                                    542 	.area GSINIT3 (CODE)
                                    543 	.area GSINIT4 (CODE)
                                    544 	.area GSINIT5 (CODE)
                                    545 	.area GSINIT  (CODE)
                                    546 	.area GSFINAL (CODE)
                                    547 	.area CSEG    (CODE)
                                    548 ;--------------------------------------------------------
                                    549 ; global & static initialisations
                                    550 ;--------------------------------------------------------
                                    551 	.area HOME    (CODE)
                                    552 	.area GSINIT  (CODE)
                                    553 	.area GSFINAL (CODE)
                                    554 	.area GSINIT  (CODE)
                                    555 ;--------------------------------------------------------
                                    556 ; Home
                                    557 ;--------------------------------------------------------
                                    558 	.area HOME    (CODE)
                                    559 	.area HOME    (CODE)
                                    560 ;--------------------------------------------------------
                                    561 ; code
                                    562 ;--------------------------------------------------------
                                    563 	.area CSEG    (CODE)
                                    564 ;------------------------------------------------------------
                                    565 ;Allocation info for local variables in function 'bitbangSetup'
                                    566 ;------------------------------------------------------------
                                    567 ;	bitbang.c:10: void bitbangSetup()
                                    568 ;	-----------------------------------------
                                    569 ;	 function bitbangSetup
                                    570 ;	-----------------------------------------
      0000E1                        571 _bitbangSetup:
                           000007   572 	ar7 = 0x07
                           000006   573 	ar6 = 0x06
                           000005   574 	ar5 = 0x05
                           000004   575 	ar4 = 0x04
                           000003   576 	ar3 = 0x03
                           000002   577 	ar2 = 0x02
                           000001   578 	ar1 = 0x01
                           000000   579 	ar0 = 0x00
                                    580 ;	bitbang.c:13: P1_DIR_PU &= 0x0C;
      0000E1 53 93 0C         [24]  581 	anl	_P1_DIR_PU,#0x0c
                                    582 ;	bitbang.c:14: P1_MOD_OC = P1_MOD_OC & ~(1<<LED_PIN);
      0000E4 53 92 DF         [24]  583 	anl	_P1_MOD_OC,#0xdf
                                    584 ;	bitbang.c:15: P1_DIR_PU = P1_DIR_PU |	(1<<LED_PIN);
      0000E7 43 93 20         [24]  585 	orl	_P1_DIR_PU,#0x20
                                    586 ;	bitbang.c:16: }
      0000EA 22               [24]  587 	ret
                                    588 ;------------------------------------------------------------
                                    589 ;Allocation info for local variables in function 'bitbangWs2812'
                                    590 ;------------------------------------------------------------
                                    591 ;ledData                   Allocated with name '_bitbangWs2812_PARM_2'
                                    592 ;ledCount                  Allocated to registers 
                                    593 ;------------------------------------------------------------
                                    594 ;	bitbang.c:18: void bitbangWs2812( uint8_t ledCount, __xdata uint8_t * ledData )
                                    595 ;	-----------------------------------------
                                    596 ;	 function bitbangWs2812
                                    597 ;	-----------------------------------------
      0000EB                        598 _bitbangWs2812:
                                    599 ;	bitbang.c:123: __endasm;
      0000EB AA 82            [24]  600 	mov	r2, dpl ; Load the LED count into r2
      0000ED 85 1B 82         [24]  601 	mov	dpl, _bitbangWs2812_PARM_2 ; Load the LED data start address into DPTR
      0000F0 85 1C 83         [24]  602 	mov	dph, (_bitbangWs2812_PARM_2 + 1)
      0000F3                        603 	    00001$:
                                    604 ; byte loop
      0000F3 E0               [24]  605 	movx	a,@dptr ; Load the current LED data value into the accumulator (1)
      0000F4 A3               [24]  606 	inc	dptr ; and advance the counter for the next LED data value (1)
      0000F5 7B 08            [12]  607 	mov	r3, #8 ; Set up the bit loop (2)
      0000F7                        608 	    00002$:
                                    609 ; red bit loop
      0000F7 D2 95            [12]  610 	setb	_LED ; Begin bit cycle- set bit high (2)
      0000F9 00               [12]  611 	nop	; Tune this count by hand, want ~.4uS (1*2)
      0000FA 00               [12]  612 	nop
      0000FB 33               [12]  613 	rlc	A ; Shift the LED data value left to get the high bit (1)
      0000FC 92 95            [24]  614 	mov	_LED, C ; Set the output bit high if the current bit is high, (2)
                                    615 ;	otherwise set it low
      0000FE 00               [12]  616 	nop	; Tune this count by hand, want ~.4uS (1*2)
      0000FF 00               [12]  617 	nop
      000100 C2 95            [12]  618 	clr	_LED ; final part of bit cycle, set bit low (2)
      000102 DB F3            [24]  619 	djnz	r3, 00002$ ; If there are more bits in this byte (2, ?)
      000104 E0               [24]  620 	movx	a,@dptr ; Load the current LED data value into the accumulator (1)
      000105 A3               [24]  621 	inc	dptr ; and advance the counter for the next LED data value (1)
      000106 7B 08            [12]  622 	mov	r3, #8 ; Set up the bit loop (2)
      000108                        623 	    00003$:
                                    624 ; red bit loop
      000108 D2 95            [12]  625 	setb	_LED ; Begin bit cycle- set bit high (2)
      00010A 00               [12]  626 	nop	; Tune this count by hand, want ~.4uS (1*2)
      00010B 00               [12]  627 	nop
      00010C 33               [12]  628 	rlc	A ; Shift the LED data value left to get the high bit (1)
      00010D 92 95            [24]  629 	mov	_LED, C ; Set the output bit high if the current bit is high, (2)
                                    630 ;	otherwise set it low
      00010F 00               [12]  631 	nop	; Tune this count by hand, want ~.4uS (1*2)
      000110 00               [12]  632 	nop
      000111 C2 95            [12]  633 	clr	_LED ; final part of bit cycle, set bit low (2)
      000113 DB F3            [24]  634 	djnz	r3, 00003$ ; If there are more bits in this byte (2, ?)
      000115 E0               [24]  635 	movx	a,@dptr ; Load the current LED data value into the accumulator (1)
      000116 A3               [24]  636 	inc	dptr ; and advance the counter for the next LED data value (1)
      000117 7B 08            [12]  637 	mov	r3, #8 ; Set up the bit loop (2)
      000119                        638 	    00004$:
                                    639 ; red bit loop
      000119 D2 95            [12]  640 	setb	_LED ; Begin bit cycle- set bit high (2)
      00011B 00               [12]  641 	nop	; Tune this count by hand, want ~.4uS (1*2)
      00011C 00               [12]  642 	nop
      00011D 33               [12]  643 	rlc	A ; Shift the LED data value left to get the high bit (1)
      00011E 92 95            [24]  644 	mov	_LED, C ; Set the output bit high if the current bit is high, (2)
                                    645 ;	otherwise set it low
      000120 00               [12]  646 	nop	; Tune this count by hand, want ~.4uS (1*2)
      000121 00               [12]  647 	nop
      000122 C2 95            [12]  648 	clr	_LED ; final part of bit cycle, set bit low (2)
      000124 DB F3            [24]  649 	djnz	r3, 00004$ ; If there are more bits in this byte (2, ?)
      000126 DA CB            [24]  650 	djnz	r2, 00001$ ; If there are more LEDs (2, ?)
                                    651 ;	bitbang.c:124: }
      000128 22               [24]  652 	ret
                                    653 	.area CSEG    (CODE)
                                    654 	.area CONST   (CODE)
                                    655 	.area XINIT   (CODE)
                                    656 	.area CABS    (ABS,CODE)
