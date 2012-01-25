/* Generated by tuneup.c, 2011-11-23, gcc 4.6 */

#define MUL_KARATSUBA_THRESHOLD          27
#define MUL_TOOM3_THRESHOLD             133
#define MUL_TOOM4_THRESHOLD             202
#define MUL_TOOM8H_THRESHOLD            309

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          64
#define SQR_TOOM3_THRESHOLD             159
#define SQR_TOOM4_THRESHOLD             336
#define SQR_TOOM8_THRESHOLD             342

#define POWM_THRESHOLD                  984

#define HGCD_THRESHOLD                   73
#define GCD_DC_THRESHOLD               1460
#define GCDEXT_DC_THRESHOLD            1138
#define JACOBI_BASE_METHOD                1

#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1  /* native */
#define DIVREM_2_THRESHOLD               21
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD               978
#define MOD_1_2_THRESHOLD               978
#define MOD_1_3_THRESHOLD               978
#define DIVREM_HENSEL_QR_1_THRESHOLD      2
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      3
#define DIVREM_EUCLID_HENSEL_THRESHOLD     21

#define ROOTREM_THRESHOLD                11

#define GET_STR_DC_THRESHOLD             17
#define GET_STR_PRECOMPUTE_THRESHOLD     26
#define SET_STR_DC_THRESHOLD           9397
#define SET_STR_PRECOMPUTE_THRESHOLD  22420

#define MUL_FFT_TABLE  { 400, 1056, 1408, 3584, 10240, 57344, 98304, 655360, 2621440, 10485760, 0 }
#define MUL_FFT_MODF_THRESHOLD          368
#define MUL_FFT_FULL_THRESHOLD         1664

#define SQR_FFT_TABLE  { 432, 1056, 1664, 3584, 14336, 40960, 163840, 917504, 2621440, 10485760, 0 }
#define SQR_FFT_MODF_THRESHOLD          312
#define SQR_FFT_FULL_THRESHOLD         1920

#define MULLOW_BASECASE_THRESHOLD         7
#define MULLOW_DC_THRESHOLD              63
#define MULLOW_MUL_THRESHOLD           3539

#define MULHIGH_BASECASE_THRESHOLD        9
#define MULHIGH_DC_THRESHOLD             56
#define MULHIGH_MUL_THRESHOLD          3539

#define MULMOD_2EXPM1_THRESHOLD          18

#define FAC_UI_THRESHOLD               3500
#define DC_DIV_QR_THRESHOLD              40
#define DC_DIVAPPR_Q_N_THRESHOLD         59
#define INV_DIV_QR_THRESHOLD           2801
#define INV_DIVAPPR_Q_N_THRESHOLD        59
#define DC_DIV_Q_THRESHOLD              118
#define INV_DIV_Q_THRESHOLD            2350
#define DC_DIVAPPR_Q_THRESHOLD          110
#define INV_DIVAPPR_Q_THRESHOLD        2478
#define DC_BDIV_QR_THRESHOLD             60
#define DC_BDIV_Q_THRESHOLD              50
/* Tuneup completed successfully, took 800 seconds */

#define MUL_FFT_TABLE2 {{1, 4}, {210, 3}, {220, 4}, {236, 3}, {242, 4}, {344, 5}, {360, 4}, {377, 5}, {423, 4}, {433, 5}, {485, 4}, {507, 5}, {909, 6}, {971, 5}, {1061, 6}, {1109, 5}, {1134, 6}, {1294, 7}, {1323, 6}, {1352, 7}, {1413, 6}, {1509, 7}, {1685, 6}, {1760, 7}, {1922, 6}, {2009, 7}, {2727, 8}, {2849, 7}, {3248, 8}, {3393, 7}, {3468, 8}, {3867, 7}, {4312, 8}, {4407, 7}, {4504, 8}, {4914, 7}, {5022, 8}, {5976, 7}, {6107, 8}, {6957, 9}, {7756, 8}, {9030, 9}, {9850, 8}, {10066, 9}, {10513, 8}, {10744, 9}, {11976, 8}, {12239, 9}, {13939, 8}, {14245, 9}, {14876, 10}, {15535, 9}, {15876, 8}, {16224, 9}, {20154, 10}, {23970, 9}, {28509, 10}, {31772, 9}, {36977, 10}, {40326, 9}, {41210, 10}, {49013, 11}, {50087, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {82448, 11}, {98051, 12}, {127165, 11}, {129950, 10}, {132796, 11}, {196129, 12}, {259924, 11}, {265616, 10}, {283451, 11}, {296001, 10}, {315876, 11}, {329862, 12}, {392279, 13}, {519871, 12}, {531255, 11}, {592026, 10}, {631776, 11}, {645611, 12}, {659749, 11}, {719463, 10}, {735218, 11}, {767770, 12}, {784582, 10}, {801763, 9}, {819320, 10}, {855595, 11}, {893477, 12}, {933036, 11}, {995682, 12}, {MP_SIZE_T_MAX,0}}

#define MUL_FFTM_TABLE2 {{1, 4}, {210, 3}, {215, 4}, {242, 5}, {248, 4}, {306, 5}, {328, 4}, {344, 5}, {360, 4}, {377, 5}, {423, 4}, {433, 5}, {680, 6}, {711, 5}, {743, 6}, {850, 5}, {869, 6}, {971, 5}, {993, 6}, {1799, 7}, {1922, 6}, {2144, 7}, {2340, 6}, {2392, 7}, {2727, 8}, {2849, 7}, {3109, 8}, {3393, 7}, {3468, 8}, {3867, 7}, {4039, 8}, {4603, 7}, {4704, 8}, {5478, 9}, {5721, 8}, {6957, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10066, 9}, {13939, 10}, {14557, 9}, {14876, 10}, {15535, 9}, {18084, 10}, {19722, 9}, {20154, 10}, {23970, 9}, {24495, 10}, {27898, 9}, {28509, 10}, {29772, 11}, {30424, 10}, {31772, 9}, {33179, 10}, {33906, 9}, {34649, 10}, {44943, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {82448, 11}, {114110, 12}, {127165, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {259924, 11}, {265616, 12}, {271433, 11}, {277377, 12}, {392279, 13}, {519871, 12}, {531255, 11}, {566925, 12}, {592026, 11}, {631776, 12}, {659749, 13}, {784582, 12}, {855595, 11}, {893477, 12}, {933036, 11}, {995682, 12}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_TABLE2 {{1, 4}, {404, 5}, {993, 6}, {1612, 7}, {1648, 6}, {1799, 7}, {1922, 6}, {2009, 7}, {3468, 8}, {3622, 7}, {3702, 8}, {3867, 7}, {4312, 8}, {4407, 7}, {4504, 8}, {4914, 7}, {5022, 8}, {5976, 7}, {6107, 8}, {6957, 9}, {7756, 8}, {9030, 9}, {9850, 8}, {10066, 9}, {11976, 8}, {12507, 9}, {13939, 10}, {15535, 9}, {15876, 8}, {16224, 9}, {20154, 10}, {20596, 9}, {22461, 10}, {23970, 9}, {26142, 10}, {26715, 9}, {28509, 10}, {31772, 9}, {34649, 10}, {40326, 9}, {41210, 10}, {49013, 11}, {52305, 10}, {53451, 11}, {55819, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {82448, 11}, {98051, 12}, {127165, 11}, {129950, 10}, {138676, 11}, {196129, 12}, {259924, 11}, {265616, 10}, {315876, 11}, {329862, 10}, {344468, 11}, {352011, 12}, {392279, 13}, {519871, 12}, {531255, 11}, {631776, 12}, {659749, 11}, {719463, 10}, {767770, 11}, {784582, 10}, {801763, 11}, {855595, 12}, {933036, 13}, {MP_SIZE_T_MAX,0}}

#define SQR_FFTM_TABLE2 {{1, 4}, {352, 5}, {360, 4}, {377, 5}, {531, 6}, {543, 5}, {650, 6}, {665, 5}, {695, 6}, {711, 5}, {743, 6}, {777, 5}, {813, 6}, {831, 5}, {850, 6}, {889, 5}, {909, 6}, {1185, 5}, {1211, 6}, {1413, 7}, {1444, 6}, {2009, 7}, {2053, 6}, {2098, 7}, {3248, 8}, {3393, 7}, {3622, 8}, {3867, 7}, {4039, 8}, {4914, 7}, {5022, 8}, {6518, 9}, {6661, 8}, {6957, 9}, {7266, 8}, {7426, 9}, {7756, 8}, {8100, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10513, 9}, {11976, 8}, {12239, 9}, {13939, 10}, {15535, 9}, {18084, 10}, {19722, 9}, {20154, 10}, {21979, 9}, {22461, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {29134, 11}, {31091, 10}, {31772, 9}, {32468, 10}, {44943, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {69326, 11}, {80681, 10}, {82448, 11}, {100199, 12}, {102394, 11}, {114110, 12}, {127165, 11}, {164920, 12}, {196129, 13}, {254354, 12}, {259924, 11}, {277377, 12}, {392279, 13}, {519871, 12}, {531255, 11}, {631776, 12}, {659749, 11}, {719463, 10}, {735218, 11}, {767770, 12}, {784582, 10}, {801763, 11}, {819320, 12}, {933036, 13}, {953467, 14}, {MP_SIZE_T_MAX,0}}

#define MUL_FFT_FULL_TABLE2 {{16, 4}, {1022, 1}, {1045, 2}, {1068, 5}, {1092, 6}, {1141, 5}, {1166, 4}, {1219, 3}, {1246, 2}, {1274, 3}, {1302, 4}, {1331, 1}, {1361, 2}, {1454, 1}, {1486, 4}, {1519, 2}, {1623, 1}, {1734, 3}, {1811, 4}, {1851, 1}, {1934, 2}, {2021, 1}, {2066, 2}, {2112, 5}, {2159, 4}, {2207, 2}, {2256, 5}, {2306, 4}, {2409, 3}, {2462, 4}, {2516, 3}, {2572, 2}, {2629, 1}, {2746, 2}, {2997, 4}, {3063, 3}, {3131, 6}, {3200, 5}, {3271, 4}, {3417, 1}, {3492, 4}, {3648, 1}, {3980, 4}, {4344, 2}, {4440, 3}, {4638, 5}, {4740, 4}, {4844, 1}, {4951, 4}, {5060, 3}, {5171, 2}, {5285, 1}, {5401, 2}, {5765, 1}, {5892, 2}, {6022, 4}, {6154, 1}, {7010, 4}, {7321, 1}, {7986, 4}, {8340, 1}, {8523, 4}, {8710, 2}, {8901, 3}, {9096, 5}, {9500, 4}, {9922, 3}, {10140, 2}, {10590, 1}, {10822, 2}, {11059, 1}, {11803, 2}, {12062, 4}, {12327, 1}, {14040, 4}, {14348, 1}, {15993, 2}, {17824, 1}, {18215, 4}, {19865, 1}, {20300, 3}, {20745, 1}, {23628, 2}, {24146, 4}, {24675, 1}, {32708, 2}, {35670, 5}, {36452, 6}, {37251, 4}, {38901, 3}, {41514, 1}, {42424, 3}, {43353, 2}, {47280, 4}, {48316, 2}, {49374, 4}, {50456, 6}, {51561, 9}, {53845, 5}, {55025, 1}, {62664, 2}, {64037, 1}, {65440, 2}, {71365, 5}, {74525, 4}, {81272, 3}, {83052, 1}, {84871, 3}, {86730, 2}, {94582, 1}, {96654, 2}, {98771, 4}, {100934, 1}, {128099, 4}, {130905, 7}, {133772, 10}, {136702, 12}, {139696, 8}, {145881, 7}, {149076, 6}, {152341, 4}, {155677, 3}, {159086, 4}, {162570, 3}, {173486, 2}, {197567, 4}, {201894, 1}, {261830, 2}, {267564, 5}, {273423, 8}, {279411, 9}, {291783, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {378405, 1}, {386691, 2}, {395159, 4}, {412655, 1}, {523686, 2}, {571086, 5}, {583592, 2}, {596372, 3}, {609431, 5}, {622776, 4}, {636414, 3}, {650350, 1}, {664591, 3}, {709213, 2}, {740613, 1}, {756831, 2}, {790340, 4}, {825333, 6}, {843406, 3}, {880748, 1}, {919743, 2}, {939883, 1}, {981496, 3}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_FULL_TABLE2 {{16, 2}, {1022, 3}, {1045, 1}, {1141, 4}, {1219, 2}, {1246, 3}, {1302, 4}, {1331, 1}, {1391, 2}, {1454, 1}, {1486, 4}, {1553, 6}, {1588, 2}, {1659, 1}, {1696, 2}, {1811, 4}, {1851, 1}, {1934, 2}, {2021, 3}, {2066, 2}, {2159, 1}, {2207, 2}, {2256, 5}, {2306, 2}, {2357, 4}, {2409, 1}, {2462, 2}, {2516, 3}, {2572, 2}, {2629, 1}, {2746, 3}, {2807, 2}, {2932, 1}, {2997, 4}, {3063, 1}, {3131, 2}, {3200, 1}, {3343, 4}, {3417, 2}, {3648, 4}, {3728, 1}, {3980, 2}, {4344, 1}, {4440, 3}, {4538, 5}, {4638, 1}, {4951, 4}, {5060, 3}, {5171, 2}, {5285, 1}, {5401, 4}, {5520, 2}, {5765, 1}, {5892, 2}, {6022, 4}, {6154, 1}, {6427, 2}, {6568, 3}, {6712, 1}, {7010, 4}, {7482, 1}, {7986, 2}, {8901, 1}, {9096, 4}, {9296, 5}, {9500, 4}, {9709, 1}, {10140, 3}, {10363, 2}, {10590, 1}, {11803, 2}, {12062, 4}, {12327, 5}, {12597, 1}, {14348, 2}, {14663, 1}, {15993, 2}, {16344, 1}, {17068, 2}, {17824, 1}, {18215, 4}, {19865, 1}, {20300, 3}, {20745, 1}, {21665, 2}, {23121, 1}, {23628, 2}, {24146, 4}, {25216, 3}, {26911, 1}, {32708, 2}, {35670, 5}, {37251, 4}, {38067, 5}, {38901, 1}, {40624, 3}, {41514, 2}, {42424, 3}, {43353, 2}, {46266, 1}, {47280, 4}, {48316, 2}, {49374, 1}, {51561, 4}, {52691, 6}, {53845, 5}, {55025, 1}, {62664, 2}, {64037, 1}, {65440, 2}, {71365, 5}, {74525, 4}, {79530, 3}, {83052, 2}, {84871, 3}, {86730, 2}, {94582, 1}, {96654, 2}, {98771, 4}, {100934, 1}, {130905, 2}, {133772, 5}, {136702, 8}, {139696, 9}, {142755, 8}, {145881, 7}, {149076, 6}, {152341, 4}, {155677, 3}, {159086, 4}, {162570, 3}, {173486, 2}, {197567, 4}, {206315, 1}, {261830, 2}, {267564, 5}, {273423, 8}, {285530, 9}, {291783, 7}, {298173, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {395159, 4}, {412655, 6}, {421691, 3}, {430925, 1}, {523686, 2}, {535154, 5}, {546873, 4}, {558848, 2}, {571086, 1}, {583592, 2}, {596372, 3}, {609431, 4}, {650350, 1}, {664591, 2}, {679144, 3}, {694016, 1}, {709213, 2}, {790340, 1}, {919743, 4}, {960464, 1}, {MP_SIZE_T_MAX,0}}

