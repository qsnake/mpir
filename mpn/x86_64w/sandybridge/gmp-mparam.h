/* Generated by tuneup.c, 2011-11-22, gcc 4.5 */

#define MUL_KARATSUBA_THRESHOLD          16
#define MUL_TOOM3_THRESHOLD             105
#define MUL_TOOM4_THRESHOLD             246
#define MUL_TOOM8H_THRESHOLD            327

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          31
#define SQR_TOOM3_THRESHOLD              95
#define SQR_TOOM4_THRESHOLD             248
#define SQR_TOOM8_THRESHOLD             324

#define POWM_THRESHOLD                  158

#define HGCD_THRESHOLD                   44
#define GCD_DC_THRESHOLD               2440
#define GCDEXT_DC_THRESHOLD            1607
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                 6
#define MOD_1_2_THRESHOLD                 8
#define MOD_1_3_THRESHOLD                17
#define DIVREM_HENSEL_QR_1_THRESHOLD     36
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      5
#define DIVREM_EUCLID_HENSEL_THRESHOLD      8

#define ROOTREM_THRESHOLD                 6

#define GET_STR_DC_THRESHOLD             14
#define GET_STR_PRECOMPUTE_THRESHOLD     22
#define SET_STR_DC_THRESHOLD           6847
#define SET_STR_PRECOMPUTE_THRESHOLD   6847

#define MUL_FFT_TABLE  { 368, 736, 1984, 2304, 7168, 20480, 81920, 327680, 1310720, 5242880, 0 }
#define MUL_FFT_MODF_THRESHOLD          296
#define MUL_FFT_FULL_THRESHOLD         2112

#define SQR_FFT_TABLE  { 336, 672, 1728, 2304, 7168, 20480, 81920, 327680, 1310720, 5242880, 0 }
#define SQR_FFT_MODF_THRESHOLD          264
#define SQR_FFT_FULL_THRESHOLD         1856

#define MULLOW_BASECASE_THRESHOLD         7
#define MULLOW_DC_THRESHOLD              22
#define MULLOW_MUL_THRESHOLD           3145

#define MULHIGH_BASECASE_THRESHOLD       10
#define MULHIGH_DC_THRESHOLD             27
#define MULHIGH_MUL_THRESHOLD          3145

#define MULMOD_2EXPM1_THRESHOLD          18

#define FAC_UI_THRESHOLD              32756
#define DC_DIV_QR_THRESHOLD              36
#define DC_DIVAPPR_Q_N_THRESHOLD         90
#define INV_DIV_QR_THRESHOLD           2694
#define INV_DIVAPPR_Q_N_THRESHOLD        90
#define DC_DIV_Q_THRESHOLD              136
#define INV_DIV_Q_THRESHOLD            3689
#define DC_DIVAPPR_Q_THRESHOLD          106
#define INV_DIVAPPR_Q_THRESHOLD        8897
#define DC_BDIV_QR_THRESHOLD             40
#define DC_BDIV_Q_THRESHOLD              48
/* Tuneup completed successfully, took 367 seconds */
