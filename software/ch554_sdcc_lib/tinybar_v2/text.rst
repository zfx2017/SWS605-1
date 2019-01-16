                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module text
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _text
                                     12 	.globl _UIF_BUS_RST
                                     13 	.globl _UIF_DETECT
                                     14 	.globl _UIF_TRANSFER
                                     15 	.globl _UIF_SUSPEND
                                     16 	.globl _UIF_HST_SOF
                                     17 	.globl _UIF_FIFO_OV
                                     18 	.globl _U_SIE_FREE
                                     19 	.globl _U_TOG_OK
                                     20 	.globl _U_IS_NAK
                                     21 	.globl _ADC_CHAN0
                                     22 	.globl _ADC_CHAN1
                                     23 	.globl _CMP_CHAN
                                     24 	.globl _ADC_START
                                     25 	.globl _ADC_IF
                                     26 	.globl _CMP_IF
                                     27 	.globl _CMPO
                                     28 	.globl _U1RI
                                     29 	.globl _U1TI
                                     30 	.globl _U1RB8
                                     31 	.globl _U1TB8
                                     32 	.globl _U1REN
                                     33 	.globl _U1SMOD
                                     34 	.globl _U1SM0
                                     35 	.globl _S0_R_FIFO
                                     36 	.globl _S0_T_FIFO
                                     37 	.globl _S0_FREE
                                     38 	.globl _S0_IF_BYTE
                                     39 	.globl _S0_IF_FIRST
                                     40 	.globl _S0_IF_OV
                                     41 	.globl _S0_FST_ACT
                                     42 	.globl _CP_RL2
                                     43 	.globl _C_T2
                                     44 	.globl _TR2
                                     45 	.globl _EXEN2
                                     46 	.globl _TCLK
                                     47 	.globl _RCLK
                                     48 	.globl _EXF2
                                     49 	.globl _CAP1F
                                     50 	.globl _TF2
                                     51 	.globl _RI
                                     52 	.globl _TI
                                     53 	.globl _RB8
                                     54 	.globl _TB8
                                     55 	.globl _REN
                                     56 	.globl _SM2
                                     57 	.globl _SM1
                                     58 	.globl _SM0
                                     59 	.globl _IT0
                                     60 	.globl _IE0
                                     61 	.globl _IT1
                                     62 	.globl _IE1
                                     63 	.globl _TR0
                                     64 	.globl _TF0
                                     65 	.globl _TR1
                                     66 	.globl _TF1
                                     67 	.globl _RXD
                                     68 	.globl _PWM1_
                                     69 	.globl _TXD
                                     70 	.globl _PWM2_
                                     71 	.globl _AIN3
                                     72 	.globl _VBUS1
                                     73 	.globl _INT0
                                     74 	.globl _TXD1_
                                     75 	.globl _INT1
                                     76 	.globl _T0
                                     77 	.globl _RXD1_
                                     78 	.globl _PWM2
                                     79 	.globl _T1
                                     80 	.globl _UDP
                                     81 	.globl _UDM
                                     82 	.globl _TIN0
                                     83 	.globl _CAP1
                                     84 	.globl _T2
                                     85 	.globl _AIN0
                                     86 	.globl _VBUS2
                                     87 	.globl _TIN1
                                     88 	.globl _CAP2
                                     89 	.globl _T2EX
                                     90 	.globl _RXD_
                                     91 	.globl _TXD_
                                     92 	.globl _AIN1
                                     93 	.globl _UCC1
                                     94 	.globl _TIN2
                                     95 	.globl _SCS
                                     96 	.globl _CAP1_
                                     97 	.globl _T2_
                                     98 	.globl _AIN2
                                     99 	.globl _UCC2
                                    100 	.globl _TIN3
                                    101 	.globl _PWM1
                                    102 	.globl _MOSI
                                    103 	.globl _TIN4
                                    104 	.globl _RXD1
                                    105 	.globl _MISO
                                    106 	.globl _TIN5
                                    107 	.globl _TXD1
                                    108 	.globl _SCK
                                    109 	.globl _IE_SPI0
                                    110 	.globl _IE_TKEY
                                    111 	.globl _IE_USB
                                    112 	.globl _IE_ADC
                                    113 	.globl _IE_UART1
                                    114 	.globl _IE_PWMX
                                    115 	.globl _IE_GPIO
                                    116 	.globl _IE_WDOG
                                    117 	.globl _PX0
                                    118 	.globl _PT0
                                    119 	.globl _PX1
                                    120 	.globl _PT1
                                    121 	.globl _PS
                                    122 	.globl _PT2
                                    123 	.globl _PL_FLAG
                                    124 	.globl _PH_FLAG
                                    125 	.globl _EX0
                                    126 	.globl _ET0
                                    127 	.globl _EX1
                                    128 	.globl _ET1
                                    129 	.globl _ES
                                    130 	.globl _ET2
                                    131 	.globl _E_DIS
                                    132 	.globl _EA
                                    133 	.globl _P
                                    134 	.globl _F1
                                    135 	.globl _OV
                                    136 	.globl _RS0
                                    137 	.globl _RS1
                                    138 	.globl _F0
                                    139 	.globl _AC
                                    140 	.globl _CY
                                    141 	.globl _UEP1_DMA_H
                                    142 	.globl _UEP1_DMA_L
                                    143 	.globl _UEP1_DMA
                                    144 	.globl _UEP0_DMA_H
                                    145 	.globl _UEP0_DMA_L
                                    146 	.globl _UEP0_DMA
                                    147 	.globl _UEP2_3_MOD
                                    148 	.globl _UEP4_1_MOD
                                    149 	.globl _UEP3_DMA_H
                                    150 	.globl _UEP3_DMA_L
                                    151 	.globl _UEP3_DMA
                                    152 	.globl _UEP2_DMA_H
                                    153 	.globl _UEP2_DMA_L
                                    154 	.globl _UEP2_DMA
                                    155 	.globl _USB_DEV_AD
                                    156 	.globl _USB_CTRL
                                    157 	.globl _USB_INT_EN
                                    158 	.globl _UEP4_T_LEN
                                    159 	.globl _UEP4_CTRL
                                    160 	.globl _UEP0_T_LEN
                                    161 	.globl _UEP0_CTRL
                                    162 	.globl _USB_RX_LEN
                                    163 	.globl _USB_MIS_ST
                                    164 	.globl _USB_INT_ST
                                    165 	.globl _USB_INT_FG
                                    166 	.globl _UEP3_T_LEN
                                    167 	.globl _UEP3_CTRL
                                    168 	.globl _UEP2_T_LEN
                                    169 	.globl _UEP2_CTRL
                                    170 	.globl _UEP1_T_LEN
                                    171 	.globl _UEP1_CTRL
                                    172 	.globl _UDEV_CTRL
                                    173 	.globl _USB_C_CTRL
                                    174 	.globl _TKEY_DATH
                                    175 	.globl _TKEY_DATL
                                    176 	.globl _TKEY_DAT
                                    177 	.globl _TKEY_CTRL
                                    178 	.globl _ADC_DATA
                                    179 	.globl _ADC_CFG
                                    180 	.globl _ADC_CTRL
                                    181 	.globl _SBAUD1
                                    182 	.globl _SBUF1
                                    183 	.globl _SCON1
                                    184 	.globl _SPI0_SETUP
                                    185 	.globl _SPI0_CK_SE
                                    186 	.globl _SPI0_CTRL
                                    187 	.globl _SPI0_DATA
                                    188 	.globl _SPI0_STAT
                                    189 	.globl _PWM_CK_SE
                                    190 	.globl _PWM_CTRL
                                    191 	.globl _PWM_DATA1
                                    192 	.globl _PWM_DATA2
                                    193 	.globl _T2CAP1H
                                    194 	.globl _T2CAP1L
                                    195 	.globl _T2CAP1
                                    196 	.globl _TH2
                                    197 	.globl _TL2
                                    198 	.globl _T2COUNT
                                    199 	.globl _RCAP2H
                                    200 	.globl _RCAP2L
                                    201 	.globl _RCAP2
                                    202 	.globl _T2MOD
                                    203 	.globl _T2CON
                                    204 	.globl _SBUF
                                    205 	.globl _SCON
                                    206 	.globl _TH1
                                    207 	.globl _TH0
                                    208 	.globl _TL1
                                    209 	.globl _TL0
                                    210 	.globl _TMOD
                                    211 	.globl _TCON
                                    212 	.globl _XBUS_AUX
                                    213 	.globl _PIN_FUNC
                                    214 	.globl _P3_DIR_PU
                                    215 	.globl _P3_MOD_OC
                                    216 	.globl _P3
                                    217 	.globl _P2
                                    218 	.globl _P1_DIR_PU
                                    219 	.globl _P1_MOD_OC
                                    220 	.globl _P1
                                    221 	.globl _ROM_CTRL
                                    222 	.globl _ROM_DATA_H
                                    223 	.globl _ROM_DATA_L
                                    224 	.globl _ROM_DATA
                                    225 	.globl _ROM_ADDR_H
                                    226 	.globl _ROM_ADDR_L
                                    227 	.globl _ROM_ADDR
                                    228 	.globl _GPIO_IE
                                    229 	.globl _IP_EX
                                    230 	.globl _IE_EX
                                    231 	.globl _IP
                                    232 	.globl _IE
                                    233 	.globl _WDOG_COUNT
                                    234 	.globl _RESET_KEEP
                                    235 	.globl _WAKE_CTRL
                                    236 	.globl _CLOCK_CFG
                                    237 	.globl _PCON
                                    238 	.globl _GLOBAL_CFG
                                    239 	.globl _SAFE_MOD
                                    240 	.globl _DPH
                                    241 	.globl _DPL
                                    242 	.globl _SP
                                    243 	.globl _B
                                    244 	.globl _ACC
                                    245 	.globl _PSW
                                    246 ;--------------------------------------------------------
                                    247 ; special function registers
                                    248 ;--------------------------------------------------------
                                    249 	.area RSEG    (ABS,DATA)
      000000                        250 	.org 0x0000
                           0000D0   251 _PSW	=	0x00d0
                           0000E0   252 _ACC	=	0x00e0
                           0000F0   253 _B	=	0x00f0
                           000081   254 _SP	=	0x0081
                           000082   255 _DPL	=	0x0082
                           000083   256 _DPH	=	0x0083
                           0000A1   257 _SAFE_MOD	=	0x00a1
                           0000B1   258 _GLOBAL_CFG	=	0x00b1
                           000087   259 _PCON	=	0x0087
                           0000B9   260 _CLOCK_CFG	=	0x00b9
                           0000A9   261 _WAKE_CTRL	=	0x00a9
                           0000FE   262 _RESET_KEEP	=	0x00fe
                           0000FF   263 _WDOG_COUNT	=	0x00ff
                           0000A8   264 _IE	=	0x00a8
                           0000B8   265 _IP	=	0x00b8
                           0000E8   266 _IE_EX	=	0x00e8
                           0000E9   267 _IP_EX	=	0x00e9
                           0000C7   268 _GPIO_IE	=	0x00c7
                           008584   269 _ROM_ADDR	=	0x8584
                           000084   270 _ROM_ADDR_L	=	0x0084
                           000085   271 _ROM_ADDR_H	=	0x0085
                           008F8E   272 _ROM_DATA	=	0x8f8e
                           00008E   273 _ROM_DATA_L	=	0x008e
                           00008F   274 _ROM_DATA_H	=	0x008f
                           000086   275 _ROM_CTRL	=	0x0086
                           000090   276 _P1	=	0x0090
                           000092   277 _P1_MOD_OC	=	0x0092
                           000093   278 _P1_DIR_PU	=	0x0093
                           0000A0   279 _P2	=	0x00a0
                           0000B0   280 _P3	=	0x00b0
                           000096   281 _P3_MOD_OC	=	0x0096
                           000097   282 _P3_DIR_PU	=	0x0097
                           0000C6   283 _PIN_FUNC	=	0x00c6
                           0000A2   284 _XBUS_AUX	=	0x00a2
                           000088   285 _TCON	=	0x0088
                           000089   286 _TMOD	=	0x0089
                           00008A   287 _TL0	=	0x008a
                           00008B   288 _TL1	=	0x008b
                           00008C   289 _TH0	=	0x008c
                           00008D   290 _TH1	=	0x008d
                           000098   291 _SCON	=	0x0098
                           000099   292 _SBUF	=	0x0099
                           0000C8   293 _T2CON	=	0x00c8
                           0000C9   294 _T2MOD	=	0x00c9
                           00CBCA   295 _RCAP2	=	0xcbca
                           0000CA   296 _RCAP2L	=	0x00ca
                           0000CB   297 _RCAP2H	=	0x00cb
                           00CDCC   298 _T2COUNT	=	0xcdcc
                           0000CC   299 _TL2	=	0x00cc
                           0000CD   300 _TH2	=	0x00cd
                           00CFCE   301 _T2CAP1	=	0xcfce
                           0000CE   302 _T2CAP1L	=	0x00ce
                           0000CF   303 _T2CAP1H	=	0x00cf
                           00009B   304 _PWM_DATA2	=	0x009b
                           00009C   305 _PWM_DATA1	=	0x009c
                           00009D   306 _PWM_CTRL	=	0x009d
                           00009E   307 _PWM_CK_SE	=	0x009e
                           0000F8   308 _SPI0_STAT	=	0x00f8
                           0000F9   309 _SPI0_DATA	=	0x00f9
                           0000FA   310 _SPI0_CTRL	=	0x00fa
                           0000FB   311 _SPI0_CK_SE	=	0x00fb
                           0000FC   312 _SPI0_SETUP	=	0x00fc
                           0000C0   313 _SCON1	=	0x00c0
                           0000C1   314 _SBUF1	=	0x00c1
                           0000C2   315 _SBAUD1	=	0x00c2
                           000080   316 _ADC_CTRL	=	0x0080
                           00009A   317 _ADC_CFG	=	0x009a
                           00009F   318 _ADC_DATA	=	0x009f
                           0000C3   319 _TKEY_CTRL	=	0x00c3
                           00C5C4   320 _TKEY_DAT	=	0xc5c4
                           0000C4   321 _TKEY_DATL	=	0x00c4
                           0000C5   322 _TKEY_DATH	=	0x00c5
                           000091   323 _USB_C_CTRL	=	0x0091
                           0000D1   324 _UDEV_CTRL	=	0x00d1
                           0000D2   325 _UEP1_CTRL	=	0x00d2
                           0000D3   326 _UEP1_T_LEN	=	0x00d3
                           0000D4   327 _UEP2_CTRL	=	0x00d4
                           0000D5   328 _UEP2_T_LEN	=	0x00d5
                           0000D6   329 _UEP3_CTRL	=	0x00d6
                           0000D7   330 _UEP3_T_LEN	=	0x00d7
                           0000D8   331 _USB_INT_FG	=	0x00d8
                           0000D9   332 _USB_INT_ST	=	0x00d9
                           0000DA   333 _USB_MIS_ST	=	0x00da
                           0000DB   334 _USB_RX_LEN	=	0x00db
                           0000DC   335 _UEP0_CTRL	=	0x00dc
                           0000DD   336 _UEP0_T_LEN	=	0x00dd
                           0000DE   337 _UEP4_CTRL	=	0x00de
                           0000DF   338 _UEP4_T_LEN	=	0x00df
                           0000E1   339 _USB_INT_EN	=	0x00e1
                           0000E2   340 _USB_CTRL	=	0x00e2
                           0000E3   341 _USB_DEV_AD	=	0x00e3
                           00E5E4   342 _UEP2_DMA	=	0xe5e4
                           0000E4   343 _UEP2_DMA_L	=	0x00e4
                           0000E5   344 _UEP2_DMA_H	=	0x00e5
                           00E7E6   345 _UEP3_DMA	=	0xe7e6
                           0000E6   346 _UEP3_DMA_L	=	0x00e6
                           0000E7   347 _UEP3_DMA_H	=	0x00e7
                           0000EA   348 _UEP4_1_MOD	=	0x00ea
                           0000EB   349 _UEP2_3_MOD	=	0x00eb
                           00EDEC   350 _UEP0_DMA	=	0xedec
                           0000EC   351 _UEP0_DMA_L	=	0x00ec
                           0000ED   352 _UEP0_DMA_H	=	0x00ed
                           00EFEE   353 _UEP1_DMA	=	0xefee
                           0000EE   354 _UEP1_DMA_L	=	0x00ee
                           0000EF   355 _UEP1_DMA_H	=	0x00ef
                                    356 ;--------------------------------------------------------
                                    357 ; special function bits
                                    358 ;--------------------------------------------------------
                                    359 	.area RSEG    (ABS,DATA)
      000000                        360 	.org 0x0000
                           0000D7   361 _CY	=	0x00d7
                           0000D6   362 _AC	=	0x00d6
                           0000D5   363 _F0	=	0x00d5
                           0000D4   364 _RS1	=	0x00d4
                           0000D3   365 _RS0	=	0x00d3
                           0000D2   366 _OV	=	0x00d2
                           0000D1   367 _F1	=	0x00d1
                           0000D0   368 _P	=	0x00d0
                           0000AF   369 _EA	=	0x00af
                           0000AE   370 _E_DIS	=	0x00ae
                           0000AD   371 _ET2	=	0x00ad
                           0000AC   372 _ES	=	0x00ac
                           0000AB   373 _ET1	=	0x00ab
                           0000AA   374 _EX1	=	0x00aa
                           0000A9   375 _ET0	=	0x00a9
                           0000A8   376 _EX0	=	0x00a8
                           0000BF   377 _PH_FLAG	=	0x00bf
                           0000BE   378 _PL_FLAG	=	0x00be
                           0000BD   379 _PT2	=	0x00bd
                           0000BC   380 _PS	=	0x00bc
                           0000BB   381 _PT1	=	0x00bb
                           0000BA   382 _PX1	=	0x00ba
                           0000B9   383 _PT0	=	0x00b9
                           0000B8   384 _PX0	=	0x00b8
                           0000EF   385 _IE_WDOG	=	0x00ef
                           0000EE   386 _IE_GPIO	=	0x00ee
                           0000ED   387 _IE_PWMX	=	0x00ed
                           0000EC   388 _IE_UART1	=	0x00ec
                           0000EB   389 _IE_ADC	=	0x00eb
                           0000EA   390 _IE_USB	=	0x00ea
                           0000E9   391 _IE_TKEY	=	0x00e9
                           0000E8   392 _IE_SPI0	=	0x00e8
                           000097   393 _SCK	=	0x0097
                           000097   394 _TXD1	=	0x0097
                           000097   395 _TIN5	=	0x0097
                           000096   396 _MISO	=	0x0096
                           000096   397 _RXD1	=	0x0096
                           000096   398 _TIN4	=	0x0096
                           000095   399 _MOSI	=	0x0095
                           000095   400 _PWM1	=	0x0095
                           000095   401 _TIN3	=	0x0095
                           000095   402 _UCC2	=	0x0095
                           000095   403 _AIN2	=	0x0095
                           000094   404 _T2_	=	0x0094
                           000094   405 _CAP1_	=	0x0094
                           000094   406 _SCS	=	0x0094
                           000094   407 _TIN2	=	0x0094
                           000094   408 _UCC1	=	0x0094
                           000094   409 _AIN1	=	0x0094
                           000093   410 _TXD_	=	0x0093
                           000092   411 _RXD_	=	0x0092
                           000091   412 _T2EX	=	0x0091
                           000091   413 _CAP2	=	0x0091
                           000091   414 _TIN1	=	0x0091
                           000091   415 _VBUS2	=	0x0091
                           000091   416 _AIN0	=	0x0091
                           000090   417 _T2	=	0x0090
                           000090   418 _CAP1	=	0x0090
                           000090   419 _TIN0	=	0x0090
                           0000B7   420 _UDM	=	0x00b7
                           0000B6   421 _UDP	=	0x00b6
                           0000B5   422 _T1	=	0x00b5
                           0000B4   423 _PWM2	=	0x00b4
                           0000B4   424 _RXD1_	=	0x00b4
                           0000B4   425 _T0	=	0x00b4
                           0000B3   426 _INT1	=	0x00b3
                           0000B2   427 _TXD1_	=	0x00b2
                           0000B2   428 _INT0	=	0x00b2
                           0000B2   429 _VBUS1	=	0x00b2
                           0000B2   430 _AIN3	=	0x00b2
                           0000B1   431 _PWM2_	=	0x00b1
                           0000B1   432 _TXD	=	0x00b1
                           0000B0   433 _PWM1_	=	0x00b0
                           0000B0   434 _RXD	=	0x00b0
                           00008F   435 _TF1	=	0x008f
                           00008E   436 _TR1	=	0x008e
                           00008D   437 _TF0	=	0x008d
                           00008C   438 _TR0	=	0x008c
                           00008B   439 _IE1	=	0x008b
                           00008A   440 _IT1	=	0x008a
                           000089   441 _IE0	=	0x0089
                           000088   442 _IT0	=	0x0088
                           00009F   443 _SM0	=	0x009f
                           00009E   444 _SM1	=	0x009e
                           00009D   445 _SM2	=	0x009d
                           00009C   446 _REN	=	0x009c
                           00009B   447 _TB8	=	0x009b
                           00009A   448 _RB8	=	0x009a
                           000099   449 _TI	=	0x0099
                           000098   450 _RI	=	0x0098
                           0000CF   451 _TF2	=	0x00cf
                           0000CF   452 _CAP1F	=	0x00cf
                           0000CE   453 _EXF2	=	0x00ce
                           0000CD   454 _RCLK	=	0x00cd
                           0000CC   455 _TCLK	=	0x00cc
                           0000CB   456 _EXEN2	=	0x00cb
                           0000CA   457 _TR2	=	0x00ca
                           0000C9   458 _C_T2	=	0x00c9
                           0000C8   459 _CP_RL2	=	0x00c8
                           0000FF   460 _S0_FST_ACT	=	0x00ff
                           0000FE   461 _S0_IF_OV	=	0x00fe
                           0000FD   462 _S0_IF_FIRST	=	0x00fd
                           0000FC   463 _S0_IF_BYTE	=	0x00fc
                           0000FB   464 _S0_FREE	=	0x00fb
                           0000FA   465 _S0_T_FIFO	=	0x00fa
                           0000F8   466 _S0_R_FIFO	=	0x00f8
                           0000C7   467 _U1SM0	=	0x00c7
                           0000C5   468 _U1SMOD	=	0x00c5
                           0000C4   469 _U1REN	=	0x00c4
                           0000C3   470 _U1TB8	=	0x00c3
                           0000C2   471 _U1RB8	=	0x00c2
                           0000C1   472 _U1TI	=	0x00c1
                           0000C0   473 _U1RI	=	0x00c0
                           000087   474 _CMPO	=	0x0087
                           000086   475 _CMP_IF	=	0x0086
                           000085   476 _ADC_IF	=	0x0085
                           000084   477 _ADC_START	=	0x0084
                           000083   478 _CMP_CHAN	=	0x0083
                           000081   479 _ADC_CHAN1	=	0x0081
                           000080   480 _ADC_CHAN0	=	0x0080
                           0000DF   481 _U_IS_NAK	=	0x00df
                           0000DE   482 _U_TOG_OK	=	0x00de
                           0000DD   483 _U_SIE_FREE	=	0x00dd
                           0000DC   484 _UIF_FIFO_OV	=	0x00dc
                           0000DB   485 _UIF_HST_SOF	=	0x00db
                           0000DA   486 _UIF_SUSPEND	=	0x00da
                           0000D9   487 _UIF_TRANSFER	=	0x00d9
                           0000D8   488 _UIF_DETECT	=	0x00d8
                           0000D8   489 _UIF_BUS_RST	=	0x00d8
                                    490 ;--------------------------------------------------------
                                    491 ; overlayable register banks
                                    492 ;--------------------------------------------------------
                                    493 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        494 	.ds 8
                                    495 ;--------------------------------------------------------
                                    496 ; internal ram data
                                    497 ;--------------------------------------------------------
                                    498 	.area DSEG    (DATA)
                                    499 ;--------------------------------------------------------
                                    500 ; overlayable items in internal ram 
                                    501 ;--------------------------------------------------------
                                    502 ;--------------------------------------------------------
                                    503 ; indirectly addressable internal ram data
                                    504 ;--------------------------------------------------------
                                    505 	.area ISEG    (DATA)
                                    506 ;--------------------------------------------------------
                                    507 ; absolute internal ram data
                                    508 ;--------------------------------------------------------
                                    509 	.area IABS    (ABS,DATA)
                                    510 	.area IABS    (ABS,DATA)
                                    511 ;--------------------------------------------------------
                                    512 ; bit data
                                    513 ;--------------------------------------------------------
                                    514 	.area BSEG    (BIT)
                                    515 ;--------------------------------------------------------
                                    516 ; paged external ram data
                                    517 ;--------------------------------------------------------
                                    518 	.area PSEG    (PAG,XDATA)
                                    519 ;--------------------------------------------------------
                                    520 ; external ram data
                                    521 ;--------------------------------------------------------
                                    522 	.area XSEG    (XDATA)
                                    523 ;--------------------------------------------------------
                                    524 ; absolute external ram data
                                    525 ;--------------------------------------------------------
                                    526 	.area XABS    (ABS,XDATA)
                                    527 ;--------------------------------------------------------
                                    528 ; external initialized ram data
                                    529 ;--------------------------------------------------------
                                    530 	.area XISEG   (XDATA)
                                    531 	.area HOME    (CODE)
                                    532 	.area GSINIT0 (CODE)
                                    533 	.area GSINIT1 (CODE)
                                    534 	.area GSINIT2 (CODE)
                                    535 	.area GSINIT3 (CODE)
                                    536 	.area GSINIT4 (CODE)
                                    537 	.area GSINIT5 (CODE)
                                    538 	.area GSINIT  (CODE)
                                    539 	.area GSFINAL (CODE)
                                    540 	.area CSEG    (CODE)
                                    541 ;--------------------------------------------------------
                                    542 ; global & static initialisations
                                    543 ;--------------------------------------------------------
                                    544 	.area HOME    (CODE)
                                    545 	.area GSINIT  (CODE)
                                    546 	.area GSFINAL (CODE)
                                    547 	.area GSINIT  (CODE)
                                    548 ;--------------------------------------------------------
                                    549 ; Home
                                    550 ;--------------------------------------------------------
                                    551 	.area HOME    (CODE)
                                    552 	.area HOME    (CODE)
                                    553 ;--------------------------------------------------------
                                    554 ; code
                                    555 ;--------------------------------------------------------
                                    556 	.area CSEG    (CODE)
                                    557 	.area CSEG    (CODE)
                                    558 	.area CONST   (CODE)
      000E05                        559 _text:
      000E05 00                     560 	.db #0x00	; 0
      000E06 20                     561 	.db #0x20	; 32
      000E07 20                     562 	.db #0x20	; 32
      000E08 60                     563 	.db #0x60	; 96
      000E09 20                     564 	.db #0x20	; 32
      000E0A 20                     565 	.db #0x20	; 32
      000E0B 20                     566 	.db #0x20	; 32
      000E0C 10                     567 	.db #0x10	; 16
      000E0D 20                     568 	.db #0x20	; 32
      000E0E 10                     569 	.db #0x10	; 16
      000E0F FF                     570 	.db #0xff	; 255
      000E10 FF                     571 	.db #0xff	; 255
      000E11 00                     572 	.db #0x00	; 0
      000E12 00                     573 	.db #0x00	; 0
      000E13 00                     574 	.db #0x00	; 0
      000E14 00                     575 	.db #0x00	; 0
      000E15 00                     576 	.db #0x00	; 0
      000E16 00                     577 	.db #0x00	; 0
      000E17 FF                     578 	.db #0xff	; 255
      000E18 3F                     579 	.db #0x3f	; 63
      000E19 40                     580 	.db #0x40	; 64
      000E1A 40                     581 	.db #0x40	; 64
      000E1B 20                     582 	.db #0x20	; 32
      000E1C 40                     583 	.db #0x40	; 64
      000E1D 10                     584 	.db #0x10	; 16
      000E1E 40                     585 	.db #0x40	; 64
      000E1F 08                     586 	.db #0x08	; 8
      000E20 40                     587 	.db #0x40	; 64
      000E21 00                     588 	.db #0x00	; 0
      000E22 78                     589 	.db #0x78	; 120	'x'
      000E23 00                     590 	.db #0x00	; 0
      000E24 00                     591 	.db #0x00	; 0
      000E25 00                     592 	.db #0x00	; 0
      000E26 00                     593 	.db #0x00	; 0
      000E27 F8                     594 	.db #0xf8	; 248
      000E28 7F                     595 	.db #0x7f	; 127
      000E29 08                     596 	.db #0x08	; 8
      000E2A 21                     597 	.db #0x21	; 33
      000E2B 08                     598 	.db #0x08	; 8
      000E2C 21                     599 	.db #0x21	; 33
      000E2D FF                     600 	.db #0xff	; 255
      000E2E 3F                     601 	.db #0x3f	; 63
      000E2F 08                     602 	.db #0x08	; 8
      000E30 21                     603 	.db #0x21	; 33
      000E31 08                     604 	.db #0x08	; 8
      000E32 21                     605 	.db #0x21	; 33
      000E33 F8                     606 	.db #0xf8	; 248
      000E34 7F                     607 	.db #0x7f	; 127
      000E35 00                     608 	.db #0x00	; 0
      000E36 00                     609 	.db #0x00	; 0
      000E37 FE                     610 	.db #0xfe	; 254
      000E38 FF                     611 	.db #0xff	; 255
      000E39 02                     612 	.db #0x02	; 2
      000E3A 08                     613 	.db #0x08	; 8
      000E3B 22                     614 	.db #0x22	; 34
      000E3C 10                     615 	.db #0x10	; 16
      000E3D DA                     616 	.db #0xda	; 218
      000E3E 08                     617 	.db #0x08	; 8
      000E3F 06                     618 	.db #0x06	; 6
      000E40 07                     619 	.db #0x07	; 7
      000E41 00                     620 	.db #0x00	; 0
      000E42 00                     621 	.db #0x00	; 0
      000E43 00                     622 	.db #0x00	; 0
      000E44 00                     623 	.db #0x00	; 0
      000E45 04                     624 	.db #0x04	; 4
      000E46 10                     625 	.db #0x10	; 16
      000E47 24                     626 	.db #0x24	; 36
      000E48 08                     627 	.db #0x08	; 8
      000E49 44                     628 	.db #0x44	; 68	'D'
      000E4A 06                     629 	.db #0x06	; 6
      000E4B 84                     630 	.db #0x84	; 132
      000E4C 01                     631 	.db #0x01	; 1
      000E4D 64                     632 	.db #0x64	; 100	'd'
      000E4E 82                     633 	.db #0x82	; 130
      000E4F 9C                     634 	.db #0x9c	; 156
      000E50 4C                     635 	.db #0x4c	; 76	'L'
      000E51 40                     636 	.db #0x40	; 64
      000E52 20                     637 	.db #0x20	; 32
      000E53 30                     638 	.db #0x30	; 48	'0'
      000E54 18                     639 	.db #0x18	; 24
      000E55 0F                     640 	.db #0x0f	; 15
      000E56 06                     641 	.db #0x06	; 6
      000E57 C8                     642 	.db #0xc8	; 200
      000E58 01                     643 	.db #0x01	; 1
      000E59 08                     644 	.db #0x08	; 8
      000E5A 06                     645 	.db #0x06	; 6
      000E5B 08                     646 	.db #0x08	; 8
      000E5C 18                     647 	.db #0x18	; 24
      000E5D 28                     648 	.db #0x28	; 40
      000E5E 20                     649 	.db #0x20	; 32
      000E5F 18                     650 	.db #0x18	; 24
      000E60 40                     651 	.db #0x40	; 64
      000E61 00                     652 	.db #0x00	; 0
      000E62 80                     653 	.db #0x80	; 128
      000E63 00                     654 	.db #0x00	; 0
      000E64 00                     655 	.db #0x00	; 0
      000E65 40                     656 	.db #0x40	; 64
      000E66 00                     657 	.db #0x00	; 0
      000E67 40                     658 	.db #0x40	; 64
      000E68 40                     659 	.db #0x40	; 64
      000E69 42                     660 	.db #0x42	; 66	'B'
      000E6A 20                     661 	.db #0x20	; 32
      000E6B CC                     662 	.db #0xcc	; 204
      000E6C 1F                     663 	.db #0x1f	; 31
      000E6D 00                     664 	.db #0x00	; 0
      000E6E 20                     665 	.db #0x20	; 32
      000E6F 00                     666 	.db #0x00	; 0
      000E70 40                     667 	.db #0x40	; 64
      000E71 FC                     668 	.db #0xfc	; 252
      000E72 4F                     669 	.db #0x4f	; 79	'O'
      000E73 04                     670 	.db #0x04	; 4
      000E74 44                     671 	.db #0x44	; 68	'D'
      000E75 02                     672 	.db #0x02	; 2
      000E76 42                     673 	.db #0x42	; 66	'B'
      000E77 00                     674 	.db #0x00	; 0
      000E78 40                     675 	.db #0x40	; 64
      000E79 FC                     676 	.db #0xfc	; 252
      000E7A 7F                     677 	.db #0x7f	; 127
      000E7B 04                     678 	.db #0x04	; 4
      000E7C 42                     679 	.db #0x42	; 66	'B'
      000E7D 04                     680 	.db #0x04	; 4
      000E7E 44                     681 	.db #0x44	; 68	'D'
      000E7F FC                     682 	.db #0xfc	; 252
      000E80 43                     683 	.db #0x43	; 67	'C'
      000E81 00                     684 	.db #0x00	; 0
      000E82 40                     685 	.db #0x40	; 64
      000E83 00                     686 	.db #0x00	; 0
      000E84 00                     687 	.db #0x00	; 0
      000E85 20                     688 	.db #0x20	; 32
      000E86 40                     689 	.db #0x40	; 64
      000E87 10                     690 	.db #0x10	; 16
      000E88 30                     691 	.db #0x30	; 48	'0'
      000E89 08                     692 	.db #0x08	; 8
      000E8A 00                     693 	.db #0x00	; 0
      000E8B FC                     694 	.db #0xfc	; 252
      000E8C 77                     695 	.db #0x77	; 119	'w'
      000E8D 23                     696 	.db #0x23	; 35
      000E8E 80                     697 	.db #0x80	; 128
      000E8F 10                     698 	.db #0x10	; 16
      000E90 81                     699 	.db #0x81	; 129
      000E91 88                     700 	.db #0x88	; 136
      000E92 88                     701 	.db #0x88	; 136
      000E93 67                     702 	.db #0x67	; 103	'g'
      000E94 B2                     703 	.db #0xb2	; 178
      000E95 04                     704 	.db #0x04	; 4
      000E96 84                     705 	.db #0x84	; 132
      000E97 F4                     706 	.db #0xf4	; 244
      000E98 83                     707 	.db #0x83	; 131
      000E99 04                     708 	.db #0x04	; 4
      000E9A 80                     709 	.db #0x80	; 128
      000E9B 24                     710 	.db #0x24	; 36
      000E9C E0                     711 	.db #0xe0	; 224
      000E9D 54                     712 	.db #0x54	; 84	'T'
      000E9E 00                     713 	.db #0x00	; 0
      000E9F 8C                     714 	.db #0x8c	; 140
      000EA0 11                     715 	.db #0x11	; 17
      000EA1 00                     716 	.db #0x00	; 0
      000EA2 60                     717 	.db #0x60	; 96
      000EA3 00                     718 	.db #0x00	; 0
      000EA4 00                     719 	.db #0x00	; 0
      000EA5 00                     720 	.db #0x00	; 0
      000EA6 80                     721 	.db #0x80	; 128
      000EA7 00                     722 	.db #0x00	; 0
      000EA8 60                     723 	.db #0x60	; 96
      000EA9 FE                     724 	.db #0xfe	; 254
      000EAA 1F                     725 	.db #0x1f	; 31
      000EAB 02                     726 	.db #0x02	; 2
      000EAC 00                     727 	.db #0x00	; 0
      000EAD 02                     728 	.db #0x02	; 2
      000EAE 10                     729 	.db #0x10	; 16
      000EAF FA                     730 	.db #0xfa	; 250
      000EB0 12                     731 	.db #0x12	; 18
      000EB1 AA                     732 	.db #0xaa	; 170
      000EB2 12                     733 	.db #0x12	; 18
      000EB3 AA                     734 	.db #0xaa	; 170
      000EB4 52                     735 	.db #0x52	; 82	'R'
      000EB5 AA                     736 	.db #0xaa	; 170
      000EB6 92                     737 	.db #0x92	; 146
      000EB7 AA                     738 	.db #0xaa	; 170
      000EB8 72                     739 	.db #0x72	; 114	'r'
      000EB9 AA                     740 	.db #0xaa	; 170
      000EBA 1A                     741 	.db #0x1a	; 26
      000EBB AA                     742 	.db #0xaa	; 170
      000EBC 16                     743 	.db #0x16	; 22
      000EBD FA                     744 	.db #0xfa	; 250
      000EBE 12                     745 	.db #0x12	; 18
      000EBF 02                     746 	.db #0x02	; 2
      000EC0 10                     747 	.db #0x10	; 16
      000EC1 02                     748 	.db #0x02	; 2
      000EC2 10                     749 	.db #0x10	; 16
      000EC3 00                     750 	.db #0x00	; 0
      000EC4 00                     751 	.db #0x00	; 0
      000EC5 10                     752 	.db #0x10	; 16
      000EC6 01                     753 	.db #0x01	; 1
      000EC7 88                     754 	.db #0x88	; 136
      000EC8 00                     755 	.db #0x00	; 0
      000EC9 C4                     756 	.db #0xc4	; 196
      000ECA FF                     757 	.db #0xff	; 255
      000ECB 33                     758 	.db #0x33	; 51	'3'
      000ECC 00                     759 	.db #0x00	; 0
      000ECD 04                     760 	.db #0x04	; 4
      000ECE 42                     761 	.db #0x42	; 66	'B'
      000ECF F4                     762 	.db #0xf4	; 244
      000ED0 32                     763 	.db #0x32	; 50	'2'
      000ED1 94                     764 	.db #0x94	; 148
      000ED2 02                     765 	.db #0x02	; 2
      000ED3 94                     766 	.db #0x94	; 148
      000ED4 72                     767 	.db #0x72	; 114	'r'
      000ED5 F4                     768 	.db #0xf4	; 244
      000ED6 82                     769 	.db #0x82	; 130
      000ED7 9F                     770 	.db #0x9f	; 159
      000ED8 86                     771 	.db #0x86	; 134
      000ED9 F4                     772 	.db #0xf4	; 244
      000EDA 9A                     773 	.db #0x9a	; 154
      000EDB 94                     774 	.db #0x94	; 148
      000EDC 82                     775 	.db #0x82	; 130
      000EDD 94                     776 	.db #0x94	; 148
      000EDE E2                     777 	.db #0xe2	; 226
      000EDF F4                     778 	.db #0xf4	; 244
      000EE0 0A                     779 	.db #0x0a	; 10
      000EE1 04                     780 	.db #0x04	; 4
      000EE2 32                     781 	.db #0x32	; 50	'2'
      000EE3 00                     782 	.db #0x00	; 0
      000EE4 00                     783 	.db #0x00	; 0
      000EE5 20                     784 	.db #0x20	; 32
      000EE6 00                     785 	.db #0x00	; 0
      000EE7 20                     786 	.db #0x20	; 32
      000EE8 00                     787 	.db #0x00	; 0
      000EE9 FF                     788 	.db #0xff	; 255
      000EEA FF                     789 	.db #0xff	; 255
      000EEB 20                     790 	.db #0x20	; 32
      000EEC 00                     791 	.db #0x00	; 0
      000EED 24                     792 	.db #0x24	; 36
      000EEE 08                     793 	.db #0x08	; 8
      000EEF F4                     794 	.db #0xf4	; 244
      000EF0 0B                     795 	.db #0x0b	; 11
      000EF1 54                     796 	.db #0x54	; 84	'T'
      000EF2 19                     797 	.db #0x19	; 25
      000EF3 54                     798 	.db #0x54	; 84	'T'
      000EF4 69                     799 	.db #0x69	; 105	'i'
      000EF5 54                     800 	.db #0x54	; 84	'T'
      000EF6 09                     801 	.db #0x09	; 9
      000EF7 FF                     802 	.db #0xff	; 255
      000EF8 0B                     803 	.db #0x0b	; 11
      000EF9 54                     804 	.db #0x54	; 84	'T'
      000EFA 49                     805 	.db #0x49	; 73	'I'
      000EFB 55                     806 	.db #0x55	; 85	'U'
      000EFC 89                     807 	.db #0x89	; 137
      000EFD 56                     808 	.db #0x56	; 86	'V'
      000EFE 7D                     809 	.db #0x7d	; 125
      000EFF F4                     810 	.db #0xf4	; 244
      000F00 0B                     811 	.db #0x0b	; 11
      000F01 04                     812 	.db #0x04	; 4
      000F02 08                     813 	.db #0x08	; 8
      000F03 00                     814 	.db #0x00	; 0
      000F04 00                     815 	.db #0x00	; 0
      000F05 40                     816 	.db #0x40	; 64
      000F06 04                     817 	.db #0x04	; 4
      000F07 30                     818 	.db #0x30	; 48	'0'
      000F08 04                     819 	.db #0x04	; 4
      000F09 11                     820 	.db #0x11	; 17
      000F0A 04                     821 	.db #0x04	; 4
      000F0B 96                     822 	.db #0x96	; 150
      000F0C 04                     823 	.db #0x04	; 4
      000F0D 90                     824 	.db #0x90	; 144
      000F0E 04                     825 	.db #0x04	; 4
      000F0F 90                     826 	.db #0x90	; 144
      000F10 44                     827 	.db #0x44	; 68	'D'
      000F11 91                     828 	.db #0x91	; 145
      000F12 84                     829 	.db #0x84	; 132
      000F13 96                     830 	.db #0x96	; 150
      000F14 7E                     831 	.db #0x7e	; 126
      000F15 90                     832 	.db #0x90	; 144
      000F16 06                     833 	.db #0x06	; 6
      000F17 90                     834 	.db #0x90	; 144
      000F18 05                     835 	.db #0x05	; 5
      000F19 98                     836 	.db #0x98	; 152
      000F1A 04                     837 	.db #0x04	; 4
      000F1B 14                     838 	.db #0x14	; 20
      000F1C 04                     839 	.db #0x04	; 4
      000F1D 13                     840 	.db #0x13	; 19
      000F1E 04                     841 	.db #0x04	; 4
      000F1F 50                     842 	.db #0x50	; 80	'P'
      000F20 04                     843 	.db #0x04	; 4
      000F21 30                     844 	.db #0x30	; 48	'0'
      000F22 04                     845 	.db #0x04	; 4
      000F23 00                     846 	.db #0x00	; 0
      000F24 00                     847 	.db #0x00	; 0
      000F25 00                     848 	.db 0x00
      000F26 00                     849 	.db 0x00
      000F27 00                     850 	.db 0x00
      000F28 00                     851 	.db 0x00
      000F29 00                     852 	.db 0x00
      000F2A 00                     853 	.db 0x00
      000F2B 00                     854 	.db 0x00
      000F2C 00                     855 	.db 0x00
      000F2D 00                     856 	.db 0x00
      000F2E 00                     857 	.db 0x00
      000F2F 00                     858 	.db 0x00
      000F30 00                     859 	.db 0x00
      000F31 00                     860 	.db 0x00
      000F32 00                     861 	.db 0x00
      000F33 00                     862 	.db 0x00
      000F34 00                     863 	.db 0x00
      000F35 00                     864 	.db 0x00
      000F36 00                     865 	.db 0x00
      000F37 00                     866 	.db 0x00
      000F38 00                     867 	.db 0x00
      000F39 00                     868 	.db 0x00
      000F3A 00                     869 	.db 0x00
      000F3B 00                     870 	.db 0x00
      000F3C 00                     871 	.db 0x00
      000F3D 00                     872 	.db 0x00
      000F3E 00                     873 	.db 0x00
      000F3F 00                     874 	.db 0x00
      000F40 00                     875 	.db 0x00
      000F41 00                     876 	.db 0x00
      000F42 00                     877 	.db 0x00
      000F43 00                     878 	.db 0x00
      000F44 00                     879 	.db 0x00
      000F45 84                     880 	.db #0x84	; 132
      000F46 00                     881 	.db #0x00	; 0
      000F47 74                     882 	.db #0x74	; 116	't'
      000F48 1F                     883 	.db #0x1f	; 31
      000F49 2F                     884 	.db #0x2f	; 47
      000F4A 09                     885 	.db #0x09	; 9
      000F4B 24                     886 	.db #0x24	; 36
      000F4C 09                     887 	.db #0x09	; 9
      000F4D 24                     888 	.db #0x24	; 36
      000F4E 49                     889 	.db #0x49	; 73	'I'
      000F4F 24                     890 	.db #0x24	; 36
      000F50 9F                     891 	.db #0x9f	; 159
      000F51 2F                     892 	.db #0x2f	; 47
      000F52 40                     893 	.db #0x40	; 64
      000F53 E4                     894 	.db #0xe4	; 228
      000F54 3F                     895 	.db #0x3f	; 63
      000F55 84                     896 	.db #0x84	; 132
      000F56 80                     897 	.db #0x80	; 128
      000F57 70                     898 	.db #0x70	; 112	'p'
      000F58 40                     899 	.db #0x40	; 64
      000F59 8F                     900 	.db #0x8f	; 143
      000F5A 33                     901 	.db #0x33	; 51	'3'
      000F5B 08                     902 	.db #0x08	; 8
      000F5C 0C                     903 	.db #0x0c	; 12
      000F5D 08                     904 	.db #0x08	; 8
      000F5E 33                     905 	.db #0x33	; 51	'3'
      000F5F F8                     906 	.db #0xf8	; 248
      000F60 40                     907 	.db #0x40	; 64
      000F61 08                     908 	.db #0x08	; 8
      000F62 80                     909 	.db #0x80	; 128
      000F63 00                     910 	.db #0x00	; 0
      000F64 00                     911 	.db #0x00	; 0
      000F65 00                     912 	.db #0x00	; 0
      000F66 40                     913 	.db #0x40	; 64
      000F67 10                     914 	.db #0x10	; 16
      000F68 40                     915 	.db #0x40	; 64
      000F69 60                     916 	.db #0x60	; 96
      000F6A 40                     917 	.db #0x40	; 64
      000F6B 80                     918 	.db #0x80	; 128
      000F6C 43                     919 	.db #0x43	; 67	'C'
      000F6D 00                     920 	.db #0x00	; 0
      000F6E 40                     921 	.db #0x40	; 64
      000F6F FF                     922 	.db #0xff	; 255
      000F70 7F                     923 	.db #0x7f	; 127
      000F71 00                     924 	.db #0x00	; 0
      000F72 40                     925 	.db #0x40	; 64
      000F73 00                     926 	.db #0x00	; 0
      000F74 40                     927 	.db #0x40	; 64
      000F75 00                     928 	.db #0x00	; 0
      000F76 40                     929 	.db #0x40	; 64
      000F77 FF                     930 	.db #0xff	; 255
      000F78 7F                     931 	.db #0x7f	; 127
      000F79 00                     932 	.db #0x00	; 0
      000F7A 42                     933 	.db #0x42	; 66	'B'
      000F7B 00                     934 	.db #0x00	; 0
      000F7C 41                     935 	.db #0x41	; 65	'A'
      000F7D C0                     936 	.db #0xc0	; 192
      000F7E 40                     937 	.db #0x40	; 64
      000F7F 30                     938 	.db #0x30	; 48	'0'
      000F80 40                     939 	.db #0x40	; 64
      000F81 00                     940 	.db #0x00	; 0
      000F82 40                     941 	.db #0x40	; 64
      000F83 00                     942 	.db #0x00	; 0
      000F84 00                     943 	.db #0x00	; 0
      000F85 00                     944 	.db #0x00	; 0
      000F86 00                     945 	.db #0x00	; 0
      000F87 00                     946 	.db #0x00	; 0
      000F88 20                     947 	.db #0x20	; 32
      000F89 E0                     948 	.db #0xe0	; 224
      000F8A 10                     949 	.db #0x10	; 16
      000F8B 9C                     950 	.db #0x9c	; 156
      000F8C 08                     951 	.db #0x08	; 8
      000F8D 84                     952 	.db #0x84	; 132
      000F8E 06                     953 	.db #0x06	; 6
      000F8F 84                     954 	.db #0x84	; 132
      000F90 40                     955 	.db #0x40	; 64
      000F91 84                     956 	.db #0x84	; 132
      000F92 80                     957 	.db #0x80	; 128
      000F93 F4                     958 	.db #0xf4	; 244
      000F94 7F                     959 	.db #0x7f	; 127
      000F95 82                     960 	.db #0x82	; 130
      000F96 00                     961 	.db #0x00	; 0
      000F97 82                     962 	.db #0x82	; 130
      000F98 00                     963 	.db #0x00	; 0
      000F99 83                     964 	.db #0x83	; 131
      000F9A 02                     965 	.db #0x02	; 2
      000F9B 82                     966 	.db #0x82	; 130
      000F9C 04                     967 	.db #0x04	; 4
      000F9D 80                     968 	.db #0x80	; 128
      000F9E 08                     969 	.db #0x08	; 8
      000F9F 80                     970 	.db #0x80	; 128
      000FA0 30                     971 	.db #0x30	; 48	'0'
      000FA1 00                     972 	.db #0x00	; 0
      000FA2 00                     973 	.db #0x00	; 0
      000FA3 00                     974 	.db #0x00	; 0
      000FA4 00                     975 	.db #0x00	; 0
      000FA5 10                     976 	.db #0x10	; 16
      000FA6 10                     977 	.db #0x10	; 16
      000FA7 92                     978 	.db #0x92	; 146
      000FA8 0C                     979 	.db #0x0c	; 12
      000FA9 92                     980 	.db #0x92	; 146
      000FAA FF                     981 	.db #0xff	; 255
      000FAB FE                     982 	.db #0xfe	; 254
      000FAC 44                     983 	.db #0x44	; 68	'D'
      000FAD 92                     984 	.db #0x92	; 146
      000FAE 44                     985 	.db #0x44	; 68	'D'
      000FAF 92                     986 	.db #0x92	; 146
      000FB0 44                     987 	.db #0x44	; 68	'D'
      000FB1 FE                     988 	.db #0xfe	; 254
      000FB2 FC                     989 	.db #0xfc	; 252
      000FB3 10                     990 	.db #0x10	; 16
      000FB4 00                     991 	.db #0x00	; 0
      000FB5 09                     992 	.db #0x09	; 9
      000FB6 08                     993 	.db #0x08	; 8
      000FB7 8A                     994 	.db #0x8a	; 138
      000FB8 08                     995 	.db #0x08	; 8
      000FB9 8C                     996 	.db #0x8c	; 140
      000FBA 08                     997 	.db #0x08	; 8
      000FBB F8                     998 	.db #0xf8	; 248
      000FBC FF                     999 	.db #0xff	; 255
      000FBD 8C                    1000 	.db #0x8c	; 140
      000FBE 08                    1001 	.db #0x08	; 8
      000FBF 8A                    1002 	.db #0x8a	; 138
      000FC0 08                    1003 	.db #0x08	; 8
      000FC1 09                    1004 	.db #0x09	; 9
      000FC2 08                    1005 	.db #0x08	; 8
      000FC3 00                    1006 	.db #0x00	; 0
      000FC4 00                    1007 	.db #0x00	; 0
      000FC5 00                    1008 	.db 0x00
      000FC6 00                    1009 	.db 0x00
      000FC7 00                    1010 	.db 0x00
      000FC8 00                    1011 	.db 0x00
      000FC9 00                    1012 	.db 0x00
      000FCA 00                    1013 	.db 0x00
      000FCB 00                    1014 	.db 0x00
      000FCC 00                    1015 	.db 0x00
      000FCD 00                    1016 	.db 0x00
      000FCE 00                    1017 	.db 0x00
      000FCF 00                    1018 	.db 0x00
      000FD0 00                    1019 	.db 0x00
      000FD1 00                    1020 	.db 0x00
      000FD2 00                    1021 	.db 0x00
      000FD3 00                    1022 	.db 0x00
      000FD4 00                    1023 	.db 0x00
      000FD5 00                    1024 	.db 0x00
      000FD6 00                    1025 	.db 0x00
      000FD7 00                    1026 	.db 0x00
      000FD8 00                    1027 	.db 0x00
      000FD9 00                    1028 	.db 0x00
      000FDA 00                    1029 	.db 0x00
      000FDB 00                    1030 	.db 0x00
      000FDC 00                    1031 	.db 0x00
      000FDD 00                    1032 	.db 0x00
      000FDE 00                    1033 	.db 0x00
      000FDF 00                    1034 	.db 0x00
      000FE0 00                    1035 	.db 0x00
      000FE1 00                    1036 	.db 0x00
      000FE2 00                    1037 	.db 0x00
      000FE3 00                    1038 	.db 0x00
      000FE4 00                    1039 	.db 0x00
      000FE5 20                    1040 	.db #0x20	; 32
      000FE6 00                    1041 	.db #0x00	; 0
      000FE7 24                    1042 	.db #0x24	; 36
      000FE8 08                    1043 	.db #0x08	; 8
      000FE9 24                    1044 	.db #0x24	; 36
      000FEA 48                    1045 	.db #0x48	; 72	'H'
      000FEB 24                    1046 	.db #0x24	; 36
      000FEC 84                    1047 	.db #0x84	; 132
      000FED FE                    1048 	.db #0xfe	; 254
      000FEE 7F                    1049 	.db #0x7f	; 127
      000FEF 23                    1050 	.db #0x23	; 35
      000FF0 02                    1051 	.db #0x02	; 2
      000FF1 22                    1052 	.db #0x22	; 34
      000FF2 41                    1053 	.db #0x41	; 65	'A'
      000FF3 20                    1054 	.db #0x20	; 32
      000FF4 40                    1055 	.db #0x40	; 64
      000FF5 20                    1056 	.db #0x20	; 32
      000FF6 20                    1057 	.db #0x20	; 32
      000FF7 FF                    1058 	.db #0xff	; 255
      000FF8 13                    1059 	.db #0x13	; 19
      000FF9 20                    1060 	.db #0x20	; 32
      000FFA 0C                    1061 	.db #0x0c	; 12
      000FFB 22                    1062 	.db #0x22	; 34
      000FFC 14                    1063 	.db #0x14	; 20
      000FFD 2C                    1064 	.db #0x2c	; 44
      000FFE 22                    1065 	.db #0x22	; 34
      000FFF A0                    1066 	.db #0xa0	; 160
      001000 41                    1067 	.db #0x41	; 65	'A'
      001001 20                    1068 	.db #0x20	; 32
      001002 F8                    1069 	.db #0xf8	; 248
      001003 00                    1070 	.db #0x00	; 0
      001004 00                    1071 	.db #0x00	; 0
      001005 80                    1072 	.db #0x80	; 128
      001006 00                    1073 	.db #0x00	; 0
      001007 64                    1074 	.db #0x64	; 100	'd'
      001008 41                    1075 	.db #0x41	; 65	'A'
      001009 2C                    1076 	.db #0x2c	; 44
      00100A 21                    1077 	.db #0x21	; 33
      00100B 34                    1078 	.db #0x34	; 52	'4'
      00100C 91                    1079 	.db #0x91	; 145
      00100D 24                    1080 	.db #0x24	; 36
      00100E 89                    1081 	.db #0x89	; 137
      00100F 24                    1082 	.db #0x24	; 36
      001010 87                    1083 	.db #0x87	; 135
      001011 EC                    1084 	.db #0xec	; 236
      001012 4D                    1085 	.db #0x4d	; 77	'M'
      001013 32                    1086 	.db #0x32	; 50	'2'
      001014 55                    1087 	.db #0x55	; 85	'U'
      001015 22                    1088 	.db #0x22	; 34
      001016 25                    1089 	.db #0x25	; 37
      001017 22                    1090 	.db #0x22	; 34
      001018 25                    1091 	.db #0x25	; 37
      001019 32                    1092 	.db #0x32	; 50	'2'
      00101A 55                    1093 	.db #0x55	; 85	'U'
      00101B 2E                    1094 	.db #0x2e	; 46
      00101C 4D                    1095 	.db #0x4d	; 77	'M'
      00101D 23                    1096 	.db #0x23	; 35
      00101E 81                    1097 	.db #0x81	; 129
      00101F A2                    1098 	.db #0xa2	; 162
      001020 80                    1099 	.db #0x80	; 128
      001021 60                    1100 	.db #0x60	; 96
      001022 80                    1101 	.db #0x80	; 128
      001023 00                    1102 	.db #0x00	; 0
      001024 00                    1103 	.db #0x00	; 0
      001025 40                    1104 	.db #0x40	; 64
      001026 04                    1105 	.db #0x04	; 4
      001027 30                    1106 	.db #0x30	; 48	'0'
      001028 04                    1107 	.db #0x04	; 4
      001029 11                    1108 	.db #0x11	; 17
      00102A 04                    1109 	.db #0x04	; 4
      00102B 96                    1110 	.db #0x96	; 150
      00102C 04                    1111 	.db #0x04	; 4
      00102D 90                    1112 	.db #0x90	; 144
      00102E 04                    1113 	.db #0x04	; 4
      00102F 90                    1114 	.db #0x90	; 144
      001030 44                    1115 	.db #0x44	; 68	'D'
      001031 91                    1116 	.db #0x91	; 145
      001032 84                    1117 	.db #0x84	; 132
      001033 96                    1118 	.db #0x96	; 150
      001034 7E                    1119 	.db #0x7e	; 126
      001035 90                    1120 	.db #0x90	; 144
      001036 06                    1121 	.db #0x06	; 6
      001037 90                    1122 	.db #0x90	; 144
      001038 05                    1123 	.db #0x05	; 5
      001039 98                    1124 	.db #0x98	; 152
      00103A 04                    1125 	.db #0x04	; 4
      00103B 14                    1126 	.db #0x14	; 20
      00103C 04                    1127 	.db #0x04	; 4
      00103D 13                    1128 	.db #0x13	; 19
      00103E 04                    1129 	.db #0x04	; 4
      00103F 50                    1130 	.db #0x50	; 80	'P'
      001040 04                    1131 	.db #0x04	; 4
      001041 30                    1132 	.db #0x30	; 48	'0'
      001042 04                    1133 	.db #0x04	; 4
      001043 00                    1134 	.db #0x00	; 0
      001044 00                    1135 	.db #0x00	; 0
      001045 00                    1136 	.db #0x00	; 0
      001046 00                    1137 	.db #0x00	; 0
      001047 02                    1138 	.db #0x02	; 2
      001048 08                    1139 	.db #0x08	; 8
      001049 02                    1140 	.db #0x02	; 2
      00104A 18                    1141 	.db #0x18	; 24
      00104B 02                    1142 	.db #0x02	; 2
      00104C 08                    1143 	.db #0x08	; 8
      00104D 12                    1144 	.db #0x12	; 18
      00104E 04                    1145 	.db #0x04	; 4
      00104F 22                    1146 	.db #0x22	; 34
      001050 04                    1147 	.db #0x04	; 4
      001051 C2                    1148 	.db #0xc2	; 194
      001052 04                    1149 	.db #0x04	; 4
      001053 02                    1150 	.db #0x02	; 2
      001054 02                    1151 	.db #0x02	; 2
      001055 02                    1152 	.db #0x02	; 2
      001056 02                    1153 	.db #0x02	; 2
      001057 02                    1154 	.db #0x02	; 2
      001058 41                    1155 	.db #0x41	; 65	'A'
      001059 02                    1156 	.db #0x02	; 2
      00105A 81                    1157 	.db #0x81	; 129
      00105B 02                    1158 	.db #0x02	; 2
      00105C 40                    1159 	.db #0x40	; 64
      00105D FE                    1160 	.db #0xfe	; 254
      00105E 3F                    1161 	.db #0x3f	; 63
      00105F 00                    1162 	.db #0x00	; 0
      001060 00                    1163 	.db #0x00	; 0
      001061 00                    1164 	.db #0x00	; 0
      001062 00                    1165 	.db #0x00	; 0
      001063 00                    1166 	.db #0x00	; 0
      001064 00                    1167 	.db #0x00	; 0
      001065 00                    1168 	.db 0x00
      001066 00                    1169 	.db 0x00
      001067 00                    1170 	.db 0x00
      001068 00                    1171 	.db 0x00
      001069 00                    1172 	.db 0x00
      00106A 00                    1173 	.db 0x00
      00106B 00                    1174 	.db 0x00
      00106C 00                    1175 	.db 0x00
      00106D 00                    1176 	.db 0x00
      00106E 00                    1177 	.db 0x00
      00106F 00                    1178 	.db 0x00
      001070 00                    1179 	.db 0x00
      001071 00                    1180 	.db 0x00
      001072 00                    1181 	.db 0x00
      001073 00                    1182 	.db 0x00
      001074 00                    1183 	.db 0x00
      001075 00                    1184 	.db 0x00
      001076 00                    1185 	.db 0x00
      001077 00                    1186 	.db 0x00
      001078 00                    1187 	.db 0x00
      001079 00                    1188 	.db 0x00
      00107A 00                    1189 	.db 0x00
      00107B 00                    1190 	.db 0x00
      00107C 00                    1191 	.db 0x00
      00107D 00                    1192 	.db 0x00
      00107E 00                    1193 	.db 0x00
      00107F 00                    1194 	.db 0x00
      001080 00                    1195 	.db 0x00
      001081 00                    1196 	.db 0x00
      001082 00                    1197 	.db 0x00
      001083 00                    1198 	.db 0x00
      001084 00                    1199 	.db 0x00
      001085 00                    1200 	.db #0x00	; 0
      001086 00                    1201 	.db #0x00	; 0
      001087 48                    1202 	.db #0x48	; 72	'H'
      001088 04                    1203 	.db #0x04	; 4
      001089 48                    1204 	.db #0x48	; 72	'H'
      00108A 04                    1205 	.db #0x04	; 4
      00108B 48                    1206 	.db #0x48	; 72	'H'
      00108C C4                    1207 	.db #0xc4	; 196
      00108D F8                    1208 	.db #0xf8	; 248
      00108E 7F                    1209 	.db #0x7f	; 127
      00108F FC                    1210 	.db #0xfc	; 252
      001090 3F                    1211 	.db #0x3f	; 63
      001091 44                    1212 	.db #0x44	; 68	'D'
      001092 42                    1213 	.db #0x42	; 66	'B'
      001093 44                    1214 	.db #0x44	; 68	'D'
      001094 42                    1215 	.db #0x42	; 66	'B'
      001095 40                    1216 	.db #0x40	; 64
      001096 20                    1217 	.db #0x20	; 32
      001097 FE                    1218 	.db #0xfe	; 254
      001098 37                    1219 	.db #0x37	; 55	'7'
      001099 40                    1220 	.db #0x40	; 64
      00109A 1C                    1221 	.db #0x1c	; 28
      00109B 44                    1222 	.db #0x44	; 68	'D'
      00109C 3C                    1223 	.db #0x3c	; 60
      00109D C8                    1224 	.db #0xc8	; 200
      00109E 66                    1225 	.db #0x66	; 102	'f'
      00109F 50                    1226 	.db #0x50	; 80	'P'
      0010A0 43                    1227 	.db #0x43	; 67	'C'
      0010A1 40                    1228 	.db #0x40	; 64
      0010A2 60                    1229 	.db #0x60	; 96
      0010A3 00                    1230 	.db #0x00	; 0
      0010A4 00                    1231 	.db #0x00	; 0
      0010A5 00                    1232 	.db #0x00	; 0
      0010A6 00                    1233 	.db #0x00	; 0
      0010A7 C0                    1234 	.db #0xc0	; 192
      0010A8 20                    1235 	.db #0x20	; 32
      0010A9 C4                    1236 	.db #0xc4	; 196
      0010AA 30                    1237 	.db #0x30	; 48	'0'
      0010AB 4C                    1238 	.db #0x4c	; 76	'L'
      0010AC 99                    1239 	.db #0x99	; 153
      0010AD 34                    1240 	.db #0x34	; 52	'4'
      0010AE 4D                    1241 	.db #0x4d	; 77	'M'
      0010AF 44                    1242 	.db #0x44	; 68	'D'
      0010B0 4F                    1243 	.db #0x4f	; 79	'O'
      0010B1 C4                    1244 	.db #0xc4	; 196
      0010B2 5F                    1245 	.db #0x5f	; 95
      0010B3 BC                    1246 	.db #0xbc	; 188
      0010B4 75                    1247 	.db #0x75	; 117	'u'
      0010B5 54                    1248 	.db #0x54	; 84	'T'
      0010B6 25                    1249 	.db #0x25	; 37
      0010B7 44                    1250 	.db #0x44	; 68	'D'
      0010B8 65                    1251 	.db #0x65	; 101	'e'
      0010B9 44                    1252 	.db #0x44	; 68	'D'
      0010BA 55                    1253 	.db #0x55	; 85	'U'
      0010BB 34                    1254 	.db #0x34	; 52	'4'
      0010BC 4D                    1255 	.db #0x4d	; 77	'M'
      0010BD 3E                    1256 	.db #0x3e	; 62
      0010BE 45                    1257 	.db #0x45	; 69	'E'
      0010BF E2                    1258 	.db #0xe2	; 226
      0010C0 41                    1259 	.db #0x41	; 65	'A'
      0010C1 E0                    1260 	.db #0xe0	; 224
      0010C2 40                    1261 	.db #0x40	; 64
      0010C3 00                    1262 	.db #0x00	; 0
      0010C4 00                    1263 	.db #0x00	; 0
      0010C5 00                    1264 	.db #0x00	; 0
      0010C6 00                    1265 	.db #0x00	; 0
      0010C7 C0                    1266 	.db #0xc0	; 192
      0010C8 00                    1267 	.db #0x00	; 0
      0010C9 60                    1268 	.db #0x60	; 96
      0010CA 00                    1269 	.db #0x00	; 0
      0010CB F8                    1270 	.db #0xf8	; 248
      0010CC 7F                    1271 	.db #0x7f	; 127
      0010CD 06                    1272 	.db #0x06	; 6
      0010CE 00                    1273 	.db #0x00	; 0
      0010CF 42                    1274 	.db #0x42	; 66	'B'
      0010D0 18                    1275 	.db #0x18	; 24
      0010D1 60                    1276 	.db #0x60	; 96
      0010D2 0C                    1277 	.db #0x0c	; 12
      0010D3 1C                    1278 	.db #0x1c	; 28
      0010D4 07                    1279 	.db #0x07	; 7
      0010D5 1E                    1280 	.db #0x1e	; 30
      0010D6 42                    1281 	.db #0x42	; 66	'B'
      0010D7 D8                    1282 	.db #0xd8	; 216
      0010D8 7F                    1283 	.db #0x7f	; 127
      0010D9 D8                    1284 	.db #0xd8	; 216
      0010DA 7F                    1285 	.db #0x7f	; 127
      0010DB 18                    1286 	.db #0x18	; 24
      0010DC 00                    1287 	.db #0x00	; 0
      0010DD 58                    1288 	.db #0x58	; 88	'X'
      0010DE 03                    1289 	.db #0x03	; 3
      0010DF 78                    1290 	.db #0x78	; 120	'x'
      0010E0 0E                    1291 	.db #0x0e	; 14
      0010E1 18                    1292 	.db #0x18	; 24
      0010E2 18                    1293 	.db #0x18	; 24
      0010E3 00                    1294 	.db #0x00	; 0
      0010E4 00                    1295 	.db #0x00	; 0
      0010E5 00                    1296 	.db #0x00	; 0
      0010E6 00                    1297 	.db #0x00	; 0
      0010E7 00                    1298 	.db #0x00	; 0
      0010E8 00                    1299 	.db #0x00	; 0
      0010E9 00                    1300 	.db #0x00	; 0
      0010EA 00                    1301 	.db #0x00	; 0
      0010EB 00                    1302 	.db #0x00	; 0
      0010EC 00                    1303 	.db #0x00	; 0
      0010ED F8                    1304 	.db #0xf8	; 248
      0010EE 33                    1305 	.db #0x33	; 51	'3'
      0010EF F8                    1306 	.db #0xf8	; 248
      0010F0 30                    1307 	.db #0x30	; 48	'0'
      0010F1 00                    1308 	.db #0x00	; 0
      0010F2 00                    1309 	.db #0x00	; 0
      0010F3 00                    1310 	.db #0x00	; 0
      0010F4 00                    1311 	.db #0x00	; 0
      0010F5 00                    1312 	.db #0x00	; 0
      0010F6 00                    1313 	.db #0x00	; 0
      0010F7 00                    1314 	.db #0x00	; 0
      0010F8 00                    1315 	.db #0x00	; 0
      0010F9 00                    1316 	.db #0x00	; 0
      0010FA 00                    1317 	.db #0x00	; 0
      0010FB 00                    1318 	.db #0x00	; 0
      0010FC 00                    1319 	.db #0x00	; 0
      0010FD 00                    1320 	.db #0x00	; 0
      0010FE 00                    1321 	.db #0x00	; 0
      0010FF 00                    1322 	.db #0x00	; 0
      001100 00                    1323 	.db #0x00	; 0
      001101 00                    1324 	.db #0x00	; 0
      001102 00                    1325 	.db #0x00	; 0
      001103 00                    1326 	.db #0x00	; 0
      001104 00                    1327 	.db #0x00	; 0
      001105 00                    1328 	.db 0x00
      001106 00                    1329 	.db 0x00
      001107 00                    1330 	.db 0x00
      001108 00                    1331 	.db 0x00
      001109 00                    1332 	.db 0x00
      00110A 00                    1333 	.db 0x00
      00110B 00                    1334 	.db 0x00
      00110C 00                    1335 	.db 0x00
      00110D 00                    1336 	.db 0x00
      00110E 00                    1337 	.db 0x00
      00110F 00                    1338 	.db 0x00
      001110 00                    1339 	.db 0x00
      001111 00                    1340 	.db 0x00
      001112 00                    1341 	.db 0x00
      001113 00                    1342 	.db 0x00
      001114 00                    1343 	.db 0x00
      001115 00                    1344 	.db 0x00
      001116 00                    1345 	.db 0x00
      001117 00                    1346 	.db 0x00
      001118 00                    1347 	.db 0x00
      001119 00                    1348 	.db 0x00
      00111A 00                    1349 	.db 0x00
      00111B 00                    1350 	.db 0x00
      00111C 00                    1351 	.db 0x00
      00111D 00                    1352 	.db 0x00
      00111E 00                    1353 	.db 0x00
      00111F 00                    1354 	.db 0x00
      001120 00                    1355 	.db 0x00
      001121 00                    1356 	.db 0x00
      001122 00                    1357 	.db 0x00
      001123 00                    1358 	.db 0x00
      001124 00                    1359 	.db 0x00
      001125 00                    1360 	.db #0x00	; 0
      001126 00                    1361 	.db #0x00	; 0
      001127 48                    1362 	.db #0x48	; 72	'H'
      001128 88                    1363 	.db #0x88	; 136
      001129 48                    1364 	.db #0x48	; 72	'H'
      00112A 88                    1365 	.db #0x88	; 136
      00112B 48                    1366 	.db #0x48	; 72	'H'
      00112C 88                    1367 	.db #0x88	; 136
      00112D F8                    1368 	.db #0xf8	; 248
      00112E FF                    1369 	.db #0xff	; 255
      00112F 44                    1370 	.db #0x44	; 68	'D'
      001130 04                    1371 	.db #0x04	; 4
      001131 44                    1372 	.db #0x44	; 68	'D'
      001132 04                    1373 	.db #0x04	; 4
      001133 44                    1374 	.db #0x44	; 68	'D'
      001134 42                    1375 	.db #0x42	; 66	'B'
      001135 40                    1376 	.db #0x40	; 64
      001136 40                    1377 	.db #0x40	; 64
      001137 FE                    1378 	.db #0xfe	; 254
      001138 21                    1379 	.db #0x21	; 33
      001139 40                    1380 	.db #0x40	; 64
      00113A 1E                    1381 	.db #0x1e	; 30
      00113B 44                    1382 	.db #0x44	; 68	'D'
      00113C 3C                    1383 	.db #0x3c	; 60
      00113D 48                    1384 	.db #0x48	; 72	'H'
      00113E 42                    1385 	.db #0x42	; 66	'B'
      00113F F0                    1386 	.db #0xf0	; 240
      001140 81                    1387 	.db #0x81	; 129
      001141 40                    1388 	.db #0x40	; 64
      001142 E0                    1389 	.db #0xe0	; 224
      001143 00                    1390 	.db #0x00	; 0
      001144 00                    1391 	.db #0x00	; 0
      001145 00                    1392 	.db #0x00	; 0
      001146 00                    1393 	.db #0x00	; 0
      001147 C0                    1394 	.db #0xc0	; 192
      001148 00                    1395 	.db #0x00	; 0
      001149 24                    1396 	.db #0x24	; 36
      00114A 20                    1397 	.db #0x20	; 32
      00114B 2C                    1398 	.db #0x2c	; 44
      00114C 91                    1399 	.db #0x91	; 145
      00114D 34                    1400 	.db #0x34	; 52	'4'
      00114E 89                    1401 	.db #0x89	; 137
      00114F 64                    1402 	.db #0x64	; 100	'd'
      001150 8F                    1403 	.db #0x8f	; 143
      001151 A4                    1404 	.db #0xa4	; 164
      001152 9D                    1405 	.db #0x9d	; 157
      001153 3C                    1406 	.db #0x3c	; 60
      001154 55                    1407 	.db #0x55	; 85	'U'
      001155 24                    1408 	.db #0x24	; 36
      001156 65                    1409 	.db #0x65	; 101	'e'
      001157 24                    1410 	.db #0x24	; 36
      001158 65                    1411 	.db #0x65	; 101	'e'
      001159 24                    1412 	.db #0x24	; 36
      00115A 65                    1413 	.db #0x65	; 101	'e'
      00115B 3C                    1414 	.db #0x3c	; 60
      00115C 95                    1415 	.db #0x95	; 149
      00115D 24                    1416 	.db #0x24	; 36
      00115E 8D                    1417 	.db #0x8d	; 141
      00115F 20                    1418 	.db #0x20	; 32
      001160 80                    1419 	.db #0x80	; 128
      001161 C0                    1420 	.db #0xc0	; 192
      001162 80                    1421 	.db #0x80	; 128
      001163 00                    1422 	.db #0x00	; 0
      001164 00                    1423 	.db #0x00	; 0
      001165 00                    1424 	.db #0x00	; 0
      001166 00                    1425 	.db #0x00	; 0
      001167 84                    1426 	.db #0x84	; 132
      001168 C0                    1427 	.db #0xc0	; 192
      001169 88                    1428 	.db #0x88	; 136
      00116A 31                    1429 	.db #0x31	; 49	'1'
      00116B 10                    1430 	.db #0x10	; 16
      00116C 0D                    1431 	.db #0x0d	; 13
      00116D 00                    1432 	.db #0x00	; 0
      00116E 00                    1433 	.db #0x00	; 0
      00116F 80                    1434 	.db #0x80	; 128
      001170 83                    1435 	.db #0x83	; 131
      001171 78                    1436 	.db #0x78	; 120	'x'
      001172 80                    1437 	.db #0x80	; 128
      001173 00                    1438 	.db #0x00	; 0
      001174 80                    1439 	.db #0x80	; 128
      001175 00                    1440 	.db #0x00	; 0
      001176 80                    1441 	.db #0x80	; 128
      001177 FC                    1442 	.db #0xfc	; 252
      001178 9F                    1443 	.db #0x9f	; 159
      001179 00                    1444 	.db #0x00	; 0
      00117A 40                    1445 	.db #0x40	; 64
      00117B 00                    1446 	.db #0x00	; 0
      00117C 20                    1447 	.db #0x20	; 32
      00117D 18                    1448 	.db #0x18	; 24
      00117E 10                    1449 	.db #0x10	; 16
      00117F E0                    1450 	.db #0xe0	; 224
      001180 0C                    1451 	.db #0x0c	; 12
      001181 00                    1452 	.db #0x00	; 0
      001182 03                    1453 	.db #0x03	; 3
      001183 00                    1454 	.db #0x00	; 0
      001184 04                    1455 	.db #0x04	; 4
      001185 00                    1456 	.db #0x00	; 0
      001186 00                    1457 	.db #0x00	; 0
      001187 F0                    1458 	.db #0xf0	; 240
      001188 FF                    1459 	.db #0xff	; 255
      001189 10                    1460 	.db #0x10	; 16
      00118A 84                    1461 	.db #0x84	; 132
      00118B 10                    1462 	.db #0x10	; 16
      00118C 84                    1463 	.db #0x84	; 132
      00118D FE                    1464 	.db #0xfe	; 254
      00118E FF                    1465 	.db #0xff	; 255
      00118F 10                    1466 	.db #0x10	; 16
      001190 84                    1467 	.db #0x84	; 132
      001191 10                    1468 	.db #0x10	; 16
      001192 84                    1469 	.db #0x84	; 132
      001193 F0                    1470 	.db #0xf0	; 240
      001194 FF                    1471 	.db #0xff	; 255
      001195 00                    1472 	.db #0x00	; 0
      001196 00                    1473 	.db #0x00	; 0
      001197 F8                    1474 	.db #0xf8	; 248
      001198 7F                    1475 	.db #0x7f	; 127
      001199 04                    1476 	.db #0x04	; 4
      00119A 00                    1477 	.db #0x00	; 0
      00119B 04                    1478 	.db #0x04	; 4
      00119C 40                    1479 	.db #0x40	; 64
      00119D 84                    1480 	.db #0x84	; 132
      00119E 41                    1481 	.db #0x41	; 65	'A'
      00119F 74                    1482 	.db #0x74	; 116	't'
      0011A0 42                    1483 	.db #0x42	; 66	'B'
      0011A1 0C                    1484 	.db #0x0c	; 12
      0011A2 7C                    1485 	.db #0x7c	; 124
      0011A3 00                    1486 	.db #0x00	; 0
      0011A4 00                    1487 	.db #0x00	; 0
      0011A5 00                    1488 	.db 0x00
      0011A6 00                    1489 	.db 0x00
      0011A7 00                    1490 	.db 0x00
      0011A8 00                    1491 	.db 0x00
      0011A9 00                    1492 	.db 0x00
      0011AA 00                    1493 	.db 0x00
      0011AB 00                    1494 	.db 0x00
      0011AC 00                    1495 	.db 0x00
      0011AD 00                    1496 	.db 0x00
      0011AE 00                    1497 	.db 0x00
      0011AF 00                    1498 	.db 0x00
      0011B0 00                    1499 	.db 0x00
      0011B1 00                    1500 	.db 0x00
      0011B2 00                    1501 	.db 0x00
      0011B3 00                    1502 	.db 0x00
      0011B4 00                    1503 	.db 0x00
      0011B5 00                    1504 	.db 0x00
      0011B6 00                    1505 	.db 0x00
      0011B7 00                    1506 	.db 0x00
      0011B8 00                    1507 	.db 0x00
      0011B9 00                    1508 	.db 0x00
      0011BA 00                    1509 	.db 0x00
      0011BB 00                    1510 	.db 0x00
      0011BC 00                    1511 	.db 0x00
      0011BD 00                    1512 	.db 0x00
      0011BE 00                    1513 	.db 0x00
      0011BF 00                    1514 	.db 0x00
      0011C0 00                    1515 	.db 0x00
      0011C1 00                    1516 	.db 0x00
      0011C2 00                    1517 	.db 0x00
      0011C3 00                    1518 	.db 0x00
      0011C4 00                    1519 	.db 0x00
      0011C5 80                    1520 	.db #0x80	; 128
      0011C6 40                    1521 	.db #0x40	; 64
      0011C7 40                    1522 	.db #0x40	; 64
      0011C8 40                    1523 	.db #0x40	; 64
      0011C9 30                    1524 	.db #0x30	; 48	'0'
      0011CA 42                    1525 	.db #0x42	; 66	'B'
      0011CB 1E                    1526 	.db #0x1e	; 30
      0011CC 42                    1527 	.db #0x42	; 66	'B'
      0011CD 10                    1528 	.db #0x10	; 16
      0011CE 42                    1529 	.db #0x42	; 66	'B'
      0011CF 10                    1530 	.db #0x10	; 16
      0011D0 42                    1531 	.db #0x42	; 66	'B'
      0011D1 10                    1532 	.db #0x10	; 16
      0011D2 42                    1533 	.db #0x42	; 66	'B'
      0011D3 FF                    1534 	.db #0xff	; 255
      0011D4 7F                    1535 	.db #0x7f	; 127
      0011D5 10                    1536 	.db #0x10	; 16
      0011D6 42                    1537 	.db #0x42	; 66	'B'
      0011D7 10                    1538 	.db #0x10	; 16
      0011D8 42                    1539 	.db #0x42	; 66	'B'
      0011D9 10                    1540 	.db #0x10	; 16
      0011DA 42                    1541 	.db #0x42	; 66	'B'
      0011DB 10                    1542 	.db #0x10	; 16
      0011DC 42                    1543 	.db #0x42	; 66	'B'
      0011DD 10                    1544 	.db #0x10	; 16
      0011DE 42                    1545 	.db #0x42	; 66	'B'
      0011DF 10                    1546 	.db #0x10	; 16
      0011E0 40                    1547 	.db #0x40	; 64
      0011E1 00                    1548 	.db #0x00	; 0
      0011E2 40                    1549 	.db #0x40	; 64
      0011E3 00                    1550 	.db #0x00	; 0
      0011E4 00                    1551 	.db #0x00	; 0
      0011E5 00                    1552 	.db #0x00	; 0
      0011E6 00                    1553 	.db #0x00	; 0
      0011E7 00                    1554 	.db #0x00	; 0
      0011E8 00                    1555 	.db #0x00	; 0
      0011E9 00                    1556 	.db #0x00	; 0
      0011EA 00                    1557 	.db #0x00	; 0
      0011EB FE                    1558 	.db #0xfe	; 254
      0011EC FF                    1559 	.db #0xff	; 255
      0011ED 82                    1560 	.db #0x82	; 130
      0011EE 40                    1561 	.db #0x40	; 64
      0011EF 82                    1562 	.db #0x82	; 130
      0011F0 40                    1563 	.db #0x40	; 64
      0011F1 82                    1564 	.db #0x82	; 130
      0011F2 40                    1565 	.db #0x40	; 64
      0011F3 82                    1566 	.db #0x82	; 130
      0011F4 40                    1567 	.db #0x40	; 64
      0011F5 82                    1568 	.db #0x82	; 130
      0011F6 40                    1569 	.db #0x40	; 64
      0011F7 82                    1570 	.db #0x82	; 130
      0011F8 40                    1571 	.db #0x40	; 64
      0011F9 82                    1572 	.db #0x82	; 130
      0011FA 40                    1573 	.db #0x40	; 64
      0011FB FE                    1574 	.db #0xfe	; 254
      0011FC FF                    1575 	.db #0xff	; 255
      0011FD 00                    1576 	.db #0x00	; 0
      0011FE 00                    1577 	.db #0x00	; 0
      0011FF 00                    1578 	.db #0x00	; 0
      001200 00                    1579 	.db #0x00	; 0
      001201 00                    1580 	.db #0x00	; 0
      001202 00                    1581 	.db #0x00	; 0
      001203 00                    1582 	.db #0x00	; 0
      001204 00                    1583 	.db #0x00	; 0
      001205 00                    1584 	.db #0x00	; 0
      001206 01                    1585 	.db #0x01	; 1
      001207 E0                    1586 	.db #0xe0	; 224
      001208 00                    1587 	.db #0x00	; 0
      001209 00                    1588 	.db #0x00	; 0
      00120A 00                    1589 	.db #0x00	; 0
      00120B FF                    1590 	.db #0xff	; 255
      00120C FF                    1591 	.db #0xff	; 255
      00120D 10                    1592 	.db #0x10	; 16
      00120E 00                    1593 	.db #0x00	; 0
      00120F 20                    1594 	.db #0x20	; 32
      001210 81                    1595 	.db #0x81	; 129
      001211 08                    1596 	.db #0x08	; 8
      001212 41                    1597 	.db #0x41	; 65	'A'
      001213 08                    1598 	.db #0x08	; 8
      001214 31                    1599 	.db #0x31	; 49	'1'
      001215 08                    1600 	.db #0x08	; 8
      001216 0D                    1601 	.db #0x0d	; 13
      001217 FF                    1602 	.db #0xff	; 255
      001218 03                    1603 	.db #0x03	; 3
      001219 08                    1604 	.db #0x08	; 8
      00121A 0D                    1605 	.db #0x0d	; 13
      00121B 08                    1606 	.db #0x08	; 8
      00121C 31                    1607 	.db #0x31	; 49	'1'
      00121D F8                    1608 	.db #0xf8	; 248
      00121E 41                    1609 	.db #0x41	; 65	'A'
      00121F 00                    1610 	.db #0x00	; 0
      001220 81                    1611 	.db #0x81	; 129
      001221 00                    1612 	.db #0x00	; 0
      001222 81                    1613 	.db #0x81	; 129
      001223 00                    1614 	.db #0x00	; 0
      001224 00                    1615 	.db #0x00	; 0
      001225 00                    1616 	.db #0x00	; 0
      001226 00                    1617 	.db #0x00	; 0
      001227 00                    1618 	.db #0x00	; 0
      001228 20                    1619 	.db #0x20	; 32
      001229 E0                    1620 	.db #0xe0	; 224
      00122A 10                    1621 	.db #0x10	; 16
      00122B 9C                    1622 	.db #0x9c	; 156
      00122C 08                    1623 	.db #0x08	; 8
      00122D 84                    1624 	.db #0x84	; 132
      00122E 06                    1625 	.db #0x06	; 6
      00122F 84                    1626 	.db #0x84	; 132
      001230 40                    1627 	.db #0x40	; 64
      001231 84                    1628 	.db #0x84	; 132
      001232 80                    1629 	.db #0x80	; 128
      001233 F4                    1630 	.db #0xf4	; 244
      001234 7F                    1631 	.db #0x7f	; 127
      001235 82                    1632 	.db #0x82	; 130
      001236 00                    1633 	.db #0x00	; 0
      001237 82                    1634 	.db #0x82	; 130
      001238 00                    1635 	.db #0x00	; 0
      001239 83                    1636 	.db #0x83	; 131
      00123A 02                    1637 	.db #0x02	; 2
      00123B 82                    1638 	.db #0x82	; 130
      00123C 04                    1639 	.db #0x04	; 4
      00123D 80                    1640 	.db #0x80	; 128
      00123E 08                    1641 	.db #0x08	; 8
      00123F 80                    1642 	.db #0x80	; 128
      001240 30                    1643 	.db #0x30	; 48	'0'
      001241 00                    1644 	.db #0x00	; 0
      001242 00                    1645 	.db #0x00	; 0
      001243 00                    1646 	.db #0x00	; 0
      001244 00                    1647 	.db #0x00	; 0
      001245 00                    1648 	.db 0x00
      001246 00                    1649 	.db 0x00
      001247 00                    1650 	.db 0x00
      001248 00                    1651 	.db 0x00
      001249 00                    1652 	.db 0x00
      00124A 00                    1653 	.db 0x00
      00124B 00                    1654 	.db 0x00
      00124C 00                    1655 	.db 0x00
      00124D 00                    1656 	.db 0x00
      00124E 00                    1657 	.db 0x00
      00124F 00                    1658 	.db 0x00
      001250 00                    1659 	.db 0x00
      001251 00                    1660 	.db 0x00
      001252 00                    1661 	.db 0x00
      001253 00                    1662 	.db 0x00
      001254 00                    1663 	.db 0x00
      001255 00                    1664 	.db 0x00
      001256 00                    1665 	.db 0x00
      001257 00                    1666 	.db 0x00
      001258 00                    1667 	.db 0x00
      001259 00                    1668 	.db 0x00
      00125A 00                    1669 	.db 0x00
      00125B 00                    1670 	.db 0x00
      00125C 00                    1671 	.db 0x00
      00125D 00                    1672 	.db 0x00
      00125E 00                    1673 	.db 0x00
      00125F 00                    1674 	.db 0x00
      001260 00                    1675 	.db 0x00
      001261 00                    1676 	.db 0x00
      001262 00                    1677 	.db 0x00
      001263 00                    1678 	.db 0x00
      001264 00                    1679 	.db 0x00
      001265 20                    1680 	.db #0x20	; 32
      001266 21                    1681 	.db #0x21	; 33
      001267 24                    1682 	.db #0x24	; 36
      001268 11                    1683 	.db #0x11	; 17
      001269 2C                    1684 	.db #0x2c	; 44
      00126A 4D                    1685 	.db #0x4d	; 77	'M'
      00126B 35                    1686 	.db #0x35	; 53	'5'
      00126C 81                    1687 	.db #0x81	; 129
      00126D E6                    1688 	.db #0xe6	; 230
      00126E 7F                    1689 	.db #0x7f	; 127
      00126F 34                    1690 	.db #0x34	; 52	'4'
      001270 05                    1691 	.db #0x05	; 5
      001271 2C                    1692 	.db #0x2c	; 44
      001272 59                    1693 	.db #0x59	; 89	'Y'
      001273 24                    1694 	.db #0x24	; 36
      001274 21                    1695 	.db #0x21	; 33
      001275 00                    1696 	.db #0x00	; 0
      001276 18                    1697 	.db #0x18	; 24
      001277 FC                    1698 	.db #0xfc	; 252
      001278 07                    1699 	.db #0x07	; 7
      001279 24                    1700 	.db #0x24	; 36
      00127A 00                    1701 	.db #0x00	; 0
      00127B 24                    1702 	.db #0x24	; 36
      00127C 00                    1703 	.db #0x00	; 0
      00127D E2                    1704 	.db #0xe2	; 226
      00127E FF                    1705 	.db #0xff	; 255
      00127F 22                    1706 	.db #0x22	; 34
      001280 00                    1707 	.db #0x00	; 0
      001281 22                    1708 	.db #0x22	; 34
      001282 00                    1709 	.db #0x00	; 0
      001283 00                    1710 	.db #0x00	; 0
      001284 00                    1711 	.db #0x00	; 0
      001285 40                    1712 	.db #0x40	; 64
      001286 04                    1713 	.db #0x04	; 4
      001287 40                    1714 	.db #0x40	; 64
      001288 04                    1715 	.db #0x04	; 4
      001289 44                    1716 	.db #0x44	; 68	'D'
      00128A 02                    1717 	.db #0x02	; 2
      00128B 54                    1718 	.db #0x54	; 84	'T'
      00128C 02                    1719 	.db #0x02	; 2
      00128D 54                    1720 	.db #0x54	; 84	'T'
      00128E 7F                    1721 	.db #0x7f	; 127
      00128F D4                    1722 	.db #0xd4	; 212
      001290 4A                    1723 	.db #0x4a	; 74	'J'
      001291 74                    1724 	.db #0x74	; 116	't'
      001292 4A                    1725 	.db #0x4a	; 74	'J'
      001293 5F                    1726 	.db #0x5f	; 95
      001294 4A                    1727 	.db #0x4a	; 74	'J'
      001295 54                    1728 	.db #0x54	; 84	'T'
      001296 4A                    1729 	.db #0x4a	; 74	'J'
      001297 54                    1730 	.db #0x54	; 84	'T'
      001298 4A                    1731 	.db #0x4a	; 74	'J'
      001299 D4                    1732 	.db #0xd4	; 212
      00129A 7E                    1733 	.db #0x7e	; 126
      00129B 54                    1734 	.db #0x54	; 84	'T'
      00129C 01                    1735 	.db #0x01	; 1
      00129D 54                    1736 	.db #0x54	; 84	'T'
      00129E 03                    1737 	.db #0x03	; 3
      00129F 44                    1738 	.db #0x44	; 68	'D'
      0012A0 06                    1739 	.db #0x06	; 6
      0012A1 40                    1740 	.db #0x40	; 64
      0012A2 02                    1741 	.db #0x02	; 2
      0012A3 00                    1742 	.db #0x00	; 0
      0012A4 00                    1743 	.db #0x00	; 0
      0012A5 70                    1744 	.db #0x70	; 112	'p'
      0012A6 00                    1745 	.db #0x00	; 0
      0012A7 00                    1746 	.db #0x00	; 0
      0012A8 00                    1747 	.db #0x00	; 0
      0012A9 FF                    1748 	.db #0xff	; 255
      0012AA FF                    1749 	.db #0xff	; 255
      0012AB 08                    1750 	.db #0x08	; 8
      0012AC 00                    1751 	.db #0x00	; 0
      0012AD B0                    1752 	.db #0xb0	; 176
      0012AE 80                    1753 	.db #0x80	; 128
      0012AF 88                    1754 	.db #0x88	; 136
      0012B0 40                    1755 	.db #0x40	; 64
      0012B1 88                    1756 	.db #0x88	; 136
      0012B2 30                    1757 	.db #0x30	; 48	'0'
      0012B3 88                    1758 	.db #0x88	; 136
      0012B4 0E                    1759 	.db #0x0e	; 14
      0012B5 FF                    1760 	.db #0xff	; 255
      0012B6 01                    1761 	.db #0x01	; 1
      0012B7 88                    1762 	.db #0x88	; 136
      0012B8 06                    1763 	.db #0x06	; 6
      0012B9 88                    1764 	.db #0x88	; 136
      0012BA 08                    1765 	.db #0x08	; 8
      0012BB 88                    1766 	.db #0x88	; 136
      0012BC 30                    1767 	.db #0x30	; 48	'0'
      0012BD F8                    1768 	.db #0xf8	; 248
      0012BE 60                    1769 	.db #0x60	; 96
      0012BF 80                    1770 	.db #0x80	; 128
      0012C0 C0                    1771 	.db #0xc0	; 192
      0012C1 80                    1772 	.db #0x80	; 128
      0012C2 40                    1773 	.db #0x40	; 64
      0012C3 00                    1774 	.db #0x00	; 0
      0012C4 00                    1775 	.db #0x00	; 0
      0012C5 00                    1776 	.db #0x00	; 0
      0012C6 00                    1777 	.db #0x00	; 0
      0012C7 00                    1778 	.db #0x00	; 0
      0012C8 20                    1779 	.db #0x20	; 32
      0012C9 40                    1780 	.db #0x40	; 64
      0012CA 18                    1781 	.db #0x18	; 24
      0012CB FC                    1782 	.db #0xfc	; 252
      0012CC 0C                    1783 	.db #0x0c	; 12
      0012CD 44                    1784 	.db #0x44	; 68	'D'
      0012CE 07                    1785 	.db #0x07	; 7
      0012CF 44                    1786 	.db #0x44	; 68	'D'
      0012D0 12                    1787 	.db #0x12	; 18
      0012D1 44                    1788 	.db #0x44	; 68	'D'
      0012D2 20                    1789 	.db #0x20	; 32
      0012D3 46                    1790 	.db #0x46	; 70	'F'
      0012D4 40                    1791 	.db #0x40	; 64
      0012D5 FA                    1792 	.db #0xfa	; 250
      0012D6 3F                    1793 	.db #0x3f	; 63
      0012D7 42                    1794 	.db #0x42	; 66	'B'
      0012D8 00                    1795 	.db #0x00	; 0
      0012D9 43                    1796 	.db #0x43	; 67	'C'
      0012DA 00                    1797 	.db #0x00	; 0
      0012DB 43                    1798 	.db #0x43	; 67	'C'
      0012DC 02                    1799 	.db #0x02	; 2
      0012DD 42                    1800 	.db #0x42	; 66	'B'
      0012DE 0C                    1801 	.db #0x0c	; 12
      0012DF 40                    1802 	.db #0x40	; 64
      0012E0 38                    1803 	.db #0x38	; 56	'8'
      0012E1 00                    1804 	.db #0x00	; 0
      0012E2 10                    1805 	.db #0x10	; 16
      0012E3 00                    1806 	.db #0x00	; 0
      0012E4 00                    1807 	.db #0x00	; 0
      0012E5 00                    1808 	.db 0x00
      0012E6 00                    1809 	.db 0x00
      0012E7 00                    1810 	.db 0x00
      0012E8 00                    1811 	.db 0x00
      0012E9 00                    1812 	.db 0x00
      0012EA 00                    1813 	.db 0x00
      0012EB 00                    1814 	.db 0x00
      0012EC 00                    1815 	.db 0x00
      0012ED 00                    1816 	.db 0x00
      0012EE 00                    1817 	.db 0x00
      0012EF 00                    1818 	.db 0x00
      0012F0 00                    1819 	.db 0x00
      0012F1 00                    1820 	.db 0x00
      0012F2 00                    1821 	.db 0x00
      0012F3 00                    1822 	.db 0x00
      0012F4 00                    1823 	.db 0x00
      0012F5 00                    1824 	.db 0x00
      0012F6 00                    1825 	.db 0x00
      0012F7 00                    1826 	.db 0x00
      0012F8 00                    1827 	.db 0x00
      0012F9 00                    1828 	.db 0x00
      0012FA 00                    1829 	.db 0x00
      0012FB 00                    1830 	.db 0x00
      0012FC 00                    1831 	.db 0x00
      0012FD 00                    1832 	.db 0x00
      0012FE 00                    1833 	.db 0x00
      0012FF 00                    1834 	.db 0x00
      001300 00                    1835 	.db 0x00
      001301 00                    1836 	.db 0x00
      001302 00                    1837 	.db 0x00
      001303 00                    1838 	.db 0x00
      001304 00                    1839 	.db 0x00
      001305 00                    1840 	.db #0x00	; 0
      001306 08                    1841 	.db #0x08	; 8
      001307 88                    1842 	.db #0x88	; 136
      001308 48                    1843 	.db #0x48	; 72	'H'
      001309 88                    1844 	.db #0x88	; 136
      00130A 64                    1845 	.db #0x64	; 100	'd'
      00130B 88                    1846 	.db #0x88	; 136
      00130C 12                    1847 	.db #0x12	; 18
      00130D 88                    1848 	.db #0x88	; 136
      00130E 89                    1849 	.db #0x89	; 137
      00130F FE                    1850 	.db #0xfe	; 254
      001310 85                    1851 	.db #0x85	; 133
      001311 88                    1852 	.db #0x88	; 136
      001312 80                    1853 	.db #0x80	; 128
      001313 88                    1854 	.db #0x88	; 136
      001314 FF                    1855 	.db #0xff	; 255
      001315 88                    1856 	.db #0x88	; 136
      001316 04                    1857 	.db #0x04	; 4
      001317 88                    1858 	.db #0x88	; 136
      001318 18                    1859 	.db #0x18	; 24
      001319 FE                    1860 	.db #0xfe	; 254
      00131A 60                    1861 	.db #0x60	; 96
      00131B 88                    1862 	.db #0x88	; 136
      00131C 05                    1863 	.db #0x05	; 5
      00131D 88                    1864 	.db #0x88	; 136
      00131E 1A                    1865 	.db #0x1a	; 26
      00131F 88                    1866 	.db #0x88	; 136
      001320 24                    1867 	.db #0x24	; 36
      001321 88                    1868 	.db #0x88	; 136
      001322 48                    1869 	.db #0x48	; 72	'H'
      001323 00                    1870 	.db #0x00	; 0
      001324 00                    1871 	.db #0x00	; 0
      001325 00                    1872 	.db #0x00	; 0
      001326 00                    1873 	.db #0x00	; 0
      001327 00                    1874 	.db #0x00	; 0
      001328 08                    1875 	.db #0x08	; 8
      001329 88                    1876 	.db #0x88	; 136
      00132A E8                    1877 	.db #0xe8	; 232
      00132B 68                    1878 	.db #0x68	; 104	'h'
      00132C 99                    1879 	.db #0x99	; 153
      00132D 68                    1880 	.db #0x68	; 104	'h'
      00132E 9B                    1881 	.db #0x9b	; 155
      00132F 68                    1882 	.db #0x68	; 104	'h'
      001330 9D                    1883 	.db #0x9d	; 157
      001331 68                    1884 	.db #0x68	; 104	'h'
      001332 99                    1885 	.db #0x99	; 153
      001333 68                    1886 	.db #0x68	; 104	'h'
      001334 99                    1887 	.db #0x99	; 153
      001335 5E                    1888 	.db #0x5e	; 94
      001336 99                    1889 	.db #0x99	; 153
      001337 68                    1890 	.db #0x68	; 104	'h'
      001338 99                    1891 	.db #0x99	; 153
      001339 68                    1892 	.db #0x68	; 104	'h'
      00133A 99                    1893 	.db #0x99	; 153
      00133B 68                    1894 	.db #0x68	; 104	'h'
      00133C 9F                    1895 	.db #0x9f	; 159
      00133D 68                    1896 	.db #0x68	; 104	'h'
      00133E 9A                    1897 	.db #0x9a	; 154
      00133F E8                    1898 	.db #0xe8	; 232
      001340 E9                    1899 	.db #0xe9	; 233
      001341 00                    1900 	.db #0x00	; 0
      001342 08                    1901 	.db #0x08	; 8
      001343 00                    1902 	.db #0x00	; 0
      001344 00                    1903 	.db #0x00	; 0
      001345 00                    1904 	.db #0x00	; 0
      001346 00                    1905 	.db #0x00	; 0
      001347 00                    1906 	.db #0x00	; 0
      001348 40                    1907 	.db #0x40	; 64
      001349 38                    1908 	.db #0x38	; 56	'8'
      00134A 20                    1909 	.db #0x20	; 32
      00134B 24                    1910 	.db #0x24	; 36
      00134C 10                    1911 	.db #0x10	; 16
      00134D 20                    1912 	.db #0x20	; 32
      00134E 8C                    1913 	.db #0x8c	; 140
      00134F 20                    1914 	.db #0x20	; 32
      001350 83                    1915 	.db #0x83	; 131
      001351 F0                    1916 	.db #0xf0	; 240
      001352 81                    1917 	.db #0x81	; 129
      001353 2E                    1918 	.db #0x2e	; 46
      001354 43                    1919 	.db #0x43	; 67	'C'
      001355 20                    1920 	.db #0x20	; 32
      001356 4D                    1921 	.db #0x4d	; 77	'M'
      001357 20                    1922 	.db #0x20	; 32
      001358 31                    1923 	.db #0x31	; 49	'1'
      001359 24                    1924 	.db #0x24	; 36
      00135A 31                    1925 	.db #0x31	; 49	'1'
      00135B 24                    1926 	.db #0x24	; 36
      00135C 49                    1927 	.db #0x49	; 73	'I'
      00135D 28                    1928 	.db #0x28	; 40
      00135E 47                    1929 	.db #0x47	; 71	'G'
      00135F 20                    1930 	.db #0x20	; 32
      001360 81                    1931 	.db #0x81	; 129
      001361 20                    1932 	.db #0x20	; 32
      001362 80                    1933 	.db #0x80	; 128
      001363 00                    1934 	.db #0x00	; 0
      001364 00                    1935 	.db #0x00	; 0
      001365 00                    1936 	.db #0x00	; 0
      001366 00                    1937 	.db #0x00	; 0
      001367 F8                    1938 	.db #0xf8	; 248
      001368 C7                    1939 	.db #0xc7	; 199
      001369 04                    1940 	.db #0x04	; 4
      00136A 30                    1941 	.db #0x30	; 48	'0'
      00136B E4                    1942 	.db #0xe4	; 228
      00136C 0F                    1943 	.db #0x0f	; 15
      00136D 04                    1944 	.db #0x04	; 4
      00136E 08                    1945 	.db #0x08	; 8
      00136F 04                    1946 	.db #0x04	; 4
      001370 38                    1947 	.db #0x38	; 56	'8'
      001371 F8                    1948 	.db #0xf8	; 248
      001372 C7                    1949 	.db #0xc7	; 199
      001373 00                    1950 	.db #0x00	; 0
      001374 10                    1951 	.db #0x10	; 16
      001375 10                    1952 	.db #0x10	; 16
      001376 08                    1953 	.db #0x08	; 8
      001377 10                    1954 	.db #0x10	; 16
      001378 8C                    1955 	.db #0x8c	; 140
      001379 10                    1956 	.db #0x10	; 16
      00137A 82                    1957 	.db #0x82	; 130
      00137B 90                    1958 	.db #0x90	; 144
      00137C 81                    1959 	.db #0x81	; 129
      00137D FC                    1960 	.db #0xfc	; 252
      00137E FF                    1961 	.db #0xff	; 255
      00137F 10                    1962 	.db #0x10	; 16
      001380 00                    1963 	.db #0x00	; 0
      001381 10                    1964 	.db #0x10	; 16
      001382 00                    1965 	.db #0x00	; 0
      001383 00                    1966 	.db #0x00	; 0
      001384 00                    1967 	.db #0x00	; 0
      001385 00                    1968 	.db 0x00
      001386 00                    1969 	.db 0x00
      001387 00                    1970 	.db 0x00
      001388 00                    1971 	.db 0x00
      001389 00                    1972 	.db 0x00
      00138A 00                    1973 	.db 0x00
      00138B 00                    1974 	.db 0x00
      00138C 00                    1975 	.db 0x00
      00138D 00                    1976 	.db 0x00
      00138E 00                    1977 	.db 0x00
      00138F 00                    1978 	.db 0x00
      001390 00                    1979 	.db 0x00
      001391 00                    1980 	.db 0x00
      001392 00                    1981 	.db 0x00
      001393 00                    1982 	.db 0x00
      001394 00                    1983 	.db 0x00
      001395 00                    1984 	.db 0x00
      001396 00                    1985 	.db 0x00
      001397 00                    1986 	.db 0x00
      001398 00                    1987 	.db 0x00
      001399 00                    1988 	.db 0x00
      00139A 00                    1989 	.db 0x00
      00139B 00                    1990 	.db 0x00
      00139C 00                    1991 	.db 0x00
      00139D 00                    1992 	.db 0x00
      00139E 00                    1993 	.db 0x00
      00139F 00                    1994 	.db 0x00
      0013A0 00                    1995 	.db 0x00
      0013A1 00                    1996 	.db 0x00
      0013A2 00                    1997 	.db 0x00
      0013A3 00                    1998 	.db 0x00
      0013A4 00                    1999 	.db 0x00
      0013A5 40                    2000 	.db #0x40	; 64
      0013A6 00                    2001 	.db #0x00	; 0
      0013A7 30                    2002 	.db #0x30	; 48	'0'
      0013A8 02                    2003 	.db #0x02	; 2
      0013A9 10                    2004 	.db #0x10	; 16
      0013AA 02                    2005 	.db #0x02	; 2
      0013AB 12                    2006 	.db #0x12	; 18
      0013AC 02                    2007 	.db #0x02	; 2
      0013AD 5C                    2008 	.db #0x5c	; 92
      0013AE 02                    2009 	.db #0x02	; 2
      0013AF 54                    2010 	.db #0x54	; 84	'T'
      0013B0 02                    2011 	.db #0x02	; 2
      0013B1 50                    2012 	.db #0x50	; 80	'P'
      0013B2 42                    2013 	.db #0x42	; 66	'B'
      0013B3 51                    2014 	.db #0x51	; 81	'Q'
      0013B4 82                    2015 	.db #0x82	; 130
      0013B5 5E                    2016 	.db #0x5e	; 94
      0013B6 7F                    2017 	.db #0x7f	; 127
      0013B7 D4                    2018 	.db #0xd4	; 212
      0013B8 02                    2019 	.db #0x02	; 2
      0013B9 50                    2020 	.db #0x50	; 80	'P'
      0013BA 02                    2021 	.db #0x02	; 2
      0013BB 18                    2022 	.db #0x18	; 24
      0013BC 02                    2023 	.db #0x02	; 2
      0013BD 57                    2024 	.db #0x57	; 87	'W'
      0013BE 02                    2025 	.db #0x02	; 2
      0013BF 32                    2026 	.db #0x32	; 50	'2'
      0013C0 02                    2027 	.db #0x02	; 2
      0013C1 10                    2028 	.db #0x10	; 16
      0013C2 02                    2029 	.db #0x02	; 2
      0013C3 00                    2030 	.db #0x00	; 0
      0013C4 00                    2031 	.db #0x00	; 0
      0013C5 10                    2032 	.db #0x10	; 16
      0013C6 80                    2033 	.db #0x80	; 128
      0013C7 10                    2034 	.db #0x10	; 16
      0013C8 43                    2035 	.db #0x43	; 67	'C'
      0013C9 F0                    2036 	.db #0xf0	; 240
      0013CA 22                    2037 	.db #0x22	; 34
      0013CB 1F                    2038 	.db #0x1f	; 31
      0013CC 14                    2039 	.db #0x14	; 20
      0013CD 10                    2040 	.db #0x10	; 16
      0013CE 0C                    2041 	.db #0x0c	; 12
      0013CF F0                    2042 	.db #0xf0	; 240
      0013D0 73                    2043 	.db #0x73	; 115	's'
      0013D1 80                    2044 	.db #0x80	; 128
      0013D2 20                    2045 	.db #0x20	; 32
      0013D3 82                    2046 	.db #0x82	; 130
      0013D4 00                    2047 	.db #0x00	; 0
      0013D5 82                    2048 	.db #0x82	; 130
      0013D6 40                    2049 	.db #0x40	; 64
      0013D7 82                    2050 	.db #0x82	; 130
      0013D8 80                    2051 	.db #0x80	; 128
      0013D9 F2                    2052 	.db #0xf2	; 242
      0013DA 7F                    2053 	.db #0x7f	; 127
      0013DB 8A                    2054 	.db #0x8a	; 138
      0013DC 00                    2055 	.db #0x00	; 0
      0013DD 86                    2056 	.db #0x86	; 134
      0013DE 00                    2057 	.db #0x00	; 0
      0013DF 82                    2058 	.db #0x82	; 130
      0013E0 00                    2059 	.db #0x00	; 0
      0013E1 80                    2060 	.db #0x80	; 128
      0013E2 00                    2061 	.db #0x00	; 0
      0013E3 00                    2062 	.db #0x00	; 0
      0013E4 00                    2063 	.db #0x00	; 0
      0013E5 10                    2064 	.db #0x10	; 16
      0013E6 42                    2065 	.db #0x42	; 66	'B'
      0013E7 92                    2066 	.db #0x92	; 146
      0013E8 42                    2067 	.db #0x42	; 66	'B'
      0013E9 54                    2068 	.db #0x54	; 84	'T'
      0013EA 2A                    2069 	.db #0x2a	; 42
      0013EB 38                    2070 	.db #0x38	; 56	'8'
      0013EC 2E                    2071 	.db #0x2e	; 46
      0013ED FF                    2072 	.db #0xff	; 255
      0013EE 13                    2073 	.db #0x13	; 19
      0013EF 38                    2074 	.db #0x38	; 56	'8'
      0013F0 1A                    2075 	.db #0x1a	; 26
      0013F1 54                    2076 	.db #0x54	; 84	'T'
      0013F2 26                    2077 	.db #0x26	; 38
      0013F3 52                    2078 	.db #0x52	; 82	'R'
      0013F4 02                    2079 	.db #0x02	; 2
      0013F5 80                    2080 	.db #0x80	; 128
      0013F6 40                    2081 	.db #0x40	; 64
      0013F7 F0                    2082 	.db #0xf0	; 240
      0013F8 20                    2083 	.db #0x20	; 32
      0013F9 1F                    2084 	.db #0x1f	; 31
      0013FA 13                    2085 	.db #0x13	; 19
      0013FB 12                    2086 	.db #0x12	; 18
      0013FC 0C                    2087 	.db #0x0c	; 12
      0013FD 10                    2088 	.db #0x10	; 16
      0013FE 33                    2089 	.db #0x33	; 51	'3'
      0013FF F0                    2090 	.db #0xf0	; 240
      001400 60                    2091 	.db #0x60	; 96
      001401 10                    2092 	.db #0x10	; 16
      001402 20                    2093 	.db #0x20	; 32
      001403 00                    2094 	.db #0x00	; 0
      001404 00                    2095 	.db #0x00	; 0
      001405 00                    2096 	.db #0x00	; 0
      001406 00                    2097 	.db #0x00	; 0
      001407 00                    2098 	.db #0x00	; 0
      001408 00                    2099 	.db #0x00	; 0
      001409 F8                    2100 	.db #0xf8	; 248
      00140A 0F                    2101 	.db #0x0f	; 15
      00140B 48                    2102 	.db #0x48	; 72	'H'
      00140C 04                    2103 	.db #0x04	; 4
      00140D 48                    2104 	.db #0x48	; 72	'H'
      00140E 04                    2105 	.db #0x04	; 4
      00140F 48                    2106 	.db #0x48	; 72	'H'
      001410 04                    2107 	.db #0x04	; 4
      001411 48                    2108 	.db #0x48	; 72	'H'
      001412 04                    2109 	.db #0x04	; 4
      001413 FF                    2110 	.db #0xff	; 255
      001414 3F                    2111 	.db #0x3f	; 63
      001415 48                    2112 	.db #0x48	; 72	'H'
      001416 44                    2113 	.db #0x44	; 68	'D'
      001417 48                    2114 	.db #0x48	; 72	'H'
      001418 44                    2115 	.db #0x44	; 68	'D'
      001419 48                    2116 	.db #0x48	; 72	'H'
      00141A 44                    2117 	.db #0x44	; 68	'D'
      00141B 48                    2118 	.db #0x48	; 72	'H'
      00141C 44                    2119 	.db #0x44	; 68	'D'
      00141D F8                    2120 	.db #0xf8	; 248
      00141E 4F                    2121 	.db #0x4f	; 79	'O'
      00141F 00                    2122 	.db #0x00	; 0
      001420 40                    2123 	.db #0x40	; 64
      001421 00                    2124 	.db #0x00	; 0
      001422 70                    2125 	.db #0x70	; 112	'p'
      001423 00                    2126 	.db #0x00	; 0
      001424 00                    2127 	.db #0x00	; 0
      001425 00                    2128 	.db 0x00
      001426 00                    2129 	.db 0x00
      001427 00                    2130 	.db 0x00
      001428 00                    2131 	.db 0x00
      001429 00                    2132 	.db 0x00
      00142A 00                    2133 	.db 0x00
      00142B 00                    2134 	.db 0x00
      00142C 00                    2135 	.db 0x00
      00142D 00                    2136 	.db 0x00
      00142E 00                    2137 	.db 0x00
      00142F 00                    2138 	.db 0x00
      001430 00                    2139 	.db 0x00
      001431 00                    2140 	.db 0x00
      001432 00                    2141 	.db 0x00
      001433 00                    2142 	.db 0x00
      001434 00                    2143 	.db 0x00
      001435 00                    2144 	.db 0x00
      001436 00                    2145 	.db 0x00
      001437 00                    2146 	.db 0x00
      001438 00                    2147 	.db 0x00
      001439 00                    2148 	.db 0x00
      00143A 00                    2149 	.db 0x00
      00143B 00                    2150 	.db 0x00
      00143C 00                    2151 	.db 0x00
      00143D 00                    2152 	.db 0x00
      00143E 00                    2153 	.db 0x00
      00143F 00                    2154 	.db 0x00
      001440 00                    2155 	.db 0x00
      001441 00                    2156 	.db 0x00
      001442 00                    2157 	.db 0x00
      001443 00                    2158 	.db 0x00
      001444 00                    2159 	.db 0x00
      001445 00                    2160 	.db #0x00	; 0
      001446 80                    2161 	.db #0x80	; 128
      001447 00                    2162 	.db #0x00	; 0
      001448 60                    2163 	.db #0x60	; 96
      001449 FE                    2164 	.db #0xfe	; 254
      00144A 1F                    2165 	.db #0x1f	; 31
      00144B 02                    2166 	.db #0x02	; 2
      00144C 00                    2167 	.db #0x00	; 0
      00144D 12                    2168 	.db #0x12	; 18
      00144E 20                    2169 	.db #0x20	; 32
      00144F 22                    2170 	.db #0x22	; 34
      001450 10                    2171 	.db #0x10	; 16
      001451 C2                    2172 	.db #0xc2	; 194
      001452 0C                    2173 	.db #0x0c	; 12
      001453 02                    2174 	.db #0x02	; 2
      001454 03                    2175 	.db #0x03	; 3
      001455 C2                    2176 	.db #0xc2	; 194
      001456 0C                    2177 	.db #0x0c	; 12
      001457 32                    2178 	.db #0x32	; 50	'2'
      001458 30                    2179 	.db #0x30	; 48	'0'
      001459 02                    2180 	.db #0x02	; 2
      00145A 00                    2181 	.db #0x00	; 0
      00145B FE                    2182 	.db #0xfe	; 254
      00145C 0F                    2183 	.db #0x0f	; 15
      00145D 00                    2184 	.db #0x00	; 0
      00145E 30                    2185 	.db #0x30	; 48	'0'
      00145F 00                    2186 	.db #0x00	; 0
      001460 40                    2187 	.db #0x40	; 64
      001461 00                    2188 	.db #0x00	; 0
      001462 F8                    2189 	.db #0xf8	; 248
      001463 00                    2190 	.db #0x00	; 0
      001464 00                    2191 	.db #0x00	; 0
      001465 40                    2192 	.db #0x40	; 64
      001466 80                    2193 	.db #0x80	; 128
      001467 40                    2194 	.db #0x40	; 64
      001468 80                    2195 	.db #0x80	; 128
      001469 42                    2196 	.db #0x42	; 66	'B'
      00146A 40                    2197 	.db #0x40	; 64
      00146B 44                    2198 	.db #0x44	; 68	'D'
      00146C 20                    2199 	.db #0x20	; 32
      00146D 58                    2200 	.db #0x58	; 88	'X'
      00146E 18                    2201 	.db #0x18	; 24
      00146F C0                    2202 	.db #0xc0	; 192
      001470 07                    2203 	.db #0x07	; 7
      001471 40                    2204 	.db #0x40	; 64
      001472 00                    2205 	.db #0x00	; 0
      001473 7F                    2206 	.db #0x7f	; 127
      001474 00                    2207 	.db #0x00	; 0
      001475 40                    2208 	.db #0x40	; 64
      001476 00                    2209 	.db #0x00	; 0
      001477 C0                    2210 	.db #0xc0	; 192
      001478 3F                    2211 	.db #0x3f	; 63
      001479 50                    2212 	.db #0x50	; 80	'P'
      00147A 40                    2213 	.db #0x40	; 64
      00147B 48                    2214 	.db #0x48	; 72	'H'
      00147C 40                    2215 	.db #0x40	; 64
      00147D 46                    2216 	.db #0x46	; 70	'F'
      00147E 40                    2217 	.db #0x40	; 64
      00147F 40                    2218 	.db #0x40	; 64
      001480 40                    2219 	.db #0x40	; 64
      001481 40                    2220 	.db #0x40	; 64
      001482 78                    2221 	.db #0x78	; 120	'x'
      001483 00                    2222 	.db #0x00	; 0
      001484 00                    2223 	.db #0x00	; 0
      001485 00                    2224 	.db #0x00	; 0
      001486 80                    2225 	.db #0x80	; 128
      001487 40                    2226 	.db #0x40	; 64
      001488 40                    2227 	.db #0x40	; 64
      001489 42                    2228 	.db #0x42	; 66	'B'
      00148A 20                    2229 	.db #0x20	; 32
      00148B 42                    2230 	.db #0x42	; 66	'B'
      00148C 10                    2231 	.db #0x10	; 16
      00148D 42                    2232 	.db #0x42	; 66	'B'
      00148E 0C                    2233 	.db #0x0c	; 12
      00148F C2                    2234 	.db #0xc2	; 194
      001490 03                    2235 	.db #0x03	; 3
      001491 7E                    2236 	.db #0x7e	; 126
      001492 00                    2237 	.db #0x00	; 0
      001493 42                    2238 	.db #0x42	; 66	'B'
      001494 00                    2239 	.db #0x00	; 0
      001495 C2                    2240 	.db #0xc2	; 194
      001496 3F                    2241 	.db #0x3f	; 63
      001497 42                    2242 	.db #0x42	; 66	'B'
      001498 40                    2243 	.db #0x40	; 64
      001499 42                    2244 	.db #0x42	; 66	'B'
      00149A 40                    2245 	.db #0x40	; 64
      00149B 42                    2246 	.db #0x42	; 66	'B'
      00149C 40                    2247 	.db #0x40	; 64
      00149D 40                    2248 	.db #0x40	; 64
      00149E 40                    2249 	.db #0x40	; 64
      00149F 40                    2250 	.db #0x40	; 64
      0014A0 70                    2251 	.db #0x70	; 112	'p'
      0014A1 00                    2252 	.db #0x00	; 0
      0014A2 00                    2253 	.db #0x00	; 0
      0014A3 00                    2254 	.db #0x00	; 0
      0014A4 00                    2255 	.db #0x00	; 0
      0014A5 00                    2256 	.db #0x00	; 0
      0014A6 00                    2257 	.db #0x00	; 0
      0014A7 FE                    2258 	.db #0xfe	; 254
      0014A8 FF                    2259 	.db #0xff	; 255
      0014A9 22                    2260 	.db #0x22	; 34
      0014AA 04                    2261 	.db #0x04	; 4
      0014AB 5A                    2262 	.db #0x5a	; 90	'Z'
      0014AC 08                    2263 	.db #0x08	; 8
      0014AD 86                    2264 	.db #0x86	; 134
      0014AE 07                    2265 	.db #0x07	; 7
      0014AF 00                    2266 	.db #0x00	; 0
      0014B0 00                    2267 	.db #0x00	; 0
      0014B1 FE                    2268 	.db #0xfe	; 254
      0014B2 FF                    2269 	.db #0xff	; 255
      0014B3 92                    2270 	.db #0x92	; 146
      0014B4 40                    2271 	.db #0x40	; 64
      0014B5 92                    2272 	.db #0x92	; 146
      0014B6 20                    2273 	.db #0x20	; 32
      0014B7 92                    2274 	.db #0x92	; 146
      0014B8 03                    2275 	.db #0x03	; 3
      0014B9 92                    2276 	.db #0x92	; 146
      0014BA 0C                    2277 	.db #0x0c	; 12
      0014BB 92                    2278 	.db #0x92	; 146
      0014BC 14                    2279 	.db #0x14	; 20
      0014BD FE                    2280 	.db #0xfe	; 254
      0014BE 22                    2281 	.db #0x22	; 34
      0014BF 00                    2282 	.db #0x00	; 0
      0014C0 41                    2283 	.db #0x41	; 65	'A'
      0014C1 00                    2284 	.db #0x00	; 0
      0014C2 40                    2285 	.db #0x40	; 64
      0014C3 00                    2286 	.db #0x00	; 0
      0014C4 00                    2287 	.db #0x00	; 0
      0014C5 00                    2288 	.db 0x00
      0014C6 00                    2289 	.db 0x00
      0014C7 00                    2290 	.db 0x00
      0014C8 00                    2291 	.db 0x00
      0014C9 00                    2292 	.db 0x00
      0014CA 00                    2293 	.db 0x00
      0014CB 00                    2294 	.db 0x00
      0014CC 00                    2295 	.db 0x00
      0014CD 00                    2296 	.db 0x00
      0014CE 00                    2297 	.db 0x00
      0014CF 00                    2298 	.db 0x00
      0014D0 00                    2299 	.db 0x00
      0014D1 00                    2300 	.db 0x00
      0014D2 00                    2301 	.db 0x00
      0014D3 00                    2302 	.db 0x00
      0014D4 00                    2303 	.db 0x00
      0014D5 00                    2304 	.db 0x00
      0014D6 00                    2305 	.db 0x00
      0014D7 00                    2306 	.db 0x00
      0014D8 00                    2307 	.db 0x00
      0014D9 00                    2308 	.db 0x00
      0014DA 00                    2309 	.db 0x00
      0014DB 00                    2310 	.db 0x00
      0014DC 00                    2311 	.db 0x00
      0014DD 00                    2312 	.db 0x00
      0014DE 00                    2313 	.db 0x00
      0014DF 00                    2314 	.db 0x00
      0014E0 00                    2315 	.db 0x00
      0014E1 00                    2316 	.db 0x00
      0014E2 00                    2317 	.db 0x00
      0014E3 00                    2318 	.db 0x00
      0014E4 00                    2319 	.db 0x00
                                   2320 	.area XINIT   (CODE)
                                   2321 	.area CABS    (ABS,CODE)
