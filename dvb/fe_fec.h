/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Type of Forward Error Correction (FEC)
 *
 * Please note that not all FEC types are supported by a given standard.
 ******************************************************************************/

enum fe_code_rate {
  FEC_NONE = 0,              /* No Forward Error Correction Code                  */
  FEC_1_2,                   /* FEC 1/2                                           */
  FEC_2_3,                   /* FEC 2/3                                           */
  FEC_3_4,                   /* FEC 3/4                                           */
  FEC_4_5,                   /* FEC 4/5                                           */
  FEC_5_6,                   /* FEC 5/6                                           */
  FEC_6_7,                   /* FEC 6/7                                           */
  FEC_7_8,                   /* FEC 7/8                                           */
  FEC_8_9,                   /* FEC 8/9                                           */
  FEC_AUTO,                  /* Autodetect FEC                                    */
  FEC_3_5,                   /* FEC 3/5                                           */
  FEC_9_10,                  /* FEC 9/10                                          */
  FEC_2_5,                   /* FEC 2/5                                           */
  FEC_1_3,                   /* FEC 1/3                                           */
  FEC_1_4,                   /* FEC 1/4                                           */
  FEC_5_9,                   /* FEC 5/9                                           */
  FEC_7_9,                   /* FEC 7/9                                           */
  FEC_8_15,                  /* FEC 8/15                                          */
  FEC_11_15,                 /* FEC 11/15                                         */
  FEC_13_18,                 /* FEC 13/18                                         */
  FEC_9_20,                  /* FEC 9/20,                                         */
  FEC_11_20,                 /* FEC 11/20                                         */
  FEC_23_36,                 /* FEC 23/36                                         */
  FEC_25_36,                 /* FEC 25/36                                         */
  FEC_13_45,                 /* FEC 13/45                                         */
  FEC_26_45,                 /* FEC 26/45                                         */
  FEC_28_45,                 /* FEC 28/45                                         */
  FEC_32_45,                 /* FEC 32/45                                         */
  FEC_77_90,                 /* FEC 77/90                                         */
};
