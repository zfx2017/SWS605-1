                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module display
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _wheel_PARM_3
                                     12 	.globl _wheel_PARM_2
                                     13 	.globl _WheelImage_PARM_2
                                     14 	.globl _bitbangWs2812
                                     15 	.globl _mDelaymS
                                     16 	.globl _mDelayuS
                                     17 	.globl _SSW
                                     18 	.globl _UIF_BUS_RST
                                     19 	.globl _UIF_DETECT
                                     20 	.globl _UIF_TRANSFER
                                     21 	.globl _UIF_SUSPEND
                                     22 	.globl _UIF_HST_SOF
                                     23 	.globl _UIF_FIFO_OV
                                     24 	.globl _U_SIE_FREE
                                     25 	.globl _U_TOG_OK
                                     26 	.globl _U_IS_NAK
                                     27 	.globl _ADC_CHAN0
                                     28 	.globl _ADC_CHAN1
                                     29 	.globl _CMP_CHAN
                                     30 	.globl _ADC_START
                                     31 	.globl _ADC_IF
                                     32 	.globl _CMP_IF
                                     33 	.globl _CMPO
                                     34 	.globl _U1RI
                                     35 	.globl _U1TI
                                     36 	.globl _U1RB8
                                     37 	.globl _U1TB8
                                     38 	.globl _U1REN
                                     39 	.globl _U1SMOD
                                     40 	.globl _U1SM0
                                     41 	.globl _S0_R_FIFO
                                     42 	.globl _S0_T_FIFO
                                     43 	.globl _S0_FREE
                                     44 	.globl _S0_IF_BYTE
                                     45 	.globl _S0_IF_FIRST
                                     46 	.globl _S0_IF_OV
                                     47 	.globl _S0_FST_ACT
                                     48 	.globl _CP_RL2
                                     49 	.globl _C_T2
                                     50 	.globl _TR2
                                     51 	.globl _EXEN2
                                     52 	.globl _TCLK
                                     53 	.globl _RCLK
                                     54 	.globl _EXF2
                                     55 	.globl _CAP1F
                                     56 	.globl _TF2
                                     57 	.globl _RI
                                     58 	.globl _TI
                                     59 	.globl _RB8
                                     60 	.globl _TB8
                                     61 	.globl _REN
                                     62 	.globl _SM2
                                     63 	.globl _SM1
                                     64 	.globl _SM0
                                     65 	.globl _IT0
                                     66 	.globl _IE0
                                     67 	.globl _IT1
                                     68 	.globl _IE1
                                     69 	.globl _TR0
                                     70 	.globl _TF0
                                     71 	.globl _TR1
                                     72 	.globl _TF1
                                     73 	.globl _RXD
                                     74 	.globl _PWM1_
                                     75 	.globl _TXD
                                     76 	.globl _PWM2_
                                     77 	.globl _AIN3
                                     78 	.globl _VBUS1
                                     79 	.globl _INT0
                                     80 	.globl _TXD1_
                                     81 	.globl _INT1
                                     82 	.globl _T0
                                     83 	.globl _RXD1_
                                     84 	.globl _PWM2
                                     85 	.globl _T1
                                     86 	.globl _UDP
                                     87 	.globl _UDM
                                     88 	.globl _TIN0
                                     89 	.globl _CAP1
                                     90 	.globl _T2
                                     91 	.globl _AIN0
                                     92 	.globl _VBUS2
                                     93 	.globl _TIN1
                                     94 	.globl _CAP2
                                     95 	.globl _T2EX
                                     96 	.globl _RXD_
                                     97 	.globl _TXD_
                                     98 	.globl _AIN1
                                     99 	.globl _UCC1
                                    100 	.globl _TIN2
                                    101 	.globl _SCS
                                    102 	.globl _CAP1_
                                    103 	.globl _T2_
                                    104 	.globl _AIN2
                                    105 	.globl _UCC2
                                    106 	.globl _TIN3
                                    107 	.globl _PWM1
                                    108 	.globl _MOSI
                                    109 	.globl _TIN4
                                    110 	.globl _RXD1
                                    111 	.globl _MISO
                                    112 	.globl _TIN5
                                    113 	.globl _TXD1
                                    114 	.globl _SCK
                                    115 	.globl _IE_SPI0
                                    116 	.globl _IE_TKEY
                                    117 	.globl _IE_USB
                                    118 	.globl _IE_ADC
                                    119 	.globl _IE_UART1
                                    120 	.globl _IE_PWMX
                                    121 	.globl _IE_GPIO
                                    122 	.globl _IE_WDOG
                                    123 	.globl _PX0
                                    124 	.globl _PT0
                                    125 	.globl _PX1
                                    126 	.globl _PT1
                                    127 	.globl _PS
                                    128 	.globl _PT2
                                    129 	.globl _PL_FLAG
                                    130 	.globl _PH_FLAG
                                    131 	.globl _EX0
                                    132 	.globl _ET0
                                    133 	.globl _EX1
                                    134 	.globl _ET1
                                    135 	.globl _ES
                                    136 	.globl _ET2
                                    137 	.globl _E_DIS
                                    138 	.globl _EA
                                    139 	.globl _P
                                    140 	.globl _F1
                                    141 	.globl _OV
                                    142 	.globl _RS0
                                    143 	.globl _RS1
                                    144 	.globl _F0
                                    145 	.globl _AC
                                    146 	.globl _CY
                                    147 	.globl _UEP1_DMA_H
                                    148 	.globl _UEP1_DMA_L
                                    149 	.globl _UEP1_DMA
                                    150 	.globl _UEP0_DMA_H
                                    151 	.globl _UEP0_DMA_L
                                    152 	.globl _UEP0_DMA
                                    153 	.globl _UEP2_3_MOD
                                    154 	.globl _UEP4_1_MOD
                                    155 	.globl _UEP3_DMA_H
                                    156 	.globl _UEP3_DMA_L
                                    157 	.globl _UEP3_DMA
                                    158 	.globl _UEP2_DMA_H
                                    159 	.globl _UEP2_DMA_L
                                    160 	.globl _UEP2_DMA
                                    161 	.globl _USB_DEV_AD
                                    162 	.globl _USB_CTRL
                                    163 	.globl _USB_INT_EN
                                    164 	.globl _UEP4_T_LEN
                                    165 	.globl _UEP4_CTRL
                                    166 	.globl _UEP0_T_LEN
                                    167 	.globl _UEP0_CTRL
                                    168 	.globl _USB_RX_LEN
                                    169 	.globl _USB_MIS_ST
                                    170 	.globl _USB_INT_ST
                                    171 	.globl _USB_INT_FG
                                    172 	.globl _UEP3_T_LEN
                                    173 	.globl _UEP3_CTRL
                                    174 	.globl _UEP2_T_LEN
                                    175 	.globl _UEP2_CTRL
                                    176 	.globl _UEP1_T_LEN
                                    177 	.globl _UEP1_CTRL
                                    178 	.globl _UDEV_CTRL
                                    179 	.globl _USB_C_CTRL
                                    180 	.globl _TKEY_DATH
                                    181 	.globl _TKEY_DATL
                                    182 	.globl _TKEY_DAT
                                    183 	.globl _TKEY_CTRL
                                    184 	.globl _ADC_DATA
                                    185 	.globl _ADC_CFG
                                    186 	.globl _ADC_CTRL
                                    187 	.globl _SBAUD1
                                    188 	.globl _SBUF1
                                    189 	.globl _SCON1
                                    190 	.globl _SPI0_SETUP
                                    191 	.globl _SPI0_CK_SE
                                    192 	.globl _SPI0_CTRL
                                    193 	.globl _SPI0_DATA
                                    194 	.globl _SPI0_STAT
                                    195 	.globl _PWM_CK_SE
                                    196 	.globl _PWM_CTRL
                                    197 	.globl _PWM_DATA1
                                    198 	.globl _PWM_DATA2
                                    199 	.globl _T2CAP1H
                                    200 	.globl _T2CAP1L
                                    201 	.globl _T2CAP1
                                    202 	.globl _TH2
                                    203 	.globl _TL2
                                    204 	.globl _T2COUNT
                                    205 	.globl _RCAP2H
                                    206 	.globl _RCAP2L
                                    207 	.globl _RCAP2
                                    208 	.globl _T2MOD
                                    209 	.globl _T2CON
                                    210 	.globl _SBUF
                                    211 	.globl _SCON
                                    212 	.globl _TH1
                                    213 	.globl _TH0
                                    214 	.globl _TL1
                                    215 	.globl _TL0
                                    216 	.globl _TMOD
                                    217 	.globl _TCON
                                    218 	.globl _XBUS_AUX
                                    219 	.globl _PIN_FUNC
                                    220 	.globl _P3_DIR_PU
                                    221 	.globl _P3_MOD_OC
                                    222 	.globl _P3
                                    223 	.globl _P2
                                    224 	.globl _P1_DIR_PU
                                    225 	.globl _P1_MOD_OC
                                    226 	.globl _P1
                                    227 	.globl _ROM_CTRL
                                    228 	.globl _ROM_DATA_H
                                    229 	.globl _ROM_DATA_L
                                    230 	.globl _ROM_DATA
                                    231 	.globl _ROM_ADDR_H
                                    232 	.globl _ROM_ADDR_L
                                    233 	.globl _ROM_ADDR
                                    234 	.globl _GPIO_IE
                                    235 	.globl _IP_EX
                                    236 	.globl _IE_EX
                                    237 	.globl _IP
                                    238 	.globl _IE
                                    239 	.globl _WDOG_COUNT
                                    240 	.globl _RESET_KEEP
                                    241 	.globl _WAKE_CTRL
                                    242 	.globl _CLOCK_CFG
                                    243 	.globl _PCON
                                    244 	.globl _GLOBAL_CFG
                                    245 	.globl _SAFE_MOD
                                    246 	.globl _DPH
                                    247 	.globl _DPL
                                    248 	.globl _SP
                                    249 	.globl _B
                                    250 	.globl _ACC
                                    251 	.globl _PSW
                                    252 	.globl _led_data
                                    253 	.globl _flow
                                    254 	.globl _wheel_pos
                                    255 	.globl _displayImage
                                    256 	.globl _showImage16dots
                                    257 	.globl _showImage16
                                    258 	.globl _WheelImage
                                    259 	.globl _wheel
                                    260 	.globl _pallette
                                    261 ;--------------------------------------------------------
                                    262 ; special function registers
                                    263 ;--------------------------------------------------------
                                    264 	.area RSEG    (ABS,DATA)
      000000                        265 	.org 0x0000
                           0000D0   266 _PSW	=	0x00d0
                           0000E0   267 _ACC	=	0x00e0
                           0000F0   268 _B	=	0x00f0
                           000081   269 _SP	=	0x0081
                           000082   270 _DPL	=	0x0082
                           000083   271 _DPH	=	0x0083
                           0000A1   272 _SAFE_MOD	=	0x00a1
                           0000B1   273 _GLOBAL_CFG	=	0x00b1
                           000087   274 _PCON	=	0x0087
                           0000B9   275 _CLOCK_CFG	=	0x00b9
                           0000A9   276 _WAKE_CTRL	=	0x00a9
                           0000FE   277 _RESET_KEEP	=	0x00fe
                           0000FF   278 _WDOG_COUNT	=	0x00ff
                           0000A8   279 _IE	=	0x00a8
                           0000B8   280 _IP	=	0x00b8
                           0000E8   281 _IE_EX	=	0x00e8
                           0000E9   282 _IP_EX	=	0x00e9
                           0000C7   283 _GPIO_IE	=	0x00c7
                           008584   284 _ROM_ADDR	=	0x8584
                           000084   285 _ROM_ADDR_L	=	0x0084
                           000085   286 _ROM_ADDR_H	=	0x0085
                           008F8E   287 _ROM_DATA	=	0x8f8e
                           00008E   288 _ROM_DATA_L	=	0x008e
                           00008F   289 _ROM_DATA_H	=	0x008f
                           000086   290 _ROM_CTRL	=	0x0086
                           000090   291 _P1	=	0x0090
                           000092   292 _P1_MOD_OC	=	0x0092
                           000093   293 _P1_DIR_PU	=	0x0093
                           0000A0   294 _P2	=	0x00a0
                           0000B0   295 _P3	=	0x00b0
                           000096   296 _P3_MOD_OC	=	0x0096
                           000097   297 _P3_DIR_PU	=	0x0097
                           0000C6   298 _PIN_FUNC	=	0x00c6
                           0000A2   299 _XBUS_AUX	=	0x00a2
                           000088   300 _TCON	=	0x0088
                           000089   301 _TMOD	=	0x0089
                           00008A   302 _TL0	=	0x008a
                           00008B   303 _TL1	=	0x008b
                           00008C   304 _TH0	=	0x008c
                           00008D   305 _TH1	=	0x008d
                           000098   306 _SCON	=	0x0098
                           000099   307 _SBUF	=	0x0099
                           0000C8   308 _T2CON	=	0x00c8
                           0000C9   309 _T2MOD	=	0x00c9
                           00CBCA   310 _RCAP2	=	0xcbca
                           0000CA   311 _RCAP2L	=	0x00ca
                           0000CB   312 _RCAP2H	=	0x00cb
                           00CDCC   313 _T2COUNT	=	0xcdcc
                           0000CC   314 _TL2	=	0x00cc
                           0000CD   315 _TH2	=	0x00cd
                           00CFCE   316 _T2CAP1	=	0xcfce
                           0000CE   317 _T2CAP1L	=	0x00ce
                           0000CF   318 _T2CAP1H	=	0x00cf
                           00009B   319 _PWM_DATA2	=	0x009b
                           00009C   320 _PWM_DATA1	=	0x009c
                           00009D   321 _PWM_CTRL	=	0x009d
                           00009E   322 _PWM_CK_SE	=	0x009e
                           0000F8   323 _SPI0_STAT	=	0x00f8
                           0000F9   324 _SPI0_DATA	=	0x00f9
                           0000FA   325 _SPI0_CTRL	=	0x00fa
                           0000FB   326 _SPI0_CK_SE	=	0x00fb
                           0000FC   327 _SPI0_SETUP	=	0x00fc
                           0000C0   328 _SCON1	=	0x00c0
                           0000C1   329 _SBUF1	=	0x00c1
                           0000C2   330 _SBAUD1	=	0x00c2
                           000080   331 _ADC_CTRL	=	0x0080
                           00009A   332 _ADC_CFG	=	0x009a
                           00009F   333 _ADC_DATA	=	0x009f
                           0000C3   334 _TKEY_CTRL	=	0x00c3
                           00C5C4   335 _TKEY_DAT	=	0xc5c4
                           0000C4   336 _TKEY_DATL	=	0x00c4
                           0000C5   337 _TKEY_DATH	=	0x00c5
                           000091   338 _USB_C_CTRL	=	0x0091
                           0000D1   339 _UDEV_CTRL	=	0x00d1
                           0000D2   340 _UEP1_CTRL	=	0x00d2
                           0000D3   341 _UEP1_T_LEN	=	0x00d3
                           0000D4   342 _UEP2_CTRL	=	0x00d4
                           0000D5   343 _UEP2_T_LEN	=	0x00d5
                           0000D6   344 _UEP3_CTRL	=	0x00d6
                           0000D7   345 _UEP3_T_LEN	=	0x00d7
                           0000D8   346 _USB_INT_FG	=	0x00d8
                           0000D9   347 _USB_INT_ST	=	0x00d9
                           0000DA   348 _USB_MIS_ST	=	0x00da
                           0000DB   349 _USB_RX_LEN	=	0x00db
                           0000DC   350 _UEP0_CTRL	=	0x00dc
                           0000DD   351 _UEP0_T_LEN	=	0x00dd
                           0000DE   352 _UEP4_CTRL	=	0x00de
                           0000DF   353 _UEP4_T_LEN	=	0x00df
                           0000E1   354 _USB_INT_EN	=	0x00e1
                           0000E2   355 _USB_CTRL	=	0x00e2
                           0000E3   356 _USB_DEV_AD	=	0x00e3
                           00E5E4   357 _UEP2_DMA	=	0xe5e4
                           0000E4   358 _UEP2_DMA_L	=	0x00e4
                           0000E5   359 _UEP2_DMA_H	=	0x00e5
                           00E7E6   360 _UEP3_DMA	=	0xe7e6
                           0000E6   361 _UEP3_DMA_L	=	0x00e6
                           0000E7   362 _UEP3_DMA_H	=	0x00e7
                           0000EA   363 _UEP4_1_MOD	=	0x00ea
                           0000EB   364 _UEP2_3_MOD	=	0x00eb
                           00EDEC   365 _UEP0_DMA	=	0xedec
                           0000EC   366 _UEP0_DMA_L	=	0x00ec
                           0000ED   367 _UEP0_DMA_H	=	0x00ed
                           00EFEE   368 _UEP1_DMA	=	0xefee
                           0000EE   369 _UEP1_DMA_L	=	0x00ee
                           0000EF   370 _UEP1_DMA_H	=	0x00ef
                                    371 ;--------------------------------------------------------
                                    372 ; special function bits
                                    373 ;--------------------------------------------------------
                                    374 	.area RSEG    (ABS,DATA)
      000000                        375 	.org 0x0000
                           0000D7   376 _CY	=	0x00d7
                           0000D6   377 _AC	=	0x00d6
                           0000D5   378 _F0	=	0x00d5
                           0000D4   379 _RS1	=	0x00d4
                           0000D3   380 _RS0	=	0x00d3
                           0000D2   381 _OV	=	0x00d2
                           0000D1   382 _F1	=	0x00d1
                           0000D0   383 _P	=	0x00d0
                           0000AF   384 _EA	=	0x00af
                           0000AE   385 _E_DIS	=	0x00ae
                           0000AD   386 _ET2	=	0x00ad
                           0000AC   387 _ES	=	0x00ac
                           0000AB   388 _ET1	=	0x00ab
                           0000AA   389 _EX1	=	0x00aa
                           0000A9   390 _ET0	=	0x00a9
                           0000A8   391 _EX0	=	0x00a8
                           0000BF   392 _PH_FLAG	=	0x00bf
                           0000BE   393 _PL_FLAG	=	0x00be
                           0000BD   394 _PT2	=	0x00bd
                           0000BC   395 _PS	=	0x00bc
                           0000BB   396 _PT1	=	0x00bb
                           0000BA   397 _PX1	=	0x00ba
                           0000B9   398 _PT0	=	0x00b9
                           0000B8   399 _PX0	=	0x00b8
                           0000EF   400 _IE_WDOG	=	0x00ef
                           0000EE   401 _IE_GPIO	=	0x00ee
                           0000ED   402 _IE_PWMX	=	0x00ed
                           0000EC   403 _IE_UART1	=	0x00ec
                           0000EB   404 _IE_ADC	=	0x00eb
                           0000EA   405 _IE_USB	=	0x00ea
                           0000E9   406 _IE_TKEY	=	0x00e9
                           0000E8   407 _IE_SPI0	=	0x00e8
                           000097   408 _SCK	=	0x0097
                           000097   409 _TXD1	=	0x0097
                           000097   410 _TIN5	=	0x0097
                           000096   411 _MISO	=	0x0096
                           000096   412 _RXD1	=	0x0096
                           000096   413 _TIN4	=	0x0096
                           000095   414 _MOSI	=	0x0095
                           000095   415 _PWM1	=	0x0095
                           000095   416 _TIN3	=	0x0095
                           000095   417 _UCC2	=	0x0095
                           000095   418 _AIN2	=	0x0095
                           000094   419 _T2_	=	0x0094
                           000094   420 _CAP1_	=	0x0094
                           000094   421 _SCS	=	0x0094
                           000094   422 _TIN2	=	0x0094
                           000094   423 _UCC1	=	0x0094
                           000094   424 _AIN1	=	0x0094
                           000093   425 _TXD_	=	0x0093
                           000092   426 _RXD_	=	0x0092
                           000091   427 _T2EX	=	0x0091
                           000091   428 _CAP2	=	0x0091
                           000091   429 _TIN1	=	0x0091
                           000091   430 _VBUS2	=	0x0091
                           000091   431 _AIN0	=	0x0091
                           000090   432 _T2	=	0x0090
                           000090   433 _CAP1	=	0x0090
                           000090   434 _TIN0	=	0x0090
                           0000B7   435 _UDM	=	0x00b7
                           0000B6   436 _UDP	=	0x00b6
                           0000B5   437 _T1	=	0x00b5
                           0000B4   438 _PWM2	=	0x00b4
                           0000B4   439 _RXD1_	=	0x00b4
                           0000B4   440 _T0	=	0x00b4
                           0000B3   441 _INT1	=	0x00b3
                           0000B2   442 _TXD1_	=	0x00b2
                           0000B2   443 _INT0	=	0x00b2
                           0000B2   444 _VBUS1	=	0x00b2
                           0000B2   445 _AIN3	=	0x00b2
                           0000B1   446 _PWM2_	=	0x00b1
                           0000B1   447 _TXD	=	0x00b1
                           0000B0   448 _PWM1_	=	0x00b0
                           0000B0   449 _RXD	=	0x00b0
                           00008F   450 _TF1	=	0x008f
                           00008E   451 _TR1	=	0x008e
                           00008D   452 _TF0	=	0x008d
                           00008C   453 _TR0	=	0x008c
                           00008B   454 _IE1	=	0x008b
                           00008A   455 _IT1	=	0x008a
                           000089   456 _IE0	=	0x0089
                           000088   457 _IT0	=	0x0088
                           00009F   458 _SM0	=	0x009f
                           00009E   459 _SM1	=	0x009e
                           00009D   460 _SM2	=	0x009d
                           00009C   461 _REN	=	0x009c
                           00009B   462 _TB8	=	0x009b
                           00009A   463 _RB8	=	0x009a
                           000099   464 _TI	=	0x0099
                           000098   465 _RI	=	0x0098
                           0000CF   466 _TF2	=	0x00cf
                           0000CF   467 _CAP1F	=	0x00cf
                           0000CE   468 _EXF2	=	0x00ce
                           0000CD   469 _RCLK	=	0x00cd
                           0000CC   470 _TCLK	=	0x00cc
                           0000CB   471 _EXEN2	=	0x00cb
                           0000CA   472 _TR2	=	0x00ca
                           0000C9   473 _C_T2	=	0x00c9
                           0000C8   474 _CP_RL2	=	0x00c8
                           0000FF   475 _S0_FST_ACT	=	0x00ff
                           0000FE   476 _S0_IF_OV	=	0x00fe
                           0000FD   477 _S0_IF_FIRST	=	0x00fd
                           0000FC   478 _S0_IF_BYTE	=	0x00fc
                           0000FB   479 _S0_FREE	=	0x00fb
                           0000FA   480 _S0_T_FIFO	=	0x00fa
                           0000F8   481 _S0_R_FIFO	=	0x00f8
                           0000C7   482 _U1SM0	=	0x00c7
                           0000C5   483 _U1SMOD	=	0x00c5
                           0000C4   484 _U1REN	=	0x00c4
                           0000C3   485 _U1TB8	=	0x00c3
                           0000C2   486 _U1RB8	=	0x00c2
                           0000C1   487 _U1TI	=	0x00c1
                           0000C0   488 _U1RI	=	0x00c0
                           000087   489 _CMPO	=	0x0087
                           000086   490 _CMP_IF	=	0x0086
                           000085   491 _ADC_IF	=	0x0085
                           000084   492 _ADC_START	=	0x0084
                           000083   493 _CMP_CHAN	=	0x0083
                           000081   494 _ADC_CHAN1	=	0x0081
                           000080   495 _ADC_CHAN0	=	0x0080
                           0000DF   496 _U_IS_NAK	=	0x00df
                           0000DE   497 _U_TOG_OK	=	0x00de
                           0000DD   498 _U_SIE_FREE	=	0x00dd
                           0000DC   499 _UIF_FIFO_OV	=	0x00dc
                           0000DB   500 _UIF_HST_SOF	=	0x00db
                           0000DA   501 _UIF_SUSPEND	=	0x00da
                           0000D9   502 _UIF_TRANSFER	=	0x00d9
                           0000D8   503 _UIF_DETECT	=	0x00d8
                           0000D8   504 _UIF_BUS_RST	=	0x00d8
                           0000B2   505 _SSW	=	0x00b2
                                    506 ;--------------------------------------------------------
                                    507 ; overlayable register banks
                                    508 ;--------------------------------------------------------
                                    509 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        510 	.ds 8
                                    511 ;--------------------------------------------------------
                                    512 ; internal ram data
                                    513 ;--------------------------------------------------------
                                    514 	.area DSEG    (DATA)
      00000A                        515 _wheel_pos::
      00000A                        516 	.ds 2
      00000C                        517 _flow::
      00000C                        518 	.ds 2
      00000E                        519 _displayImage_temp_1_16:
      00000E                        520 	.ds 2
      000010                        521 _displayImage_i_1_16:
      000010                        522 	.ds 1
      000011                        523 _displayImage_j_1_16:
      000011                        524 	.ds 1
      000012                        525 _showImage16_temp_1_31:
      000012                        526 	.ds 2
      000014                        527 _pallette_i_1_46:
      000014                        528 	.ds 1
      000015                        529 _pallette_mark_1_46:
      000015                        530 	.ds 1
                                    531 ;--------------------------------------------------------
                                    532 ; overlayable items in internal ram 
                                    533 ;--------------------------------------------------------
                                    534 	.area	OSEG    (OVR,DATA)
      00001B                        535 _WheelImage_PARM_2:
      00001B                        536 	.ds 2
                                    537 	.area	OSEG    (OVR,DATA)
      00001B                        538 _wheel_PARM_2:
      00001B                        539 	.ds 1
      00001C                        540 _wheel_PARM_3:
      00001C                        541 	.ds 3
                                    542 ;--------------------------------------------------------
                                    543 ; indirectly addressable internal ram data
                                    544 ;--------------------------------------------------------
                                    545 	.area ISEG    (DATA)
                                    546 ;--------------------------------------------------------
                                    547 ; absolute internal ram data
                                    548 ;--------------------------------------------------------
                                    549 	.area IABS    (ABS,DATA)
                                    550 	.area IABS    (ABS,DATA)
                                    551 ;--------------------------------------------------------
                                    552 ; bit data
                                    553 ;--------------------------------------------------------
                                    554 	.area BSEG    (BIT)
                                    555 ;--------------------------------------------------------
                                    556 ; paged external ram data
                                    557 ;--------------------------------------------------------
                                    558 	.area PSEG    (PAG,XDATA)
                                    559 ;--------------------------------------------------------
                                    560 ; external ram data
                                    561 ;--------------------------------------------------------
                                    562 	.area XSEG    (XDATA)
      000000                        563 _led_data::
      000000                        564 	.ds 48
                                    565 ;--------------------------------------------------------
                                    566 ; absolute external ram data
                                    567 ;--------------------------------------------------------
                                    568 	.area XABS    (ABS,XDATA)
                                    569 ;--------------------------------------------------------
                                    570 ; external initialized ram data
                                    571 ;--------------------------------------------------------
                                    572 	.area XISEG   (XDATA)
                                    573 	.area HOME    (CODE)
                                    574 	.area GSINIT0 (CODE)
                                    575 	.area GSINIT1 (CODE)
                                    576 	.area GSINIT2 (CODE)
                                    577 	.area GSINIT3 (CODE)
                                    578 	.area GSINIT4 (CODE)
                                    579 	.area GSINIT5 (CODE)
                                    580 	.area GSINIT  (CODE)
                                    581 	.area GSFINAL (CODE)
                                    582 	.area CSEG    (CODE)
                                    583 ;--------------------------------------------------------
                                    584 ; global & static initialisations
                                    585 ;--------------------------------------------------------
                                    586 	.area HOME    (CODE)
                                    587 	.area GSINIT  (CODE)
                                    588 	.area GSFINAL (CODE)
                                    589 	.area GSINIT  (CODE)
                                    590 ;--------------------------------------------------------
                                    591 ; Home
                                    592 ;--------------------------------------------------------
                                    593 	.area HOME    (CODE)
                                    594 	.area HOME    (CODE)
                                    595 ;--------------------------------------------------------
                                    596 ; code
                                    597 ;--------------------------------------------------------
                                    598 	.area CSEG    (CODE)
                                    599 ;------------------------------------------------------------
                                    600 ;Allocation info for local variables in function 'displayImage'
                                    601 ;------------------------------------------------------------
                                    602 ;num                       Allocated to registers r7 
                                    603 ;temp                      Allocated with name '_displayImage_temp_1_16'
                                    604 ;i                         Allocated with name '_displayImage_i_1_16'
                                    605 ;j                         Allocated with name '_displayImage_j_1_16'
                                    606 ;k                         Allocated to registers r7 
                                    607 ;------------------------------------------------------------
                                    608 ;	display.c:14: void displayImage(uint8_t num)
                                    609 ;	-----------------------------------------
                                    610 ;	 function displayImage
                                    611 ;	-----------------------------------------
      000129                        612 _displayImage:
                           000007   613 	ar7 = 0x07
                           000006   614 	ar6 = 0x06
                           000005   615 	ar5 = 0x05
                           000004   616 	ar4 = 0x04
                           000003   617 	ar3 = 0x03
                           000002   618 	ar2 = 0x02
                           000001   619 	ar1 = 0x01
                           000000   620 	ar0 = 0x00
      000129 AF 82            [24]  621 	mov	r7,dpl
                                    622 ;	display.c:18: mDelaymS(40);
      00012B 90 00 28         [24]  623 	mov	dptr,#0x0028
      00012E C0 07            [24]  624 	push	ar7
      000130 12 0A EE         [24]  625 	lcall	_mDelaymS
      000133 D0 07            [24]  626 	pop	ar7
                                    627 ;	display.c:19: wheel_pos=0;
      000135 E4               [12]  628 	clr	a
      000136 F5 0A            [12]  629 	mov	_wheel_pos,a
      000138 F5 0B            [12]  630 	mov	(_wheel_pos + 1),a
                                    631 ;	display.c:20: for (i = 0; i < sizeof(text[num])/2; i++)
      00013A EF               [12]  632 	mov	a,r7
      00013B 75 F0 A0         [24]  633 	mov	b,#0xa0
      00013E A4               [48]  634 	mul	ab
      00013F 24 05            [12]  635 	add	a,#_text
      000141 FE               [12]  636 	mov	r6,a
      000142 74 0E            [12]  637 	mov	a,#(_text >> 8)
      000144 35 F0            [12]  638 	addc	a,b
      000146 FF               [12]  639 	mov	r7,a
      000147 75 10 00         [24]  640 	mov	_displayImage_i_1_16,#0x00
      00014A                        641 00109$:
                                    642 ;	display.c:22: temp = (text[num][i * 2 + 1] << 8) + text[num][i * 2];
      00014A E5 10            [12]  643 	mov	a,_displayImage_i_1_16
      00014C 25 10            [12]  644 	add	a,_displayImage_i_1_16
      00014E FC               [12]  645 	mov	r4,a
      00014F 04               [12]  646 	inc	a
      000150 2E               [12]  647 	add	a,r6
      000151 F5 82            [12]  648 	mov	dpl,a
      000153 E4               [12]  649 	clr	a
      000154 3F               [12]  650 	addc	a,r7
      000155 F5 83            [12]  651 	mov	dph,a
      000157 E4               [12]  652 	clr	a
      000158 93               [24]  653 	movc	a,@a+dptr
      000159 FA               [12]  654 	mov	r2,a
      00015A 7B 00            [12]  655 	mov	r3,#0x00
      00015C EC               [12]  656 	mov	a,r4
      00015D 2E               [12]  657 	add	a,r6
      00015E F5 82            [12]  658 	mov	dpl,a
      000160 E4               [12]  659 	clr	a
      000161 3F               [12]  660 	addc	a,r7
      000162 F5 83            [12]  661 	mov	dph,a
      000164 E4               [12]  662 	clr	a
      000165 93               [24]  663 	movc	a,@a+dptr
      000166 F9               [12]  664 	mov	r1,a
      000167 7C 00            [12]  665 	mov	r4,#0x00
      000169 2B               [12]  666 	add	a,r3
      00016A F5 0E            [12]  667 	mov	_displayImage_temp_1_16,a
      00016C EC               [12]  668 	mov	a,r4
      00016D 3A               [12]  669 	addc	a,r2
      00016E F5 0F            [12]  670 	mov	(_displayImage_temp_1_16 + 1),a
                                    671 ;	display.c:24: for (j = 0; j < 16; j++)
                                    672 ;	1-genFromRTrack replaced	mov	_displayImage_j_1_16,#0x00
      000170 8C 11            [24]  673 	mov	_displayImage_j_1_16,r4
      000172                        674 00107$:
                                    675 ;	display.c:27: if (temp & 0x0001)
      000172 E5 0E            [12]  676 	mov	a,_displayImage_temp_1_16
      000174 30 E0 79         [24]  677 	jnb	acc.0,00102$
                                    678 ;	display.c:30: WheelImage(15-j,((((i * 256 / LED_COUNT) + j + 80*flow)/8) & 255));
      000177 A8 11            [24]  679 	mov	r0,_displayImage_j_1_16
      000179 79 00            [12]  680 	mov	r1,#0x00
      00017B 74 0F            [12]  681 	mov	a,#0x0f
      00017D C3               [12]  682 	clr	c
      00017E 98               [12]  683 	subb	a,r0
      00017F FB               [12]  684 	mov	r3,a
      000180 E4               [12]  685 	clr	a
      000181 99               [12]  686 	subb	a,r1
      000182 FC               [12]  687 	mov	r4,a
      000183 AA 10            [24]  688 	mov	r2,_displayImage_i_1_16
      000185 7D 00            [12]  689 	mov	r5,#0x00
      000187 8A 83            [24]  690 	mov	dph,r2
      000189 75 82 00         [24]  691 	mov	dpl,#0x00
      00018C 75 1B 10         [24]  692 	mov	__divsint_PARM_2,#0x10
                                    693 ;	1-genFromRTrack replaced	mov	(__divsint_PARM_2 + 1),#0x00
      00018F 8D 1C            [24]  694 	mov	(__divsint_PARM_2 + 1),r5
      000191 C0 07            [24]  695 	push	ar7
      000193 C0 06            [24]  696 	push	ar6
      000195 C0 04            [24]  697 	push	ar4
      000197 C0 03            [24]  698 	push	ar3
      000199 C0 01            [24]  699 	push	ar1
      00019B C0 00            [24]  700 	push	ar0
      00019D 12 0D C9         [24]  701 	lcall	__divsint
      0001A0 E5 82            [12]  702 	mov	a,dpl
      0001A2 85 83 F0         [24]  703 	mov	b,dph
      0001A5 D0 00            [24]  704 	pop	ar0
      0001A7 D0 01            [24]  705 	pop	ar1
      0001A9 28               [12]  706 	add	a,r0
      0001AA F8               [12]  707 	mov	r0,a
      0001AB E9               [12]  708 	mov	a,r1
      0001AC 35 F0            [12]  709 	addc	a,b
      0001AE F9               [12]  710 	mov	r1,a
      0001AF 85 0C 1B         [24]  711 	mov	__mulint_PARM_2,_flow
      0001B2 85 0D 1C         [24]  712 	mov	(__mulint_PARM_2 + 1),(_flow + 1)
      0001B5 90 00 50         [24]  713 	mov	dptr,#0x0050
      0001B8 C0 01            [24]  714 	push	ar1
      0001BA C0 00            [24]  715 	push	ar0
      0001BC 12 0D 00         [24]  716 	lcall	__mulint
      0001BF AA 82            [24]  717 	mov	r2,dpl
      0001C1 AD 83            [24]  718 	mov	r5,dph
      0001C3 D0 00            [24]  719 	pop	ar0
      0001C5 D0 01            [24]  720 	pop	ar1
      0001C7 D0 03            [24]  721 	pop	ar3
      0001C9 D0 04            [24]  722 	pop	ar4
      0001CB EA               [12]  723 	mov	a,r2
      0001CC 28               [12]  724 	add	a,r0
      0001CD FA               [12]  725 	mov	r2,a
      0001CE ED               [12]  726 	mov	a,r5
      0001CF 39               [12]  727 	addc	a,r1
      0001D0 C4               [12]  728 	swap	a
      0001D1 23               [12]  729 	rl	a
      0001D2 CA               [12]  730 	xch	a,r2
      0001D3 C4               [12]  731 	swap	a
      0001D4 23               [12]  732 	rl	a
      0001D5 54 1F            [12]  733 	anl	a,#0x1f
      0001D7 6A               [12]  734 	xrl	a,r2
      0001D8 CA               [12]  735 	xch	a,r2
      0001D9 54 1F            [12]  736 	anl	a,#0x1f
      0001DB CA               [12]  737 	xch	a,r2
      0001DC 6A               [12]  738 	xrl	a,r2
      0001DD CA               [12]  739 	xch	a,r2
      0001DE 8A 1B            [24]  740 	mov	_WheelImage_PARM_2,r2
      0001E0 75 1C 00         [24]  741 	mov	(_WheelImage_PARM_2 + 1),#0x00
      0001E3 8B 82            [24]  742 	mov	dpl,r3
      0001E5 8C 83            [24]  743 	mov	dph,r4
      0001E7 12 06 66         [24]  744 	lcall	_WheelImage
      0001EA D0 06            [24]  745 	pop	ar6
      0001EC D0 07            [24]  746 	pop	ar7
      0001EE 80 30            [24]  747 	sjmp	00103$
      0001F0                        748 00102$:
                                    749 ;	display.c:35: led_data[3 * (15-j) + 0] = 0x00;
      0001F0 74 0F            [12]  750 	mov	a,#0x0f
      0001F2 C3               [12]  751 	clr	c
      0001F3 95 11            [12]  752 	subb	a,_displayImage_j_1_16
      0001F5 75 F0 03         [24]  753 	mov	b,#0x03
      0001F8 A4               [48]  754 	mul	ab
      0001F9 FD               [12]  755 	mov	r5,a
      0001FA 24 00            [12]  756 	add	a,#_led_data
      0001FC F5 82            [12]  757 	mov	dpl,a
      0001FE E4               [12]  758 	clr	a
      0001FF 34 00            [12]  759 	addc	a,#(_led_data >> 8)
      000201 F5 83            [12]  760 	mov	dph,a
      000203 E4               [12]  761 	clr	a
      000204 F0               [24]  762 	movx	@dptr,a
                                    763 ;	display.c:36: led_data[3 * (15-j) + 1] = 0x00;
      000205 ED               [12]  764 	mov	a,r5
      000206 04               [12]  765 	inc	a
      000207 24 00            [12]  766 	add	a,#_led_data
      000209 F5 82            [12]  767 	mov	dpl,a
      00020B E4               [12]  768 	clr	a
      00020C 34 00            [12]  769 	addc	a,#(_led_data >> 8)
      00020E F5 83            [12]  770 	mov	dph,a
      000210 E4               [12]  771 	clr	a
      000211 F0               [24]  772 	movx	@dptr,a
                                    773 ;	display.c:37: led_data[3 * (15-j) + 2] = 0x00;
      000212 74 02            [12]  774 	mov	a,#0x02
      000214 2D               [12]  775 	add	a,r5
      000215 24 00            [12]  776 	add	a,#_led_data
      000217 F5 82            [12]  777 	mov	dpl,a
      000219 E4               [12]  778 	clr	a
      00021A 34 00            [12]  779 	addc	a,#(_led_data >> 8)
      00021C F5 83            [12]  780 	mov	dph,a
      00021E E4               [12]  781 	clr	a
      00021F F0               [24]  782 	movx	@dptr,a
      000220                        783 00103$:
                                    784 ;	display.c:39: temp = temp >> 1;
      000220 E5 0F            [12]  785 	mov	a,(_displayImage_temp_1_16 + 1)
      000222 C3               [12]  786 	clr	c
      000223 13               [12]  787 	rrc	a
      000224 C5 0E            [12]  788 	xch	a,_displayImage_temp_1_16
      000226 13               [12]  789 	rrc	a
      000227 C5 0E            [12]  790 	xch	a,_displayImage_temp_1_16
      000229 F5 0F            [12]  791 	mov	(_displayImage_temp_1_16 + 1),a
                                    792 ;	display.c:24: for (j = 0; j < 16; j++)
      00022B 05 11            [12]  793 	inc	_displayImage_j_1_16
      00022D 74 F0            [12]  794 	mov	a,#0x100 - 0x10
      00022F 25 11            [12]  795 	add	a,_displayImage_j_1_16
      000231 40 03            [24]  796 	jc	00140$
      000233 02 01 72         [24]  797 	ljmp	00107$
      000236                        798 00140$:
                                    799 ;	display.c:41: bitbangWs2812(LED_COUNT, led_data);
      000236 75 1B 00         [24]  800 	mov	_bitbangWs2812_PARM_2,#_led_data
      000239 75 1C 00         [24]  801 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      00023C 75 82 10         [24]  802 	mov	dpl,#0x10
      00023F C0 07            [24]  803 	push	ar7
      000241 C0 06            [24]  804 	push	ar6
      000243 12 00 EB         [24]  805 	lcall	_bitbangWs2812
                                    806 ;	display.c:42: mDelayuS(150);
      000246 90 00 96         [24]  807 	mov	dptr,#0x0096
      000249 12 0A D8         [24]  808 	lcall	_mDelayuS
      00024C D0 06            [24]  809 	pop	ar6
      00024E D0 07            [24]  810 	pop	ar7
                                    811 ;	display.c:20: for (i = 0; i < sizeof(text[num])/2; i++)
      000250 05 10            [12]  812 	inc	_displayImage_i_1_16
      000252 74 B0            [12]  813 	mov	a,#0x100 - 0x50
      000254 25 10            [12]  814 	add	a,_displayImage_i_1_16
      000256 40 03            [24]  815 	jc	00141$
      000258 02 01 4A         [24]  816 	ljmp	00109$
      00025B                        817 00141$:
                                    818 ;	display.c:44: for (k = 0; k < 16; k++)
      00025B 7F 00            [12]  819 	mov	r7,#0x00
      00025D                        820 00111$:
                                    821 ;	display.c:46: led_data[k * 3 + 0] = 0x00;
      00025D EF               [12]  822 	mov	a,r7
      00025E 75 F0 03         [24]  823 	mov	b,#0x03
      000261 A4               [48]  824 	mul	ab
      000262 FE               [12]  825 	mov	r6,a
      000263 24 00            [12]  826 	add	a,#_led_data
      000265 F5 82            [12]  827 	mov	dpl,a
      000267 E4               [12]  828 	clr	a
      000268 34 00            [12]  829 	addc	a,#(_led_data >> 8)
      00026A F5 83            [12]  830 	mov	dph,a
      00026C E4               [12]  831 	clr	a
      00026D F0               [24]  832 	movx	@dptr,a
                                    833 ;	display.c:47: led_data[k * 3 + 1] = 0x00;
      00026E EE               [12]  834 	mov	a,r6
      00026F 04               [12]  835 	inc	a
      000270 24 00            [12]  836 	add	a,#_led_data
      000272 F5 82            [12]  837 	mov	dpl,a
      000274 E4               [12]  838 	clr	a
      000275 34 00            [12]  839 	addc	a,#(_led_data >> 8)
      000277 F5 83            [12]  840 	mov	dph,a
      000279 E4               [12]  841 	clr	a
      00027A F0               [24]  842 	movx	@dptr,a
                                    843 ;	display.c:48: led_data[k * 3 + 2] = 0x00;
      00027B 74 02            [12]  844 	mov	a,#0x02
      00027D 2E               [12]  845 	add	a,r6
      00027E 24 00            [12]  846 	add	a,#_led_data
      000280 F5 82            [12]  847 	mov	dpl,a
      000282 E4               [12]  848 	clr	a
      000283 34 00            [12]  849 	addc	a,#(_led_data >> 8)
      000285 F5 83            [12]  850 	mov	dph,a
      000287 E4               [12]  851 	clr	a
      000288 F0               [24]  852 	movx	@dptr,a
                                    853 ;	display.c:44: for (k = 0; k < 16; k++)
      000289 0F               [12]  854 	inc	r7
      00028A BF 10 00         [24]  855 	cjne	r7,#0x10,00142$
      00028D                        856 00142$:
      00028D 40 CE            [24]  857 	jc	00111$
                                    858 ;	display.c:50: bitbangWs2812(LED_COUNT, led_data);
      00028F 75 1B 00         [24]  859 	mov	_bitbangWs2812_PARM_2,#_led_data
      000292 75 1C 00         [24]  860 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      000295 75 82 10         [24]  861 	mov	dpl,#0x10
      000298 12 00 EB         [24]  862 	lcall	_bitbangWs2812
                                    863 ;	display.c:51: flow++;
      00029B 05 0C            [12]  864 	inc	_flow
      00029D E4               [12]  865 	clr	a
      00029E B5 0C 02         [24]  866 	cjne	a,_flow,00144$
      0002A1 05 0D            [12]  867 	inc	(_flow + 1)
      0002A3                        868 00144$:
      0002A3 22               [24]  869 	ret
                                    870 ;------------------------------------------------------------
                                    871 ;Allocation info for local variables in function 'showImage16dots'
                                    872 ;------------------------------------------------------------
                                    873 ;num                       Allocated to registers r7 
                                    874 ;temp                      Allocated to registers r3 r4 
                                    875 ;i                         Allocated to registers r5 
                                    876 ;j                         Allocated to registers r2 
                                    877 ;k                         Allocated to registers r7 
                                    878 ;------------------------------------------------------------
                                    879 ;	display.c:53: void showImage16dots(uint8_t num)
                                    880 ;	-----------------------------------------
                                    881 ;	 function showImage16dots
                                    882 ;	-----------------------------------------
      0002A4                        883 _showImage16dots:
      0002A4 AF 82            [24]  884 	mov	r7,dpl
                                    885 ;	display.c:57: mDelaymS(40);
      0002A6 90 00 28         [24]  886 	mov	dptr,#0x0028
      0002A9 C0 07            [24]  887 	push	ar7
      0002AB 12 0A EE         [24]  888 	lcall	_mDelaymS
      0002AE D0 07            [24]  889 	pop	ar7
                                    890 ;	display.c:58: for (i = 0; i < sizeof(text[num])/2; i++)
      0002B0 EF               [12]  891 	mov	a,r7
      0002B1 75 F0 A0         [24]  892 	mov	b,#0xa0
      0002B4 A4               [48]  893 	mul	ab
      0002B5 24 05            [12]  894 	add	a,#_text
      0002B7 FE               [12]  895 	mov	r6,a
      0002B8 74 0E            [12]  896 	mov	a,#(_text >> 8)
      0002BA 35 F0            [12]  897 	addc	a,b
      0002BC FF               [12]  898 	mov	r7,a
      0002BD 7D 00            [12]  899 	mov	r5,#0x00
      0002BF                        900 00111$:
                                    901 ;	display.c:60: temp = (text[num][i * 2 + 1] << 8) + text[num][i * 2];
      0002BF ED               [12]  902 	mov	a,r5
      0002C0 2D               [12]  903 	add	a,r5
      0002C1 FC               [12]  904 	mov	r4,a
      0002C2 04               [12]  905 	inc	a
      0002C3 2E               [12]  906 	add	a,r6
      0002C4 F5 82            [12]  907 	mov	dpl,a
      0002C6 E4               [12]  908 	clr	a
      0002C7 3F               [12]  909 	addc	a,r7
      0002C8 F5 83            [12]  910 	mov	dph,a
      0002CA E4               [12]  911 	clr	a
      0002CB 93               [24]  912 	movc	a,@a+dptr
      0002CC FA               [12]  913 	mov	r2,a
      0002CD 7B 00            [12]  914 	mov	r3,#0x00
      0002CF EC               [12]  915 	mov	a,r4
      0002D0 2E               [12]  916 	add	a,r6
      0002D1 F5 82            [12]  917 	mov	dpl,a
      0002D3 E4               [12]  918 	clr	a
      0002D4 3F               [12]  919 	addc	a,r7
      0002D5 F5 83            [12]  920 	mov	dph,a
      0002D7 E4               [12]  921 	clr	a
      0002D8 93               [24]  922 	movc	a,@a+dptr
      0002D9 F9               [12]  923 	mov	r1,a
      0002DA 7C 00            [12]  924 	mov	r4,#0x00
      0002DC 2B               [12]  925 	add	a,r3
      0002DD FB               [12]  926 	mov	r3,a
      0002DE EC               [12]  927 	mov	a,r4
      0002DF 3A               [12]  928 	addc	a,r2
      0002E0 FC               [12]  929 	mov	r4,a
                                    930 ;	display.c:61: for (j = 0; j < 16; j++)
      0002E1 7A 00            [12]  931 	mov	r2,#0x00
      0002E3                        932 00109$:
                                    933 ;	display.c:63: if((j+1)%2==0){
      0002E3 8A 00            [24]  934 	mov	ar0,r2
      0002E5 79 00            [12]  935 	mov	r1,#0x00
      0002E7 88 82            [24]  936 	mov	dpl,r0
      0002E9 89 83            [24]  937 	mov	dph,r1
      0002EB A3               [24]  938 	inc	dptr
      0002EC 75 1B 02         [24]  939 	mov	__modsint_PARM_2,#0x02
                                    940 ;	1-genFromRTrack replaced	mov	(__modsint_PARM_2 + 1),#0x00
      0002EF 89 1C            [24]  941 	mov	(__modsint_PARM_2 + 1),r1
      0002F1 C0 07            [24]  942 	push	ar7
      0002F3 C0 06            [24]  943 	push	ar6
      0002F5 C0 05            [24]  944 	push	ar5
      0002F7 C0 04            [24]  945 	push	ar4
      0002F9 C0 03            [24]  946 	push	ar3
      0002FB C0 02            [24]  947 	push	ar2
      0002FD 12 0D 93         [24]  948 	lcall	__modsint
      000300 E5 82            [12]  949 	mov	a,dpl
      000302 85 83 F0         [24]  950 	mov	b,dph
      000305 D0 02            [24]  951 	pop	ar2
      000307 D0 03            [24]  952 	pop	ar3
      000309 D0 04            [24]  953 	pop	ar4
      00030B D0 05            [24]  954 	pop	ar5
      00030D D0 06            [24]  955 	pop	ar6
      00030F D0 07            [24]  956 	pop	ar7
      000311 45 F0            [12]  957 	orl	a,b
      000313 70 08            [24]  958 	jnz	00102$
                                    959 ;	display.c:64: wheel_pos = wheel_pos+1;
      000315 05 0A            [12]  960 	inc	_wheel_pos
      000317 E4               [12]  961 	clr	a
      000318 B5 0A 02         [24]  962 	cjne	a,_wheel_pos,00145$
      00031B 05 0B            [12]  963 	inc	(_wheel_pos + 1)
      00031D                        964 00145$:
      00031D                        965 00102$:
                                    966 ;	display.c:66: if (temp & 0x0001)
      00031D EB               [12]  967 	mov	a,r3
      00031E 30 E0 4D         [24]  968 	jnb	acc.0,00104$
                                    969 ;	display.c:68: wheel(wheel_pos, 0x9f, led_data + ((15 - j) * 3 + 0)); //lower brightness.
      000321 8A 00            [24]  970 	mov	ar0,r2
      000323 79 00            [12]  971 	mov	r1,#0x00
      000325 74 0F            [12]  972 	mov	a,#0x0f
      000327 C3               [12]  973 	clr	c
      000328 98               [12]  974 	subb	a,r0
      000329 F5 1B            [12]  975 	mov	__mulint_PARM_2,a
      00032B E4               [12]  976 	clr	a
      00032C 99               [12]  977 	subb	a,r1
      00032D F5 1C            [12]  978 	mov	(__mulint_PARM_2 + 1),a
      00032F 90 00 03         [24]  979 	mov	dptr,#0x0003
      000332 C0 07            [24]  980 	push	ar7
      000334 C0 06            [24]  981 	push	ar6
      000336 C0 05            [24]  982 	push	ar5
      000338 C0 04            [24]  983 	push	ar4
      00033A C0 03            [24]  984 	push	ar3
      00033C C0 02            [24]  985 	push	ar2
      00033E 12 0D 00         [24]  986 	lcall	__mulint
      000341 A8 82            [24]  987 	mov	r0,dpl
      000343 A9 83            [24]  988 	mov	r1,dph
      000345 E8               [12]  989 	mov	a,r0
      000346 24 00            [12]  990 	add	a,#_led_data
      000348 F8               [12]  991 	mov	r0,a
      000349 E9               [12]  992 	mov	a,r1
      00034A 34 00            [12]  993 	addc	a,#(_led_data >> 8)
      00034C F9               [12]  994 	mov	r1,a
      00034D 88 1C            [24]  995 	mov	_wheel_PARM_3,r0
      00034F 89 1D            [24]  996 	mov	(_wheel_PARM_3 + 1),r1
      000351 75 1E 00         [24]  997 	mov	(_wheel_PARM_3 + 2),#0x00
      000354 75 1B 9F         [24]  998 	mov	_wheel_PARM_2,#0x9f
      000357 85 0A 82         [24]  999 	mov	dpl,_wheel_pos
      00035A 85 0B 83         [24] 1000 	mov	dph,(_wheel_pos + 1)
      00035D 12 07 3F         [24] 1001 	lcall	_wheel
      000360 D0 02            [24] 1002 	pop	ar2
      000362 D0 03            [24] 1003 	pop	ar3
      000364 D0 04            [24] 1004 	pop	ar4
      000366 D0 05            [24] 1005 	pop	ar5
      000368 D0 06            [24] 1006 	pop	ar6
      00036A D0 07            [24] 1007 	pop	ar7
      00036C 80 4B            [24] 1008 	sjmp	00105$
      00036E                       1009 00104$:
                                   1010 ;	display.c:72: wheel(wheel_pos, 0x00, led_data + ((15 - j) * 3 + 0)); //for same interval.
      00036E 8A 00            [24] 1011 	mov	ar0,r2
      000370 79 00            [12] 1012 	mov	r1,#0x00
      000372 74 0F            [12] 1013 	mov	a,#0x0f
      000374 C3               [12] 1014 	clr	c
      000375 98               [12] 1015 	subb	a,r0
      000376 F5 1B            [12] 1016 	mov	__mulint_PARM_2,a
      000378 E4               [12] 1017 	clr	a
      000379 99               [12] 1018 	subb	a,r1
      00037A F5 1C            [12] 1019 	mov	(__mulint_PARM_2 + 1),a
      00037C 90 00 03         [24] 1020 	mov	dptr,#0x0003
      00037F C0 07            [24] 1021 	push	ar7
      000381 C0 06            [24] 1022 	push	ar6
      000383 C0 05            [24] 1023 	push	ar5
      000385 C0 04            [24] 1024 	push	ar4
      000387 C0 03            [24] 1025 	push	ar3
      000389 C0 02            [24] 1026 	push	ar2
      00038B 12 0D 00         [24] 1027 	lcall	__mulint
      00038E A8 82            [24] 1028 	mov	r0,dpl
      000390 A9 83            [24] 1029 	mov	r1,dph
      000392 E8               [12] 1030 	mov	a,r0
      000393 24 00            [12] 1031 	add	a,#_led_data
      000395 F8               [12] 1032 	mov	r0,a
      000396 E9               [12] 1033 	mov	a,r1
      000397 34 00            [12] 1034 	addc	a,#(_led_data >> 8)
      000399 F9               [12] 1035 	mov	r1,a
      00039A 88 1C            [24] 1036 	mov	_wheel_PARM_3,r0
      00039C 89 1D            [24] 1037 	mov	(_wheel_PARM_3 + 1),r1
      00039E 75 1E 00         [24] 1038 	mov	(_wheel_PARM_3 + 2),#0x00
      0003A1 75 1B 00         [24] 1039 	mov	_wheel_PARM_2,#0x00
      0003A4 85 0A 82         [24] 1040 	mov	dpl,_wheel_pos
      0003A7 85 0B 83         [24] 1041 	mov	dph,(_wheel_pos + 1)
      0003AA 12 07 3F         [24] 1042 	lcall	_wheel
      0003AD D0 02            [24] 1043 	pop	ar2
      0003AF D0 03            [24] 1044 	pop	ar3
      0003B1 D0 04            [24] 1045 	pop	ar4
      0003B3 D0 05            [24] 1046 	pop	ar5
      0003B5 D0 06            [24] 1047 	pop	ar6
      0003B7 D0 07            [24] 1048 	pop	ar7
      0003B9                       1049 00105$:
                                   1050 ;	display.c:74: temp = temp >> 1;
      0003B9 EC               [12] 1051 	mov	a,r4
      0003BA C3               [12] 1052 	clr	c
      0003BB 13               [12] 1053 	rrc	a
      0003BC CB               [12] 1054 	xch	a,r3
      0003BD 13               [12] 1055 	rrc	a
      0003BE CB               [12] 1056 	xch	a,r3
      0003BF FC               [12] 1057 	mov	r4,a
                                   1058 ;	display.c:61: for (j = 0; j < 16; j++)
      0003C0 0A               [12] 1059 	inc	r2
      0003C1 BA 10 00         [24] 1060 	cjne	r2,#0x10,00147$
      0003C4                       1061 00147$:
      0003C4 50 03            [24] 1062 	jnc	00148$
      0003C6 02 02 E3         [24] 1063 	ljmp	00109$
      0003C9                       1064 00148$:
                                   1065 ;	display.c:76: bitbangWs2812(LED_COUNT, led_data);
      0003C9 75 1B 00         [24] 1066 	mov	_bitbangWs2812_PARM_2,#_led_data
      0003CC 75 1C 00         [24] 1067 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      0003CF 75 82 10         [24] 1068 	mov	dpl,#0x10
      0003D2 C0 07            [24] 1069 	push	ar7
      0003D4 C0 06            [24] 1070 	push	ar6
      0003D6 C0 05            [24] 1071 	push	ar5
      0003D8 12 00 EB         [24] 1072 	lcall	_bitbangWs2812
                                   1073 ;	display.c:77: mDelayuS(150);
      0003DB 90 00 96         [24] 1074 	mov	dptr,#0x0096
      0003DE 12 0A D8         [24] 1075 	lcall	_mDelayuS
      0003E1 D0 05            [24] 1076 	pop	ar5
      0003E3 D0 06            [24] 1077 	pop	ar6
      0003E5 D0 07            [24] 1078 	pop	ar7
                                   1079 ;	display.c:58: for (i = 0; i < sizeof(text[num])/2; i++)
      0003E7 0D               [12] 1080 	inc	r5
      0003E8 BD 50 00         [24] 1081 	cjne	r5,#0x50,00149$
      0003EB                       1082 00149$:
      0003EB 50 03            [24] 1083 	jnc	00150$
      0003ED 02 02 BF         [24] 1084 	ljmp	00111$
      0003F0                       1085 00150$:
                                   1086 ;	display.c:79: for (k = 0; k < 16; k++)
      0003F0 7F 00            [12] 1087 	mov	r7,#0x00
      0003F2                       1088 00113$:
                                   1089 ;	display.c:81: led_data[k * 3 + 0] = 0x00;
      0003F2 EF               [12] 1090 	mov	a,r7
      0003F3 75 F0 03         [24] 1091 	mov	b,#0x03
      0003F6 A4               [48] 1092 	mul	ab
      0003F7 FE               [12] 1093 	mov	r6,a
      0003F8 24 00            [12] 1094 	add	a,#_led_data
      0003FA F5 82            [12] 1095 	mov	dpl,a
      0003FC E4               [12] 1096 	clr	a
      0003FD 34 00            [12] 1097 	addc	a,#(_led_data >> 8)
      0003FF F5 83            [12] 1098 	mov	dph,a
      000401 E4               [12] 1099 	clr	a
      000402 F0               [24] 1100 	movx	@dptr,a
                                   1101 ;	display.c:82: led_data[k * 3 + 1] = 0x00;
      000403 EE               [12] 1102 	mov	a,r6
      000404 04               [12] 1103 	inc	a
      000405 24 00            [12] 1104 	add	a,#_led_data
      000407 F5 82            [12] 1105 	mov	dpl,a
      000409 E4               [12] 1106 	clr	a
      00040A 34 00            [12] 1107 	addc	a,#(_led_data >> 8)
      00040C F5 83            [12] 1108 	mov	dph,a
      00040E E4               [12] 1109 	clr	a
      00040F F0               [24] 1110 	movx	@dptr,a
                                   1111 ;	display.c:83: led_data[k * 3 + 2] = 0x00;
      000410 74 02            [12] 1112 	mov	a,#0x02
      000412 2E               [12] 1113 	add	a,r6
      000413 24 00            [12] 1114 	add	a,#_led_data
      000415 F5 82            [12] 1115 	mov	dpl,a
      000417 E4               [12] 1116 	clr	a
      000418 34 00            [12] 1117 	addc	a,#(_led_data >> 8)
      00041A F5 83            [12] 1118 	mov	dph,a
      00041C E4               [12] 1119 	clr	a
      00041D F0               [24] 1120 	movx	@dptr,a
                                   1121 ;	display.c:79: for (k = 0; k < 16; k++)
      00041E 0F               [12] 1122 	inc	r7
      00041F BF 10 00         [24] 1123 	cjne	r7,#0x10,00151$
      000422                       1124 00151$:
      000422 40 CE            [24] 1125 	jc	00113$
                                   1126 ;	display.c:85: bitbangWs2812(LED_COUNT, led_data);
      000424 75 1B 00         [24] 1127 	mov	_bitbangWs2812_PARM_2,#_led_data
      000427 75 1C 00         [24] 1128 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      00042A 75 82 10         [24] 1129 	mov	dpl,#0x10
      00042D 02 00 EB         [24] 1130 	ljmp	_bitbangWs2812
                                   1131 ;------------------------------------------------------------
                                   1132 ;Allocation info for local variables in function 'showImage16'
                                   1133 ;------------------------------------------------------------
                                   1134 ;num                       Allocated to registers r7 
                                   1135 ;temp                      Allocated with name '_showImage16_temp_1_31'
                                   1136 ;i                         Allocated to registers r5 
                                   1137 ;j                         Allocated to registers r0 
                                   1138 ;k                         Allocated to registers r7 
                                   1139 ;------------------------------------------------------------
                                   1140 ;	display.c:87: void showImage16(uint8_t num)
                                   1141 ;	-----------------------------------------
                                   1142 ;	 function showImage16
                                   1143 ;	-----------------------------------------
      000430                       1144 _showImage16:
      000430 AF 82            [24] 1145 	mov	r7,dpl
                                   1146 ;	display.c:91: mDelaymS(40);
      000432 90 00 28         [24] 1147 	mov	dptr,#0x0028
      000435 C0 07            [24] 1148 	push	ar7
      000437 12 0A EE         [24] 1149 	lcall	_mDelaymS
      00043A D0 07            [24] 1150 	pop	ar7
                                   1151 ;	display.c:92: for (i = 0; i < sizeof(text[num])/2; i++)
      00043C EF               [12] 1152 	mov	a,r7
      00043D 75 F0 A0         [24] 1153 	mov	b,#0xa0
      000440 A4               [48] 1154 	mul	ab
      000441 24 05            [12] 1155 	add	a,#_text
      000443 FE               [12] 1156 	mov	r6,a
      000444 74 0E            [12] 1157 	mov	a,#(_text >> 8)
      000446 35 F0            [12] 1158 	addc	a,b
      000448 FF               [12] 1159 	mov	r7,a
      000449 7D 00            [12] 1160 	mov	r5,#0x00
      00044B                       1161 00115$:
                                   1162 ;	display.c:94: temp = (text[num][i * 2 + 1] << 8) + text[num][i * 2];
      00044B ED               [12] 1163 	mov	a,r5
      00044C 2D               [12] 1164 	add	a,r5
      00044D FC               [12] 1165 	mov	r4,a
      00044E 04               [12] 1166 	inc	a
      00044F 2E               [12] 1167 	add	a,r6
      000450 F5 82            [12] 1168 	mov	dpl,a
      000452 E4               [12] 1169 	clr	a
      000453 3F               [12] 1170 	addc	a,r7
      000454 F5 83            [12] 1171 	mov	dph,a
      000456 E4               [12] 1172 	clr	a
      000457 93               [24] 1173 	movc	a,@a+dptr
      000458 FA               [12] 1174 	mov	r2,a
      000459 7B 00            [12] 1175 	mov	r3,#0x00
      00045B EC               [12] 1176 	mov	a,r4
      00045C 2E               [12] 1177 	add	a,r6
      00045D F5 82            [12] 1178 	mov	dpl,a
      00045F E4               [12] 1179 	clr	a
      000460 3F               [12] 1180 	addc	a,r7
      000461 F5 83            [12] 1181 	mov	dph,a
      000463 E4               [12] 1182 	clr	a
      000464 93               [24] 1183 	movc	a,@a+dptr
      000465 7C 00            [12] 1184 	mov	r4,#0x00
      000467 2B               [12] 1185 	add	a,r3
      000468 F5 12            [12] 1186 	mov	_showImage16_temp_1_31,a
      00046A EC               [12] 1187 	mov	a,r4
      00046B 3A               [12] 1188 	addc	a,r2
      00046C F5 13            [12] 1189 	mov	(_showImage16_temp_1_31 + 1),a
                                   1190 ;	display.c:95: for (j = 0; j < 16; j++)
      00046E ED               [12] 1191 	mov	a,r5
      00046F C4               [12] 1192 	swap	a
      000470 54 0F            [12] 1193 	anl	a,#0x0f
      000472 FA               [12] 1194 	mov	r2,a
      000473 C3               [12] 1195 	clr	c
      000474 74 04            [12] 1196 	mov	a,#0x04
      000476 9A               [12] 1197 	subb	a,r2
      000477 E4               [12] 1198 	clr	a
      000478 33               [12] 1199 	rlc	a
      000479 F9               [12] 1200 	mov	r1,a
      00047A 78 00            [12] 1201 	mov	r0,#0x00
      00047C                       1202 00113$:
                                   1203 ;	display.c:98: if (temp & 0x0001)
      00047C E5 12            [12] 1204 	mov	a,_showImage16_temp_1_31
      00047E 20 E0 03         [24] 1205 	jb	acc.0,00148$
      000481 02 05 A0         [24] 1206 	ljmp	00108$
      000484                       1207 00148$:
                                   1208 ;	display.c:100: switch(i/16){
      000484 E9               [12] 1209 	mov	a,r1
      000485 60 03            [24] 1210 	jz	00149$
      000487 02 05 EB         [24] 1211 	ljmp	00109$
      00048A                       1212 00149$:
      00048A EA               [12] 1213 	mov	a,r2
      00048B 2A               [12] 1214 	add	a,r2
      00048C 2A               [12] 1215 	add	a,r2
      00048D 90 04 91         [24] 1216 	mov	dptr,#00150$
      000490 73               [24] 1217 	jmp	@a+dptr
      000491                       1218 00150$:
      000491 02 04 A0         [24] 1219 	ljmp	00101$
      000494 02 04 D3         [24] 1220 	ljmp	00102$
      000497 02 05 06         [24] 1221 	ljmp	00103$
      00049A 02 05 39         [24] 1222 	ljmp	00104$
      00049D 02 05 6D         [24] 1223 	ljmp	00105$
                                   1224 ;	display.c:101: case 0 : 
      0004A0                       1225 00101$:
                                   1226 ;	display.c:102: led_data[(15 - j) * 3 + 0] = 0x00;
      0004A0 74 0F            [12] 1227 	mov	a,#0x0f
      0004A2 C3               [12] 1228 	clr	c
      0004A3 98               [12] 1229 	subb	a,r0
      0004A4 75 F0 03         [24] 1230 	mov	b,#0x03
      0004A7 A4               [48] 1231 	mul	ab
      0004A8 FC               [12] 1232 	mov	r4,a
      0004A9 24 00            [12] 1233 	add	a,#_led_data
      0004AB F5 82            [12] 1234 	mov	dpl,a
      0004AD E4               [12] 1235 	clr	a
      0004AE 34 00            [12] 1236 	addc	a,#(_led_data >> 8)
      0004B0 F5 83            [12] 1237 	mov	dph,a
      0004B2 E4               [12] 1238 	clr	a
      0004B3 F0               [24] 1239 	movx	@dptr,a
                                   1240 ;	display.c:103: led_data[(15 - j) * 3 + 1] = 0x80;
      0004B4 EC               [12] 1241 	mov	a,r4
      0004B5 04               [12] 1242 	inc	a
      0004B6 24 00            [12] 1243 	add	a,#_led_data
      0004B8 F5 82            [12] 1244 	mov	dpl,a
      0004BA E4               [12] 1245 	clr	a
      0004BB 34 00            [12] 1246 	addc	a,#(_led_data >> 8)
      0004BD F5 83            [12] 1247 	mov	dph,a
      0004BF 74 80            [12] 1248 	mov	a,#0x80
      0004C1 F0               [24] 1249 	movx	@dptr,a
                                   1250 ;	display.c:104: led_data[(15 - j) * 3 + 2] = 0x00;
      0004C2 74 02            [12] 1251 	mov	a,#0x02
      0004C4 2C               [12] 1252 	add	a,r4
      0004C5 24 00            [12] 1253 	add	a,#_led_data
      0004C7 F5 82            [12] 1254 	mov	dpl,a
      0004C9 E4               [12] 1255 	clr	a
      0004CA 34 00            [12] 1256 	addc	a,#(_led_data >> 8)
      0004CC F5 83            [12] 1257 	mov	dph,a
      0004CE E4               [12] 1258 	clr	a
      0004CF F0               [24] 1259 	movx	@dptr,a
                                   1260 ;	display.c:105: break;
      0004D0 02 05 EB         [24] 1261 	ljmp	00109$
                                   1262 ;	display.c:106: case 1 : 
      0004D3                       1263 00102$:
                                   1264 ;	display.c:107: led_data[(15 - j) * 3 + 0] = 0x00;
      0004D3 74 0F            [12] 1265 	mov	a,#0x0f
      0004D5 C3               [12] 1266 	clr	c
      0004D6 98               [12] 1267 	subb	a,r0
      0004D7 75 F0 03         [24] 1268 	mov	b,#0x03
      0004DA A4               [48] 1269 	mul	ab
      0004DB FC               [12] 1270 	mov	r4,a
      0004DC 24 00            [12] 1271 	add	a,#_led_data
      0004DE F5 82            [12] 1272 	mov	dpl,a
      0004E0 E4               [12] 1273 	clr	a
      0004E1 34 00            [12] 1274 	addc	a,#(_led_data >> 8)
      0004E3 F5 83            [12] 1275 	mov	dph,a
      0004E5 E4               [12] 1276 	clr	a
      0004E6 F0               [24] 1277 	movx	@dptr,a
                                   1278 ;	display.c:108: led_data[(15 - j) * 3 + 1] = 0x00;
      0004E7 EC               [12] 1279 	mov	a,r4
      0004E8 04               [12] 1280 	inc	a
      0004E9 24 00            [12] 1281 	add	a,#_led_data
      0004EB F5 82            [12] 1282 	mov	dpl,a
      0004ED E4               [12] 1283 	clr	a
      0004EE 34 00            [12] 1284 	addc	a,#(_led_data >> 8)
      0004F0 F5 83            [12] 1285 	mov	dph,a
      0004F2 E4               [12] 1286 	clr	a
      0004F3 F0               [24] 1287 	movx	@dptr,a
                                   1288 ;	display.c:109: led_data[(15 - j) * 3 + 2] = 0x80;
      0004F4 74 02            [12] 1289 	mov	a,#0x02
      0004F6 2C               [12] 1290 	add	a,r4
      0004F7 24 00            [12] 1291 	add	a,#_led_data
      0004F9 F5 82            [12] 1292 	mov	dpl,a
      0004FB E4               [12] 1293 	clr	a
      0004FC 34 00            [12] 1294 	addc	a,#(_led_data >> 8)
      0004FE F5 83            [12] 1295 	mov	dph,a
      000500 74 80            [12] 1296 	mov	a,#0x80
      000502 F0               [24] 1297 	movx	@dptr,a
                                   1298 ;	display.c:110: break;
      000503 02 05 EB         [24] 1299 	ljmp	00109$
                                   1300 ;	display.c:111: case 2 : 
      000506                       1301 00103$:
                                   1302 ;	display.c:112: led_data[(15 - j) * 3 + 0] = 0x80;
      000506 74 0F            [12] 1303 	mov	a,#0x0f
      000508 C3               [12] 1304 	clr	c
      000509 98               [12] 1305 	subb	a,r0
      00050A 75 F0 03         [24] 1306 	mov	b,#0x03
      00050D A4               [48] 1307 	mul	ab
      00050E FC               [12] 1308 	mov	r4,a
      00050F 24 00            [12] 1309 	add	a,#_led_data
      000511 F5 82            [12] 1310 	mov	dpl,a
      000513 E4               [12] 1311 	clr	a
      000514 34 00            [12] 1312 	addc	a,#(_led_data >> 8)
      000516 F5 83            [12] 1313 	mov	dph,a
      000518 74 80            [12] 1314 	mov	a,#0x80
      00051A F0               [24] 1315 	movx	@dptr,a
                                   1316 ;	display.c:113: led_data[(15 - j) * 3 + 1] = 0x00;
      00051B EC               [12] 1317 	mov	a,r4
      00051C 04               [12] 1318 	inc	a
      00051D 24 00            [12] 1319 	add	a,#_led_data
      00051F F5 82            [12] 1320 	mov	dpl,a
      000521 E4               [12] 1321 	clr	a
      000522 34 00            [12] 1322 	addc	a,#(_led_data >> 8)
      000524 F5 83            [12] 1323 	mov	dph,a
      000526 E4               [12] 1324 	clr	a
      000527 F0               [24] 1325 	movx	@dptr,a
                                   1326 ;	display.c:114: led_data[(15 - j) * 3 + 2] = 0x00;
      000528 74 02            [12] 1327 	mov	a,#0x02
      00052A 2C               [12] 1328 	add	a,r4
      00052B 24 00            [12] 1329 	add	a,#_led_data
      00052D F5 82            [12] 1330 	mov	dpl,a
      00052F E4               [12] 1331 	clr	a
      000530 34 00            [12] 1332 	addc	a,#(_led_data >> 8)
      000532 F5 83            [12] 1333 	mov	dph,a
      000534 E4               [12] 1334 	clr	a
      000535 F0               [24] 1335 	movx	@dptr,a
                                   1336 ;	display.c:115: break;
      000536 02 05 EB         [24] 1337 	ljmp	00109$
                                   1338 ;	display.c:116: case 3 : 
      000539                       1339 00104$:
                                   1340 ;	display.c:117: led_data[(15 - j) * 3 + 0] = 0x80;
      000539 74 0F            [12] 1341 	mov	a,#0x0f
      00053B C3               [12] 1342 	clr	c
      00053C 98               [12] 1343 	subb	a,r0
      00053D 75 F0 03         [24] 1344 	mov	b,#0x03
      000540 A4               [48] 1345 	mul	ab
      000541 FC               [12] 1346 	mov	r4,a
      000542 24 00            [12] 1347 	add	a,#_led_data
      000544 F5 82            [12] 1348 	mov	dpl,a
      000546 E4               [12] 1349 	clr	a
      000547 34 00            [12] 1350 	addc	a,#(_led_data >> 8)
      000549 F5 83            [12] 1351 	mov	dph,a
      00054B 74 80            [12] 1352 	mov	a,#0x80
      00054D F0               [24] 1353 	movx	@dptr,a
                                   1354 ;	display.c:118: led_data[(15 - j) * 3 + 1] = 0x80;
      00054E EC               [12] 1355 	mov	a,r4
      00054F 04               [12] 1356 	inc	a
      000550 24 00            [12] 1357 	add	a,#_led_data
      000552 F5 82            [12] 1358 	mov	dpl,a
      000554 E4               [12] 1359 	clr	a
      000555 34 00            [12] 1360 	addc	a,#(_led_data >> 8)
      000557 F5 83            [12] 1361 	mov	dph,a
      000559 74 80            [12] 1362 	mov	a,#0x80
      00055B F0               [24] 1363 	movx	@dptr,a
                                   1364 ;	display.c:119: led_data[(15 - j) * 3 + 2] = 0x00;
      00055C 74 02            [12] 1365 	mov	a,#0x02
      00055E 2C               [12] 1366 	add	a,r4
      00055F 24 00            [12] 1367 	add	a,#_led_data
      000561 F5 82            [12] 1368 	mov	dpl,a
      000563 E4               [12] 1369 	clr	a
      000564 34 00            [12] 1370 	addc	a,#(_led_data >> 8)
      000566 F5 83            [12] 1371 	mov	dph,a
      000568 E4               [12] 1372 	clr	a
      000569 F0               [24] 1373 	movx	@dptr,a
                                   1374 ;	display.c:120: break;
      00056A 02 05 EB         [24] 1375 	ljmp	00109$
                                   1376 ;	display.c:121: case 4 : 
      00056D                       1377 00105$:
                                   1378 ;	display.c:122: led_data[(15 - j) * 3 + 0] = 0x80;
      00056D 74 0F            [12] 1379 	mov	a,#0x0f
      00056F C3               [12] 1380 	clr	c
      000570 98               [12] 1381 	subb	a,r0
      000571 75 F0 03         [24] 1382 	mov	b,#0x03
      000574 A4               [48] 1383 	mul	ab
      000575 FC               [12] 1384 	mov	r4,a
      000576 24 00            [12] 1385 	add	a,#_led_data
      000578 F5 82            [12] 1386 	mov	dpl,a
      00057A E4               [12] 1387 	clr	a
      00057B 34 00            [12] 1388 	addc	a,#(_led_data >> 8)
      00057D F5 83            [12] 1389 	mov	dph,a
      00057F 74 80            [12] 1390 	mov	a,#0x80
      000581 F0               [24] 1391 	movx	@dptr,a
                                   1392 ;	display.c:123: led_data[(15 - j) * 3 + 1] = 0x00;
      000582 EC               [12] 1393 	mov	a,r4
      000583 04               [12] 1394 	inc	a
      000584 24 00            [12] 1395 	add	a,#_led_data
      000586 F5 82            [12] 1396 	mov	dpl,a
      000588 E4               [12] 1397 	clr	a
      000589 34 00            [12] 1398 	addc	a,#(_led_data >> 8)
      00058B F5 83            [12] 1399 	mov	dph,a
      00058D E4               [12] 1400 	clr	a
      00058E F0               [24] 1401 	movx	@dptr,a
                                   1402 ;	display.c:124: led_data[(15 - j) * 3 + 2] = 0x80;
      00058F 74 02            [12] 1403 	mov	a,#0x02
      000591 2C               [12] 1404 	add	a,r4
      000592 24 00            [12] 1405 	add	a,#_led_data
      000594 F5 82            [12] 1406 	mov	dpl,a
      000596 E4               [12] 1407 	clr	a
      000597 34 00            [12] 1408 	addc	a,#(_led_data >> 8)
      000599 F5 83            [12] 1409 	mov	dph,a
      00059B 74 80            [12] 1410 	mov	a,#0x80
      00059D F0               [24] 1411 	movx	@dptr,a
                                   1412 ;	display.c:126: }
      00059E 80 4B            [24] 1413 	sjmp	00109$
      0005A0                       1414 00108$:
                                   1415 ;	display.c:130: wheel(wheel_pos, 0x00, led_data + ((15 - j) * 3 + 0)); //for same interval.
      0005A0 88 03            [24] 1416 	mov	ar3,r0
      0005A2 7C 00            [12] 1417 	mov	r4,#0x00
      0005A4 74 0F            [12] 1418 	mov	a,#0x0f
      0005A6 C3               [12] 1419 	clr	c
      0005A7 9B               [12] 1420 	subb	a,r3
      0005A8 F5 1B            [12] 1421 	mov	__mulint_PARM_2,a
      0005AA E4               [12] 1422 	clr	a
      0005AB 9C               [12] 1423 	subb	a,r4
      0005AC F5 1C            [12] 1424 	mov	(__mulint_PARM_2 + 1),a
      0005AE 90 00 03         [24] 1425 	mov	dptr,#0x0003
      0005B1 C0 07            [24] 1426 	push	ar7
      0005B3 C0 06            [24] 1427 	push	ar6
      0005B5 C0 05            [24] 1428 	push	ar5
      0005B7 C0 02            [24] 1429 	push	ar2
      0005B9 C0 01            [24] 1430 	push	ar1
      0005BB C0 00            [24] 1431 	push	ar0
      0005BD 12 0D 00         [24] 1432 	lcall	__mulint
      0005C0 AB 82            [24] 1433 	mov	r3,dpl
      0005C2 AC 83            [24] 1434 	mov	r4,dph
      0005C4 EB               [12] 1435 	mov	a,r3
      0005C5 24 00            [12] 1436 	add	a,#_led_data
      0005C7 FB               [12] 1437 	mov	r3,a
      0005C8 EC               [12] 1438 	mov	a,r4
      0005C9 34 00            [12] 1439 	addc	a,#(_led_data >> 8)
      0005CB FC               [12] 1440 	mov	r4,a
      0005CC 8B 1C            [24] 1441 	mov	_wheel_PARM_3,r3
      0005CE 8C 1D            [24] 1442 	mov	(_wheel_PARM_3 + 1),r4
      0005D0 75 1E 00         [24] 1443 	mov	(_wheel_PARM_3 + 2),#0x00
      0005D3 75 1B 00         [24] 1444 	mov	_wheel_PARM_2,#0x00
      0005D6 85 0A 82         [24] 1445 	mov	dpl,_wheel_pos
      0005D9 85 0B 83         [24] 1446 	mov	dph,(_wheel_pos + 1)
      0005DC 12 07 3F         [24] 1447 	lcall	_wheel
      0005DF D0 00            [24] 1448 	pop	ar0
      0005E1 D0 01            [24] 1449 	pop	ar1
      0005E3 D0 02            [24] 1450 	pop	ar2
      0005E5 D0 05            [24] 1451 	pop	ar5
      0005E7 D0 06            [24] 1452 	pop	ar6
      0005E9 D0 07            [24] 1453 	pop	ar7
      0005EB                       1454 00109$:
                                   1455 ;	display.c:132: temp = temp >> 1;
      0005EB E5 13            [12] 1456 	mov	a,(_showImage16_temp_1_31 + 1)
      0005ED C3               [12] 1457 	clr	c
      0005EE 13               [12] 1458 	rrc	a
      0005EF C5 12            [12] 1459 	xch	a,_showImage16_temp_1_31
      0005F1 13               [12] 1460 	rrc	a
      0005F2 C5 12            [12] 1461 	xch	a,_showImage16_temp_1_31
      0005F4 F5 13            [12] 1462 	mov	(_showImage16_temp_1_31 + 1),a
                                   1463 ;	display.c:95: for (j = 0; j < 16; j++)
      0005F6 08               [12] 1464 	inc	r0
      0005F7 B8 10 00         [24] 1465 	cjne	r0,#0x10,00151$
      0005FA                       1466 00151$:
      0005FA 50 03            [24] 1467 	jnc	00152$
      0005FC 02 04 7C         [24] 1468 	ljmp	00113$
      0005FF                       1469 00152$:
                                   1470 ;	display.c:134: bitbangWs2812(LED_COUNT, led_data);
      0005FF 75 1B 00         [24] 1471 	mov	_bitbangWs2812_PARM_2,#_led_data
      000602 75 1C 00         [24] 1472 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      000605 75 82 10         [24] 1473 	mov	dpl,#0x10
      000608 C0 07            [24] 1474 	push	ar7
      00060A C0 06            [24] 1475 	push	ar6
      00060C C0 05            [24] 1476 	push	ar5
      00060E 12 00 EB         [24] 1477 	lcall	_bitbangWs2812
                                   1478 ;	display.c:135: mDelayuS(150);
      000611 90 00 96         [24] 1479 	mov	dptr,#0x0096
      000614 12 0A D8         [24] 1480 	lcall	_mDelayuS
      000617 D0 05            [24] 1481 	pop	ar5
      000619 D0 06            [24] 1482 	pop	ar6
      00061B D0 07            [24] 1483 	pop	ar7
                                   1484 ;	display.c:92: for (i = 0; i < sizeof(text[num])/2; i++)
      00061D 0D               [12] 1485 	inc	r5
      00061E BD 50 00         [24] 1486 	cjne	r5,#0x50,00153$
      000621                       1487 00153$:
      000621 50 03            [24] 1488 	jnc	00154$
      000623 02 04 4B         [24] 1489 	ljmp	00115$
      000626                       1490 00154$:
                                   1491 ;	display.c:137: for (k = 0; k < 16; k++)//熄灭灯珠
      000626 7F 00            [12] 1492 	mov	r7,#0x00
      000628                       1493 00117$:
                                   1494 ;	display.c:139: led_data[k * 3 + 0] = 0x00;
      000628 EF               [12] 1495 	mov	a,r7
      000629 75 F0 03         [24] 1496 	mov	b,#0x03
      00062C A4               [48] 1497 	mul	ab
      00062D FE               [12] 1498 	mov	r6,a
      00062E 24 00            [12] 1499 	add	a,#_led_data
      000630 F5 82            [12] 1500 	mov	dpl,a
      000632 E4               [12] 1501 	clr	a
      000633 34 00            [12] 1502 	addc	a,#(_led_data >> 8)
      000635 F5 83            [12] 1503 	mov	dph,a
      000637 E4               [12] 1504 	clr	a
      000638 F0               [24] 1505 	movx	@dptr,a
                                   1506 ;	display.c:140: led_data[k * 3 + 1] = 0x00;
      000639 EE               [12] 1507 	mov	a,r6
      00063A 04               [12] 1508 	inc	a
      00063B 24 00            [12] 1509 	add	a,#_led_data
      00063D F5 82            [12] 1510 	mov	dpl,a
      00063F E4               [12] 1511 	clr	a
      000640 34 00            [12] 1512 	addc	a,#(_led_data >> 8)
      000642 F5 83            [12] 1513 	mov	dph,a
      000644 E4               [12] 1514 	clr	a
      000645 F0               [24] 1515 	movx	@dptr,a
                                   1516 ;	display.c:141: led_data[k * 3 + 2] = 0x00;
      000646 74 02            [12] 1517 	mov	a,#0x02
      000648 2E               [12] 1518 	add	a,r6
      000649 24 00            [12] 1519 	add	a,#_led_data
      00064B F5 82            [12] 1520 	mov	dpl,a
      00064D E4               [12] 1521 	clr	a
      00064E 34 00            [12] 1522 	addc	a,#(_led_data >> 8)
      000650 F5 83            [12] 1523 	mov	dph,a
      000652 E4               [12] 1524 	clr	a
      000653 F0               [24] 1525 	movx	@dptr,a
                                   1526 ;	display.c:137: for (k = 0; k < 16; k++)//熄灭灯珠
      000654 0F               [12] 1527 	inc	r7
      000655 BF 10 00         [24] 1528 	cjne	r7,#0x10,00155$
      000658                       1529 00155$:
      000658 40 CE            [24] 1530 	jc	00117$
                                   1531 ;	display.c:143: bitbangWs2812(LED_COUNT, led_data);
      00065A 75 1B 00         [24] 1532 	mov	_bitbangWs2812_PARM_2,#_led_data
      00065D 75 1C 00         [24] 1533 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      000660 75 82 10         [24] 1534 	mov	dpl,#0x10
      000663 02 00 EB         [24] 1535 	ljmp	_bitbangWs2812
                                   1536 ;------------------------------------------------------------
                                   1537 ;Allocation info for local variables in function 'WheelImage'
                                   1538 ;------------------------------------------------------------
                                   1539 ;WheelPos                  Allocated with name '_WheelImage_PARM_2'
                                   1540 ;i                         Allocated to registers r6 r7 
                                   1541 ;------------------------------------------------------------
                                   1542 ;	display.c:145: void WheelImage(uint16_t i, uint16_t WheelPos) {
                                   1543 ;	-----------------------------------------
                                   1544 ;	 function WheelImage
                                   1545 ;	-----------------------------------------
      000666                       1546 _WheelImage:
      000666 AE 82            [24] 1547 	mov	r6,dpl
      000668 AF 83            [24] 1548 	mov	r7,dph
                                   1549 ;	display.c:146: if (WheelPos < 85) 
      00066A C3               [12] 1550 	clr	c
      00066B E5 1B            [12] 1551 	mov	a,_WheelImage_PARM_2
      00066D 94 55            [12] 1552 	subb	a,#0x55
      00066F E5 1C            [12] 1553 	mov	a,(_WheelImage_PARM_2 + 1)
      000671 94 00            [12] 1554 	subb	a,#0x00
      000673 50 38            [24] 1555 	jnc	00105$
                                   1556 ;	display.c:148: led_data[3 * i + 0] = WheelPos * 3;
      000675 8E 05            [24] 1557 	mov	ar5,r6
      000677 ED               [12] 1558 	mov	a,r5
      000678 75 F0 03         [24] 1559 	mov	b,#0x03
      00067B A4               [48] 1560 	mul	ab
      00067C FD               [12] 1561 	mov	r5,a
      00067D 24 00            [12] 1562 	add	a,#_led_data
      00067F F5 82            [12] 1563 	mov	dpl,a
      000681 E4               [12] 1564 	clr	a
      000682 34 00            [12] 1565 	addc	a,#(_led_data >> 8)
      000684 F5 83            [12] 1566 	mov	dph,a
      000686 E5 1B            [12] 1567 	mov	a,_WheelImage_PARM_2
      000688 75 F0 03         [24] 1568 	mov	b,#0x03
      00068B A4               [48] 1569 	mul	ab
      00068C FC               [12] 1570 	mov	r4,a
      00068D F0               [24] 1571 	movx	@dptr,a
                                   1572 ;	display.c:149: led_data[3 * i + 1] = 255-WheelPos * 3;
      00068E ED               [12] 1573 	mov	a,r5
      00068F 04               [12] 1574 	inc	a
      000690 24 00            [12] 1575 	add	a,#_led_data
      000692 F5 82            [12] 1576 	mov	dpl,a
      000694 E4               [12] 1577 	clr	a
      000695 34 00            [12] 1578 	addc	a,#(_led_data >> 8)
      000697 F5 83            [12] 1579 	mov	dph,a
      000699 74 FF            [12] 1580 	mov	a,#0xff
      00069B C3               [12] 1581 	clr	c
      00069C 9C               [12] 1582 	subb	a,r4
      00069D F0               [24] 1583 	movx	@dptr,a
                                   1584 ;	display.c:150: led_data[3 * i + 2] = 0x00;
      00069E 74 02            [12] 1585 	mov	a,#0x02
      0006A0 2D               [12] 1586 	add	a,r5
      0006A1 24 00            [12] 1587 	add	a,#_led_data
      0006A3 F5 82            [12] 1588 	mov	dpl,a
      0006A5 E4               [12] 1589 	clr	a
      0006A6 34 00            [12] 1590 	addc	a,#(_led_data >> 8)
      0006A8 F5 83            [12] 1591 	mov	dph,a
      0006AA E4               [12] 1592 	clr	a
      0006AB F0               [24] 1593 	movx	@dptr,a
      0006AC 22               [24] 1594 	ret
      0006AD                       1595 00105$:
                                   1596 ;	display.c:151: }else if(WheelPos < 170) { // 若85<=x<170,x=x-85，颜色设置为(255-3x,0,3x)
      0006AD C3               [12] 1597 	clr	c
      0006AE E5 1B            [12] 1598 	mov	a,_WheelImage_PARM_2
      0006B0 94 AA            [12] 1599 	subb	a,#0xaa
      0006B2 E5 1C            [12] 1600 	mov	a,(_WheelImage_PARM_2 + 1)
      0006B4 94 00            [12] 1601 	subb	a,#0x00
      0006B6 50 45            [24] 1602 	jnc	00102$
                                   1603 ;	display.c:152: WheelPos -= 85;
      0006B8 E5 1B            [12] 1604 	mov	a,_WheelImage_PARM_2
      0006BA 24 AB            [12] 1605 	add	a,#0xab
      0006BC F5 1B            [12] 1606 	mov	_WheelImage_PARM_2,a
      0006BE E5 1C            [12] 1607 	mov	a,(_WheelImage_PARM_2 + 1)
      0006C0 34 FF            [12] 1608 	addc	a,#0xff
      0006C2 F5 1C            [12] 1609 	mov	(_WheelImage_PARM_2 + 1),a
                                   1610 ;	display.c:153: led_data[3 * i + 0] = 255-WheelPos * 3;
      0006C4 8E 05            [24] 1611 	mov	ar5,r6
      0006C6 ED               [12] 1612 	mov	a,r5
      0006C7 75 F0 03         [24] 1613 	mov	b,#0x03
      0006CA A4               [48] 1614 	mul	ab
      0006CB FD               [12] 1615 	mov	r5,a
      0006CC 24 00            [12] 1616 	add	a,#_led_data
      0006CE F5 82            [12] 1617 	mov	dpl,a
      0006D0 E4               [12] 1618 	clr	a
      0006D1 34 00            [12] 1619 	addc	a,#(_led_data >> 8)
      0006D3 F5 83            [12] 1620 	mov	dph,a
      0006D5 E5 1B            [12] 1621 	mov	a,_WheelImage_PARM_2
      0006D7 75 F0 03         [24] 1622 	mov	b,#0x03
      0006DA A4               [48] 1623 	mul	ab
      0006DB FC               [12] 1624 	mov	r4,a
      0006DC 74 FF            [12] 1625 	mov	a,#0xff
      0006DE C3               [12] 1626 	clr	c
      0006DF 9C               [12] 1627 	subb	a,r4
      0006E0 F0               [24] 1628 	movx	@dptr,a
                                   1629 ;	display.c:154: led_data[3 * i + 1] = 0x00;
      0006E1 ED               [12] 1630 	mov	a,r5
      0006E2 04               [12] 1631 	inc	a
      0006E3 24 00            [12] 1632 	add	a,#_led_data
      0006E5 F5 82            [12] 1633 	mov	dpl,a
      0006E7 E4               [12] 1634 	clr	a
      0006E8 34 00            [12] 1635 	addc	a,#(_led_data >> 8)
      0006EA F5 83            [12] 1636 	mov	dph,a
      0006EC E4               [12] 1637 	clr	a
      0006ED F0               [24] 1638 	movx	@dptr,a
                                   1639 ;	display.c:155: led_data[3 * i + 2] = WheelPos * 3;
      0006EE 74 02            [12] 1640 	mov	a,#0x02
      0006F0 2D               [12] 1641 	add	a,r5
      0006F1 24 00            [12] 1642 	add	a,#_led_data
      0006F3 F5 82            [12] 1643 	mov	dpl,a
      0006F5 E4               [12] 1644 	clr	a
      0006F6 34 00            [12] 1645 	addc	a,#(_led_data >> 8)
      0006F8 F5 83            [12] 1646 	mov	dph,a
      0006FA EC               [12] 1647 	mov	a,r4
      0006FB F0               [24] 1648 	movx	@dptr,a
      0006FC 22               [24] 1649 	ret
      0006FD                       1650 00102$:
                                   1651 ;	display.c:157: WheelPos -= 170;
      0006FD E5 1B            [12] 1652 	mov	a,_WheelImage_PARM_2
      0006FF 24 56            [12] 1653 	add	a,#0x56
      000701 F5 1B            [12] 1654 	mov	_WheelImage_PARM_2,a
      000703 E5 1C            [12] 1655 	mov	a,(_WheelImage_PARM_2 + 1)
      000705 34 FF            [12] 1656 	addc	a,#0xff
      000707 F5 1C            [12] 1657 	mov	(_WheelImage_PARM_2 + 1),a
                                   1658 ;	display.c:158: led_data[3 * i + 0] = 0x00;
      000709 EE               [12] 1659 	mov	a,r6
      00070A 75 F0 03         [24] 1660 	mov	b,#0x03
      00070D A4               [48] 1661 	mul	ab
      00070E FE               [12] 1662 	mov	r6,a
      00070F 24 00            [12] 1663 	add	a,#_led_data
      000711 F5 82            [12] 1664 	mov	dpl,a
      000713 E4               [12] 1665 	clr	a
      000714 34 00            [12] 1666 	addc	a,#(_led_data >> 8)
      000716 F5 83            [12] 1667 	mov	dph,a
      000718 E4               [12] 1668 	clr	a
      000719 F0               [24] 1669 	movx	@dptr,a
                                   1670 ;	display.c:159: led_data[3 * i + 1] = WheelPos * 3;
      00071A EE               [12] 1671 	mov	a,r6
      00071B 04               [12] 1672 	inc	a
      00071C 24 00            [12] 1673 	add	a,#_led_data
      00071E F5 82            [12] 1674 	mov	dpl,a
      000720 E4               [12] 1675 	clr	a
      000721 34 00            [12] 1676 	addc	a,#(_led_data >> 8)
      000723 F5 83            [12] 1677 	mov	dph,a
      000725 E5 1B            [12] 1678 	mov	a,_WheelImage_PARM_2
      000727 75 F0 03         [24] 1679 	mov	b,#0x03
      00072A A4               [48] 1680 	mul	ab
      00072B FF               [12] 1681 	mov	r7,a
      00072C F0               [24] 1682 	movx	@dptr,a
                                   1683 ;	display.c:160: led_data[3 * i + 2] = 255-WheelPos * 3;
      00072D 74 02            [12] 1684 	mov	a,#0x02
      00072F 2E               [12] 1685 	add	a,r6
      000730 24 00            [12] 1686 	add	a,#_led_data
      000732 F5 82            [12] 1687 	mov	dpl,a
      000734 E4               [12] 1688 	clr	a
      000735 34 00            [12] 1689 	addc	a,#(_led_data >> 8)
      000737 F5 83            [12] 1690 	mov	dph,a
      000739 74 FF            [12] 1691 	mov	a,#0xff
      00073B C3               [12] 1692 	clr	c
      00073C 9F               [12] 1693 	subb	a,r7
      00073D F0               [24] 1694 	movx	@dptr,a
      00073E 22               [24] 1695 	ret
                                   1696 ;------------------------------------------------------------
                                   1697 ;Allocation info for local variables in function 'wheel'
                                   1698 ;------------------------------------------------------------
                                   1699 ;brightness                Allocated with name '_wheel_PARM_2'
                                   1700 ;data                      Allocated with name '_wheel_PARM_3'
                                   1701 ;wheel_pos                 Allocated to registers r6 r7 
                                   1702 ;index                     Allocated to registers r5 
                                   1703 ;color                     Allocated to registers r6 
                                   1704 ;------------------------------------------------------------
                                   1705 ;	display.c:164: void wheel(uint16_t wheel_pos, uint8_t brightness, uint8_t *data)
                                   1706 ;	-----------------------------------------
                                   1707 ;	 function wheel
                                   1708 ;	-----------------------------------------
      00073F                       1709 _wheel:
      00073F AE 82            [24] 1710 	mov	r6,dpl
      000741 AF 83            [24] 1711 	mov	r7,dph
                                   1712 ;	display.c:166: uint8_t index = (wheel_pos >> 8) & 0xff;
      000743 8F 05            [24] 1713 	mov	ar5,r7
                                   1714 ;	display.c:167: uint8_t color = wheel_pos & brightness;
      000745 AB 1B            [24] 1715 	mov	r3,_wheel_PARM_2
      000747 7C 00            [12] 1716 	mov	r4,#0x00
      000749 EB               [12] 1717 	mov	a,r3
      00074A 52 06            [12] 1718 	anl	ar6,a
      00074C EC               [12] 1719 	mov	a,r4
      00074D 52 07            [12] 1720 	anl	ar7,a
                                   1721 ;	display.c:168: switch (index % 3)
      00074F 75 F0 03         [24] 1722 	mov	b,#0x03
      000752 ED               [12] 1723 	mov	a,r5
      000753 84               [48] 1724 	div	ab
      000754 AF F0            [24] 1725 	mov	r7,b
      000756 BF 00 02         [24] 1726 	cjne	r7,#0x00,00117$
      000759 80 0C            [24] 1727 	sjmp	00101$
      00075B                       1728 00117$:
      00075B BF 01 02         [24] 1729 	cjne	r7,#0x01,00118$
      00075E 80 3E            [24] 1730 	sjmp	00102$
      000760                       1731 00118$:
      000760 BF 02 03         [24] 1732 	cjne	r7,#0x02,00119$
      000763 02 07 D5         [24] 1733 	ljmp	00103$
      000766                       1734 00119$:
      000766 22               [24] 1735 	ret
                                   1736 ;	display.c:170: case 0:
      000767                       1737 00101$:
                                   1738 ;	display.c:171: data[0] = color;
      000767 AC 1C            [24] 1739 	mov	r4,_wheel_PARM_3
      000769 AD 1D            [24] 1740 	mov	r5,(_wheel_PARM_3 + 1)
      00076B AF 1E            [24] 1741 	mov	r7,(_wheel_PARM_3 + 2)
      00076D 8C 82            [24] 1742 	mov	dpl,r4
      00076F 8D 83            [24] 1743 	mov	dph,r5
      000771 8F F0            [24] 1744 	mov	b,r7
      000773 EE               [12] 1745 	mov	a,r6
      000774 12 0C E5         [24] 1746 	lcall	__gptrput
                                   1747 ;	display.c:172: data[1] = brightness - color;
      000777 74 01            [12] 1748 	mov	a,#0x01
      000779 2C               [12] 1749 	add	a,r4
      00077A F9               [12] 1750 	mov	r1,a
      00077B E4               [12] 1751 	clr	a
      00077C 3D               [12] 1752 	addc	a,r5
      00077D FA               [12] 1753 	mov	r2,a
      00077E 8F 03            [24] 1754 	mov	ar3,r7
      000780 E5 1B            [12] 1755 	mov	a,_wheel_PARM_2
      000782 C3               [12] 1756 	clr	c
      000783 9E               [12] 1757 	subb	a,r6
      000784 89 82            [24] 1758 	mov	dpl,r1
      000786 8A 83            [24] 1759 	mov	dph,r2
      000788 8B F0            [24] 1760 	mov	b,r3
      00078A 12 0C E5         [24] 1761 	lcall	__gptrput
                                   1762 ;	display.c:173: data[2] = 0;
      00078D 74 02            [12] 1763 	mov	a,#0x02
      00078F 2C               [12] 1764 	add	a,r4
      000790 FC               [12] 1765 	mov	r4,a
      000791 E4               [12] 1766 	clr	a
      000792 3D               [12] 1767 	addc	a,r5
      000793 FD               [12] 1768 	mov	r5,a
      000794 8C 82            [24] 1769 	mov	dpl,r4
      000796 8D 83            [24] 1770 	mov	dph,r5
      000798 8F F0            [24] 1771 	mov	b,r7
      00079A E4               [12] 1772 	clr	a
                                   1773 ;	display.c:174: break;
                                   1774 ;	display.c:175: case 1:
      00079B 02 0C E5         [24] 1775 	ljmp	__gptrput
      00079E                       1776 00102$:
                                   1777 ;	display.c:176: data[0] = brightness - color;
      00079E AC 1C            [24] 1778 	mov	r4,_wheel_PARM_3
      0007A0 AD 1D            [24] 1779 	mov	r5,(_wheel_PARM_3 + 1)
      0007A2 AF 1E            [24] 1780 	mov	r7,(_wheel_PARM_3 + 2)
      0007A4 E5 1B            [12] 1781 	mov	a,_wheel_PARM_2
      0007A6 C3               [12] 1782 	clr	c
      0007A7 9E               [12] 1783 	subb	a,r6
      0007A8 8C 82            [24] 1784 	mov	dpl,r4
      0007AA 8D 83            [24] 1785 	mov	dph,r5
      0007AC 8F F0            [24] 1786 	mov	b,r7
      0007AE 12 0C E5         [24] 1787 	lcall	__gptrput
                                   1788 ;	display.c:177: data[1] = 0;
      0007B1 74 01            [12] 1789 	mov	a,#0x01
      0007B3 2C               [12] 1790 	add	a,r4
      0007B4 F9               [12] 1791 	mov	r1,a
      0007B5 E4               [12] 1792 	clr	a
      0007B6 3D               [12] 1793 	addc	a,r5
      0007B7 FA               [12] 1794 	mov	r2,a
      0007B8 8F 03            [24] 1795 	mov	ar3,r7
      0007BA 89 82            [24] 1796 	mov	dpl,r1
      0007BC 8A 83            [24] 1797 	mov	dph,r2
      0007BE 8B F0            [24] 1798 	mov	b,r3
      0007C0 E4               [12] 1799 	clr	a
      0007C1 12 0C E5         [24] 1800 	lcall	__gptrput
                                   1801 ;	display.c:178: data[2] = color;
      0007C4 74 02            [12] 1802 	mov	a,#0x02
      0007C6 2C               [12] 1803 	add	a,r4
      0007C7 FC               [12] 1804 	mov	r4,a
      0007C8 E4               [12] 1805 	clr	a
      0007C9 3D               [12] 1806 	addc	a,r5
      0007CA FD               [12] 1807 	mov	r5,a
      0007CB 8C 82            [24] 1808 	mov	dpl,r4
      0007CD 8D 83            [24] 1809 	mov	dph,r5
      0007CF 8F F0            [24] 1810 	mov	b,r7
      0007D1 EE               [12] 1811 	mov	a,r6
                                   1812 ;	display.c:179: break;
                                   1813 ;	display.c:180: case 2:
      0007D2 02 0C E5         [24] 1814 	ljmp	__gptrput
      0007D5                       1815 00103$:
                                   1816 ;	display.c:181: data[0] = 0;
      0007D5 AC 1C            [24] 1817 	mov	r4,_wheel_PARM_3
      0007D7 AD 1D            [24] 1818 	mov	r5,(_wheel_PARM_3 + 1)
      0007D9 AF 1E            [24] 1819 	mov	r7,(_wheel_PARM_3 + 2)
      0007DB 8C 82            [24] 1820 	mov	dpl,r4
      0007DD 8D 83            [24] 1821 	mov	dph,r5
      0007DF 8F F0            [24] 1822 	mov	b,r7
      0007E1 E4               [12] 1823 	clr	a
      0007E2 12 0C E5         [24] 1824 	lcall	__gptrput
                                   1825 ;	display.c:182: data[1] = color;
      0007E5 04               [12] 1826 	inc	a
      0007E6 2C               [12] 1827 	add	a,r4
      0007E7 F9               [12] 1828 	mov	r1,a
      0007E8 E4               [12] 1829 	clr	a
      0007E9 3D               [12] 1830 	addc	a,r5
      0007EA FA               [12] 1831 	mov	r2,a
      0007EB 8F 03            [24] 1832 	mov	ar3,r7
      0007ED 89 82            [24] 1833 	mov	dpl,r1
      0007EF 8A 83            [24] 1834 	mov	dph,r2
      0007F1 8B F0            [24] 1835 	mov	b,r3
      0007F3 EE               [12] 1836 	mov	a,r6
      0007F4 12 0C E5         [24] 1837 	lcall	__gptrput
                                   1838 ;	display.c:183: data[2] = brightness - color;
      0007F7 74 02            [12] 1839 	mov	a,#0x02
      0007F9 2C               [12] 1840 	add	a,r4
      0007FA FC               [12] 1841 	mov	r4,a
      0007FB E4               [12] 1842 	clr	a
      0007FC 3D               [12] 1843 	addc	a,r5
      0007FD FD               [12] 1844 	mov	r5,a
      0007FE E5 1B            [12] 1845 	mov	a,_wheel_PARM_2
      000800 C3               [12] 1846 	clr	c
      000801 9E               [12] 1847 	subb	a,r6
      000802 8C 82            [24] 1848 	mov	dpl,r4
      000804 8D 83            [24] 1849 	mov	dph,r5
      000806 8F F0            [24] 1850 	mov	b,r7
                                   1851 ;	display.c:187: }
      000808 02 0C E5         [24] 1852 	ljmp	__gptrput
                                   1853 ;------------------------------------------------------------
                                   1854 ;Allocation info for local variables in function 'pallette'
                                   1855 ;------------------------------------------------------------
                                   1856 ;i                         Allocated with name '_pallette_i_1_46'
                                   1857 ;mark                      Allocated with name '_pallette_mark_1_46'
                                   1858 ;WheelPos                  Allocated to registers r5 
                                   1859 ;------------------------------------------------------------
                                   1860 ;	display.c:189: void pallette()
                                   1861 ;	-----------------------------------------
                                   1862 ;	 function pallette
                                   1863 ;	-----------------------------------------
      00080B                       1864 _pallette:
                                   1865 ;	display.c:195: mDelaymS(200);
      00080B 90 00 C8         [24] 1866 	mov	dptr,#0x00c8
      00080E 12 0A EE         [24] 1867 	lcall	_mDelaymS
                                   1868 ;	display.c:196: for (i = 0; i < LED_COUNT; i++)//红色流动
      000811 7F 00            [12] 1869 	mov	r7,#0x00
      000813                       1870 00116$:
                                   1871 ;	display.c:198: led_data[3 * i + 0] = 0x0f;
      000813 EF               [12] 1872 	mov	a,r7
      000814 75 F0 03         [24] 1873 	mov	b,#0x03
      000817 A4               [48] 1874 	mul	ab
      000818 FE               [12] 1875 	mov	r6,a
      000819 24 00            [12] 1876 	add	a,#_led_data
      00081B F5 82            [12] 1877 	mov	dpl,a
      00081D E4               [12] 1878 	clr	a
      00081E 34 00            [12] 1879 	addc	a,#(_led_data >> 8)
      000820 F5 83            [12] 1880 	mov	dph,a
      000822 74 0F            [12] 1881 	mov	a,#0x0f
      000824 F0               [24] 1882 	movx	@dptr,a
                                   1883 ;	display.c:199: led_data[3 * i + 1] = 0x00;
      000825 EE               [12] 1884 	mov	a,r6
      000826 04               [12] 1885 	inc	a
      000827 24 00            [12] 1886 	add	a,#_led_data
      000829 F5 82            [12] 1887 	mov	dpl,a
      00082B E4               [12] 1888 	clr	a
      00082C 34 00            [12] 1889 	addc	a,#(_led_data >> 8)
      00082E F5 83            [12] 1890 	mov	dph,a
      000830 E4               [12] 1891 	clr	a
      000831 F0               [24] 1892 	movx	@dptr,a
                                   1893 ;	display.c:200: led_data[3 * i + 2] = 0x00;
      000832 74 02            [12] 1894 	mov	a,#0x02
      000834 2E               [12] 1895 	add	a,r6
      000835 24 00            [12] 1896 	add	a,#_led_data
      000837 F5 82            [12] 1897 	mov	dpl,a
      000839 E4               [12] 1898 	clr	a
      00083A 34 00            [12] 1899 	addc	a,#(_led_data >> 8)
      00083C F5 83            [12] 1900 	mov	dph,a
      00083E E4               [12] 1901 	clr	a
      00083F F0               [24] 1902 	movx	@dptr,a
                                   1903 ;	display.c:201: bitbangWs2812(LED_COUNT, led_data);
      000840 75 1B 00         [24] 1904 	mov	_bitbangWs2812_PARM_2,#_led_data
      000843 75 1C 00         [24] 1905 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      000846 75 82 10         [24] 1906 	mov	dpl,#0x10
      000849 C0 07            [24] 1907 	push	ar7
      00084B 12 00 EB         [24] 1908 	lcall	_bitbangWs2812
                                   1909 ;	display.c:202: mDelaymS(20);
      00084E 90 00 14         [24] 1910 	mov	dptr,#0x0014
      000851 12 0A EE         [24] 1911 	lcall	_mDelaymS
      000854 D0 07            [24] 1912 	pop	ar7
                                   1913 ;	display.c:196: for (i = 0; i < LED_COUNT; i++)//红色流动
      000856 0F               [12] 1914 	inc	r7
      000857 BF 10 00         [24] 1915 	cjne	r7,#0x10,00163$
      00085A                       1916 00163$:
      00085A 40 B7            [24] 1917 	jc	00116$
                                   1918 ;	display.c:205: for (i = 0; i < LED_COUNT; i++)//绿色流动
      00085C 7F 00            [12] 1919 	mov	r7,#0x00
      00085E                       1920 00118$:
                                   1921 ;	display.c:207: led_data[3 * i + 0] = 0x00;
      00085E EF               [12] 1922 	mov	a,r7
      00085F 75 F0 03         [24] 1923 	mov	b,#0x03
      000862 A4               [48] 1924 	mul	ab
      000863 FE               [12] 1925 	mov	r6,a
      000864 24 00            [12] 1926 	add	a,#_led_data
      000866 F5 82            [12] 1927 	mov	dpl,a
      000868 E4               [12] 1928 	clr	a
      000869 34 00            [12] 1929 	addc	a,#(_led_data >> 8)
      00086B F5 83            [12] 1930 	mov	dph,a
      00086D E4               [12] 1931 	clr	a
      00086E F0               [24] 1932 	movx	@dptr,a
                                   1933 ;	display.c:208: led_data[3 * i + 1] = 0x0f;
      00086F EE               [12] 1934 	mov	a,r6
      000870 04               [12] 1935 	inc	a
      000871 24 00            [12] 1936 	add	a,#_led_data
      000873 F5 82            [12] 1937 	mov	dpl,a
      000875 E4               [12] 1938 	clr	a
      000876 34 00            [12] 1939 	addc	a,#(_led_data >> 8)
      000878 F5 83            [12] 1940 	mov	dph,a
      00087A 74 0F            [12] 1941 	mov	a,#0x0f
      00087C F0               [24] 1942 	movx	@dptr,a
                                   1943 ;	display.c:209: led_data[3 * i + 2] = 0x00;
      00087D 74 02            [12] 1944 	mov	a,#0x02
      00087F 2E               [12] 1945 	add	a,r6
      000880 24 00            [12] 1946 	add	a,#_led_data
      000882 F5 82            [12] 1947 	mov	dpl,a
      000884 E4               [12] 1948 	clr	a
      000885 34 00            [12] 1949 	addc	a,#(_led_data >> 8)
      000887 F5 83            [12] 1950 	mov	dph,a
      000889 E4               [12] 1951 	clr	a
      00088A F0               [24] 1952 	movx	@dptr,a
                                   1953 ;	display.c:210: bitbangWs2812(LED_COUNT, led_data);
      00088B 75 1B 00         [24] 1954 	mov	_bitbangWs2812_PARM_2,#_led_data
      00088E 75 1C 00         [24] 1955 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      000891 75 82 10         [24] 1956 	mov	dpl,#0x10
      000894 C0 07            [24] 1957 	push	ar7
      000896 12 00 EB         [24] 1958 	lcall	_bitbangWs2812
                                   1959 ;	display.c:211: mDelaymS(20);
      000899 90 00 14         [24] 1960 	mov	dptr,#0x0014
      00089C 12 0A EE         [24] 1961 	lcall	_mDelaymS
      00089F D0 07            [24] 1962 	pop	ar7
                                   1963 ;	display.c:205: for (i = 0; i < LED_COUNT; i++)//绿色流动
      0008A1 0F               [12] 1964 	inc	r7
      0008A2 BF 10 00         [24] 1965 	cjne	r7,#0x10,00165$
      0008A5                       1966 00165$:
      0008A5 40 B7            [24] 1967 	jc	00118$
                                   1968 ;	display.c:213: for (i = 0; i < LED_COUNT; i++)//黄色流动
      0008A7 7F 00            [12] 1969 	mov	r7,#0x00
      0008A9                       1970 00120$:
                                   1971 ;	display.c:215: led_data[3 * i + 0] = 0x00;
      0008A9 EF               [12] 1972 	mov	a,r7
      0008AA 75 F0 03         [24] 1973 	mov	b,#0x03
      0008AD A4               [48] 1974 	mul	ab
      0008AE FE               [12] 1975 	mov	r6,a
      0008AF 24 00            [12] 1976 	add	a,#_led_data
      0008B1 F5 82            [12] 1977 	mov	dpl,a
      0008B3 E4               [12] 1978 	clr	a
      0008B4 34 00            [12] 1979 	addc	a,#(_led_data >> 8)
      0008B6 F5 83            [12] 1980 	mov	dph,a
      0008B8 E4               [12] 1981 	clr	a
      0008B9 F0               [24] 1982 	movx	@dptr,a
                                   1983 ;	display.c:216: led_data[3 * i + 1] = 0x00;
      0008BA EE               [12] 1984 	mov	a,r6
      0008BB 04               [12] 1985 	inc	a
      0008BC 24 00            [12] 1986 	add	a,#_led_data
      0008BE F5 82            [12] 1987 	mov	dpl,a
      0008C0 E4               [12] 1988 	clr	a
      0008C1 34 00            [12] 1989 	addc	a,#(_led_data >> 8)
      0008C3 F5 83            [12] 1990 	mov	dph,a
      0008C5 E4               [12] 1991 	clr	a
      0008C6 F0               [24] 1992 	movx	@dptr,a
                                   1993 ;	display.c:217: led_data[3 * i + 2] = 0x0f;
      0008C7 74 02            [12] 1994 	mov	a,#0x02
      0008C9 2E               [12] 1995 	add	a,r6
      0008CA 24 00            [12] 1996 	add	a,#_led_data
      0008CC F5 82            [12] 1997 	mov	dpl,a
      0008CE E4               [12] 1998 	clr	a
      0008CF 34 00            [12] 1999 	addc	a,#(_led_data >> 8)
      0008D1 F5 83            [12] 2000 	mov	dph,a
      0008D3 74 0F            [12] 2001 	mov	a,#0x0f
      0008D5 F0               [24] 2002 	movx	@dptr,a
                                   2003 ;	display.c:218: bitbangWs2812(LED_COUNT, led_data);
      0008D6 75 1B 00         [24] 2004 	mov	_bitbangWs2812_PARM_2,#_led_data
      0008D9 75 1C 00         [24] 2005 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      0008DC 75 82 10         [24] 2006 	mov	dpl,#0x10
      0008DF C0 07            [24] 2007 	push	ar7
      0008E1 12 00 EB         [24] 2008 	lcall	_bitbangWs2812
                                   2009 ;	display.c:219: mDelaymS(20);
      0008E4 90 00 14         [24] 2010 	mov	dptr,#0x0014
      0008E7 12 0A EE         [24] 2011 	lcall	_mDelaymS
      0008EA D0 07            [24] 2012 	pop	ar7
                                   2013 ;	display.c:213: for (i = 0; i < LED_COUNT; i++)//黄色流动
      0008EC 0F               [12] 2014 	inc	r7
      0008ED BF 10 00         [24] 2015 	cjne	r7,#0x10,00167$
      0008F0                       2016 00167$:
      0008F0 40 B7            [24] 2017 	jc	00120$
                                   2018 ;	display.c:221: while(1){//彩虹色流动
      0008F2 7F 00            [12] 2019 	mov	r7,#0x00
                                   2020 ;	display.c:222: for(i=0; i< LED_COUNT; i++) {
      0008F4                       2021 00133$:
      0008F4 75 14 00         [24] 2022 	mov	_pallette_i_1_46,#0x00
      0008F7                       2023 00122$:
                                   2024 ;	display.c:223: WheelPos = ((i * 16) + mark) & 255;
      0008F7 E5 14            [12] 2025 	mov	a,_pallette_i_1_46
      0008F9 C4               [12] 2026 	swap	a
      0008FA 54 F0            [12] 2027 	anl	a,#0xf0
      0008FC 2F               [12] 2028 	add	a,r7
      0008FD FD               [12] 2029 	mov	r5,a
                                   2030 ;	display.c:224: if (WheelPos < 85) 
      0008FE BD 55 00         [24] 2031 	cjne	r5,#0x55,00169$
      000901                       2032 00169$:
      000901 40 03            [24] 2033 	jc	00170$
      000903 02 09 8C         [24] 2034 	ljmp	00108$
      000906                       2035 00170$:
                                   2036 ;	display.c:226: led_data[3 * i + 0] = (WheelPos * 3)/5;
      000906 C0 07            [24] 2037 	push	ar7
      000908 E5 14            [12] 2038 	mov	a,_pallette_i_1_46
      00090A 75 F0 03         [24] 2039 	mov	b,#0x03
      00090D A4               [48] 2040 	mul	ab
      00090E FC               [12] 2041 	mov	r4,a
      00090F 24 00            [12] 2042 	add	a,#_led_data
      000911 FA               [12] 2043 	mov	r2,a
      000912 E4               [12] 2044 	clr	a
      000913 34 00            [12] 2045 	addc	a,#(_led_data >> 8)
      000915 FB               [12] 2046 	mov	r3,a
      000916 ED               [12] 2047 	mov	a,r5
      000917 75 F0 03         [24] 2048 	mov	b,#0x03
      00091A A4               [48] 2049 	mul	ab
      00091B F8               [12] 2050 	mov	r0,a
      00091C A9 F0            [24] 2051 	mov	r1,b
      00091E 75 1B 05         [24] 2052 	mov	__divsint_PARM_2,#0x05
      000921 75 1C 00         [24] 2053 	mov	(__divsint_PARM_2 + 1),#0x00
      000924 88 82            [24] 2054 	mov	dpl,r0
      000926 89 83            [24] 2055 	mov	dph,r1
      000928 C0 04            [24] 2056 	push	ar4
      00092A C0 03            [24] 2057 	push	ar3
      00092C C0 02            [24] 2058 	push	ar2
      00092E C0 01            [24] 2059 	push	ar1
      000930 C0 00            [24] 2060 	push	ar0
      000932 12 0D C9         [24] 2061 	lcall	__divsint
      000935 AE 82            [24] 2062 	mov	r6,dpl
      000937 D0 00            [24] 2063 	pop	ar0
      000939 D0 01            [24] 2064 	pop	ar1
      00093B D0 02            [24] 2065 	pop	ar2
      00093D D0 03            [24] 2066 	pop	ar3
      00093F D0 04            [24] 2067 	pop	ar4
      000941 8A 82            [24] 2068 	mov	dpl,r2
      000943 8B 83            [24] 2069 	mov	dph,r3
      000945 EE               [12] 2070 	mov	a,r6
      000946 F0               [24] 2071 	movx	@dptr,a
                                   2072 ;	display.c:227: led_data[3 * i + 1] = (255-WheelPos * 3)/5;
      000947 EC               [12] 2073 	mov	a,r4
      000948 04               [12] 2074 	inc	a
      000949 24 00            [12] 2075 	add	a,#_led_data
      00094B FE               [12] 2076 	mov	r6,a
      00094C E4               [12] 2077 	clr	a
      00094D 34 00            [12] 2078 	addc	a,#(_led_data >> 8)
      00094F FF               [12] 2079 	mov	r7,a
      000950 74 FF            [12] 2080 	mov	a,#0xff
      000952 C3               [12] 2081 	clr	c
      000953 98               [12] 2082 	subb	a,r0
      000954 F5 82            [12] 2083 	mov	dpl,a
      000956 E4               [12] 2084 	clr	a
      000957 99               [12] 2085 	subb	a,r1
      000958 F5 83            [12] 2086 	mov	dph,a
      00095A 75 1B 05         [24] 2087 	mov	__divsint_PARM_2,#0x05
      00095D 75 1C 00         [24] 2088 	mov	(__divsint_PARM_2 + 1),#0x00
      000960 C0 07            [24] 2089 	push	ar7
      000962 C0 06            [24] 2090 	push	ar6
      000964 C0 04            [24] 2091 	push	ar4
      000966 12 0D C9         [24] 2092 	lcall	__divsint
      000969 AA 82            [24] 2093 	mov	r2,dpl
      00096B AB 83            [24] 2094 	mov	r3,dph
      00096D D0 04            [24] 2095 	pop	ar4
      00096F D0 06            [24] 2096 	pop	ar6
      000971 D0 07            [24] 2097 	pop	ar7
      000973 8E 82            [24] 2098 	mov	dpl,r6
      000975 8F 83            [24] 2099 	mov	dph,r7
      000977 EA               [12] 2100 	mov	a,r2
      000978 F0               [24] 2101 	movx	@dptr,a
                                   2102 ;	display.c:228: led_data[3 * i + 2] = 0x00;
      000979 74 02            [12] 2103 	mov	a,#0x02
      00097B 2C               [12] 2104 	add	a,r4
      00097C 24 00            [12] 2105 	add	a,#_led_data
      00097E F5 82            [12] 2106 	mov	dpl,a
      000980 E4               [12] 2107 	clr	a
      000981 34 00            [12] 2108 	addc	a,#(_led_data >> 8)
      000983 F5 83            [12] 2109 	mov	dph,a
      000985 E4               [12] 2110 	clr	a
      000986 F0               [24] 2111 	movx	@dptr,a
      000987 D0 07            [24] 2112 	pop	ar7
      000989 02 0A 9D         [24] 2113 	ljmp	00123$
      00098C                       2114 00108$:
                                   2115 ;	display.c:229: }else if(WheelPos < 170) { // 若85<=x<170,x=x-85，颜色设置为(255-3x,0,3x)
      00098C BD AA 00         [24] 2116 	cjne	r5,#0xaa,00171$
      00098F                       2117 00171$:
      00098F 40 03            [24] 2118 	jc	00172$
      000991 02 0A 1A         [24] 2119 	ljmp	00105$
      000994                       2120 00172$:
                                   2121 ;	display.c:230: WheelPos -= 85;
      000994 C0 07            [24] 2122 	push	ar7
      000996 ED               [12] 2123 	mov	a,r5
      000997 24 AB            [12] 2124 	add	a,#0xab
      000999 FD               [12] 2125 	mov	r5,a
                                   2126 ;	display.c:231: led_data[3 * i + 0] = (255-WheelPos * 3)/5;
      00099A E5 14            [12] 2127 	mov	a,_pallette_i_1_46
      00099C 75 F0 03         [24] 2128 	mov	b,#0x03
      00099F A4               [48] 2129 	mul	ab
      0009A0 FE               [12] 2130 	mov	r6,a
      0009A1 24 00            [12] 2131 	add	a,#_led_data
      0009A3 FB               [12] 2132 	mov	r3,a
      0009A4 E4               [12] 2133 	clr	a
      0009A5 34 00            [12] 2134 	addc	a,#(_led_data >> 8)
      0009A7 FC               [12] 2135 	mov	r4,a
      0009A8 ED               [12] 2136 	mov	a,r5
      0009A9 75 F0 03         [24] 2137 	mov	b,#0x03
      0009AC A4               [48] 2138 	mul	ab
      0009AD F9               [12] 2139 	mov	r1,a
      0009AE AA F0            [24] 2140 	mov	r2,b
      0009B0 74 FF            [12] 2141 	mov	a,#0xff
      0009B2 C3               [12] 2142 	clr	c
      0009B3 99               [12] 2143 	subb	a,r1
      0009B4 F5 82            [12] 2144 	mov	dpl,a
      0009B6 E4               [12] 2145 	clr	a
      0009B7 9A               [12] 2146 	subb	a,r2
      0009B8 F5 83            [12] 2147 	mov	dph,a
      0009BA 75 1B 05         [24] 2148 	mov	__divsint_PARM_2,#0x05
      0009BD 75 1C 00         [24] 2149 	mov	(__divsint_PARM_2 + 1),#0x00
      0009C0 C0 06            [24] 2150 	push	ar6
      0009C2 C0 04            [24] 2151 	push	ar4
      0009C4 C0 03            [24] 2152 	push	ar3
      0009C6 C0 02            [24] 2153 	push	ar2
      0009C8 C0 01            [24] 2154 	push	ar1
      0009CA 12 0D C9         [24] 2155 	lcall	__divsint
      0009CD A8 82            [24] 2156 	mov	r0,dpl
      0009CF D0 01            [24] 2157 	pop	ar1
      0009D1 D0 02            [24] 2158 	pop	ar2
      0009D3 D0 03            [24] 2159 	pop	ar3
      0009D5 D0 04            [24] 2160 	pop	ar4
      0009D7 D0 06            [24] 2161 	pop	ar6
      0009D9 8B 82            [24] 2162 	mov	dpl,r3
      0009DB 8C 83            [24] 2163 	mov	dph,r4
      0009DD E8               [12] 2164 	mov	a,r0
      0009DE F0               [24] 2165 	movx	@dptr,a
                                   2166 ;	display.c:232: led_data[3 * i + 1] = 0x00;
      0009DF EE               [12] 2167 	mov	a,r6
      0009E0 04               [12] 2168 	inc	a
      0009E1 24 00            [12] 2169 	add	a,#_led_data
      0009E3 F5 82            [12] 2170 	mov	dpl,a
      0009E5 E4               [12] 2171 	clr	a
      0009E6 34 00            [12] 2172 	addc	a,#(_led_data >> 8)
      0009E8 F5 83            [12] 2173 	mov	dph,a
      0009EA E4               [12] 2174 	clr	a
      0009EB F0               [24] 2175 	movx	@dptr,a
                                   2176 ;	display.c:233: led_data[3 * i + 2] = (WheelPos * 3)/5;
      0009EC 74 02            [12] 2177 	mov	a,#0x02
      0009EE 2E               [12] 2178 	add	a,r6
      0009EF 24 00            [12] 2179 	add	a,#_led_data
      0009F1 FE               [12] 2180 	mov	r6,a
      0009F2 E4               [12] 2181 	clr	a
      0009F3 34 00            [12] 2182 	addc	a,#(_led_data >> 8)
      0009F5 FF               [12] 2183 	mov	r7,a
      0009F6 75 1B 05         [24] 2184 	mov	__divsint_PARM_2,#0x05
      0009F9 75 1C 00         [24] 2185 	mov	(__divsint_PARM_2 + 1),#0x00
      0009FC 89 82            [24] 2186 	mov	dpl,r1
      0009FE 8A 83            [24] 2187 	mov	dph,r2
      000A00 C0 07            [24] 2188 	push	ar7
      000A02 C0 06            [24] 2189 	push	ar6
      000A04 12 0D C9         [24] 2190 	lcall	__divsint
      000A07 AB 82            [24] 2191 	mov	r3,dpl
      000A09 AC 83            [24] 2192 	mov	r4,dph
      000A0B D0 06            [24] 2193 	pop	ar6
      000A0D D0 07            [24] 2194 	pop	ar7
      000A0F 8E 82            [24] 2195 	mov	dpl,r6
      000A11 8F 83            [24] 2196 	mov	dph,r7
      000A13 EB               [12] 2197 	mov	a,r3
      000A14 F0               [24] 2198 	movx	@dptr,a
      000A15 D0 07            [24] 2199 	pop	ar7
      000A17 02 0A 9D         [24] 2200 	ljmp	00123$
      000A1A                       2201 00105$:
                                   2202 ;	display.c:235: WheelPos -= 170;
      000A1A ED               [12] 2203 	mov	a,r5
      000A1B 24 56            [12] 2204 	add	a,#0x56
      000A1D FD               [12] 2205 	mov	r5,a
                                   2206 ;	display.c:236: led_data[3 * i + 0] = 0x00;
      000A1E E5 14            [12] 2207 	mov	a,_pallette_i_1_46
      000A20 75 F0 03         [24] 2208 	mov	b,#0x03
      000A23 A4               [48] 2209 	mul	ab
      000A24 FE               [12] 2210 	mov	r6,a
      000A25 24 00            [12] 2211 	add	a,#_led_data
      000A27 F5 82            [12] 2212 	mov	dpl,a
      000A29 E4               [12] 2213 	clr	a
      000A2A 34 00            [12] 2214 	addc	a,#(_led_data >> 8)
      000A2C F5 83            [12] 2215 	mov	dph,a
      000A2E E4               [12] 2216 	clr	a
      000A2F F0               [24] 2217 	movx	@dptr,a
                                   2218 ;	display.c:237: led_data[3 * i + 1] = (WheelPos * 3)/5;
      000A30 EE               [12] 2219 	mov	a,r6
      000A31 04               [12] 2220 	inc	a
      000A32 24 00            [12] 2221 	add	a,#_led_data
      000A34 FB               [12] 2222 	mov	r3,a
      000A35 E4               [12] 2223 	clr	a
      000A36 34 00            [12] 2224 	addc	a,#(_led_data >> 8)
      000A38 FC               [12] 2225 	mov	r4,a
      000A39 ED               [12] 2226 	mov	a,r5
      000A3A 75 F0 03         [24] 2227 	mov	b,#0x03
      000A3D A4               [48] 2228 	mul	ab
      000A3E FD               [12] 2229 	mov	r5,a
      000A3F AA F0            [24] 2230 	mov	r2,b
      000A41 75 1B 05         [24] 2231 	mov	__divsint_PARM_2,#0x05
      000A44 75 1C 00         [24] 2232 	mov	(__divsint_PARM_2 + 1),#0x00
      000A47 8D 82            [24] 2233 	mov	dpl,r5
      000A49 8A 83            [24] 2234 	mov	dph,r2
      000A4B C0 07            [24] 2235 	push	ar7
      000A4D C0 06            [24] 2236 	push	ar6
      000A4F C0 05            [24] 2237 	push	ar5
      000A51 C0 04            [24] 2238 	push	ar4
      000A53 C0 03            [24] 2239 	push	ar3
      000A55 C0 02            [24] 2240 	push	ar2
      000A57 12 0D C9         [24] 2241 	lcall	__divsint
      000A5A A8 82            [24] 2242 	mov	r0,dpl
      000A5C D0 02            [24] 2243 	pop	ar2
      000A5E D0 03            [24] 2244 	pop	ar3
      000A60 D0 04            [24] 2245 	pop	ar4
      000A62 D0 05            [24] 2246 	pop	ar5
      000A64 D0 06            [24] 2247 	pop	ar6
      000A66 8B 82            [24] 2248 	mov	dpl,r3
      000A68 8C 83            [24] 2249 	mov	dph,r4
      000A6A E8               [12] 2250 	mov	a,r0
      000A6B F0               [24] 2251 	movx	@dptr,a
                                   2252 ;	display.c:238: led_data[3 * i + 2] = (255-WheelPos * 3)/5;
      000A6C 74 02            [12] 2253 	mov	a,#0x02
      000A6E 2E               [12] 2254 	add	a,r6
      000A6F 24 00            [12] 2255 	add	a,#_led_data
      000A71 FC               [12] 2256 	mov	r4,a
      000A72 E4               [12] 2257 	clr	a
      000A73 34 00            [12] 2258 	addc	a,#(_led_data >> 8)
      000A75 FE               [12] 2259 	mov	r6,a
      000A76 74 FF            [12] 2260 	mov	a,#0xff
      000A78 C3               [12] 2261 	clr	c
      000A79 9D               [12] 2262 	subb	a,r5
      000A7A F5 82            [12] 2263 	mov	dpl,a
      000A7C E4               [12] 2264 	clr	a
      000A7D 9A               [12] 2265 	subb	a,r2
      000A7E F5 83            [12] 2266 	mov	dph,a
      000A80 75 1B 05         [24] 2267 	mov	__divsint_PARM_2,#0x05
      000A83 75 1C 00         [24] 2268 	mov	(__divsint_PARM_2 + 1),#0x00
      000A86 C0 06            [24] 2269 	push	ar6
      000A88 C0 04            [24] 2270 	push	ar4
      000A8A 12 0D C9         [24] 2271 	lcall	__divsint
      000A8D AB 82            [24] 2272 	mov	r3,dpl
      000A8F AD 83            [24] 2273 	mov	r5,dph
      000A91 D0 04            [24] 2274 	pop	ar4
      000A93 D0 06            [24] 2275 	pop	ar6
      000A95 D0 07            [24] 2276 	pop	ar7
      000A97 8C 82            [24] 2277 	mov	dpl,r4
      000A99 8E 83            [24] 2278 	mov	dph,r6
      000A9B EB               [12] 2279 	mov	a,r3
      000A9C F0               [24] 2280 	movx	@dptr,a
      000A9D                       2281 00123$:
                                   2282 ;	display.c:222: for(i=0; i< LED_COUNT; i++) {
      000A9D 05 14            [12] 2283 	inc	_pallette_i_1_46
      000A9F 74 F0            [12] 2284 	mov	a,#0x100 - 0x10
      000AA1 25 14            [12] 2285 	add	a,_pallette_i_1_46
      000AA3 40 03            [24] 2286 	jc	00173$
      000AA5 02 08 F7         [24] 2287 	ljmp	00122$
      000AA8                       2288 00173$:
                                   2289 ;	display.c:241: mark=mark+1;
      000AA8 0F               [12] 2290 	inc	r7
                                   2291 ;	display.c:242: bitbangWs2812(LED_COUNT, led_data);
      000AA9 75 1B 00         [24] 2292 	mov	_bitbangWs2812_PARM_2,#_led_data
      000AAC 75 1C 00         [24] 2293 	mov	(_bitbangWs2812_PARM_2 + 1),#(_led_data >> 8)
      000AAF 75 82 10         [24] 2294 	mov	dpl,#0x10
      000AB2 C0 07            [24] 2295 	push	ar7
      000AB4 12 00 EB         [24] 2296 	lcall	_bitbangWs2812
                                   2297 ;	display.c:243: mDelaymS(20);
      000AB7 90 00 14         [24] 2298 	mov	dptr,#0x0014
      000ABA 12 0A EE         [24] 2299 	lcall	_mDelaymS
      000ABD D0 07            [24] 2300 	pop	ar7
                                   2301 ;	display.c:244: if (SSW == 0)
      000ABF 30 B2 03         [24] 2302 	jnb	_SSW,00174$
      000AC2 02 08 F4         [24] 2303 	ljmp	00133$
      000AC5                       2304 00174$:
                                   2305 ;	display.c:246: break;
      000AC5 22               [24] 2306 	ret
                                   2307 	.area CSEG    (CODE)
                                   2308 	.area CONST   (CODE)
                                   2309 	.area XINIT   (CODE)
                                   2310 	.area CABS    (ABS,CODE)
