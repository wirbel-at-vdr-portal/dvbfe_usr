/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Modulation types.
 * Please note that not all modulations are supported by a given standard.
 ******************************************************************************/

enum fe_modulation {
  QPSK,                      /* QPSK modulation, NOTE: QPSK == 4-QAM              */
  QAM_16,                    /* 16-QAM modulation                                 */
  QAM_32,                    /* 32-QAM modulation                                 */
  QAM_64,                    /* 64-QAM modulation                                 */
  QAM_128,                   /* 128-QAM modulation                                */
  QAM_256,                   /* 256-QAM modulation                                */
  QAM_AUTO,                  /* Autodetect QAM modulation                         */
  VSB_8,                     /* 8-VSB modulation (terr ATSC)                      */
  VSB_16,                    /* 16-VSB modulation (terr ATSC)                     */
  PSK_8,                     /* 8-PSK modulation                                  */
  APSK_16,                   /* 16-APSK modulation                                */
  APSK_32,                   /* 32-APSK modulation                                */
  DQPSK,                     /* DQPSK modulation                                  */
  QAM_4_NR,                  /* 4-QAM-NR modulation                               */
  QAM_1024,                  /* 1024-QAM modulation                               */
  QAM_4096,                  /* 4096-QAM modulation                               */
  APSK_8_L,                  /* 8APSK-L modulation                                */
  APSK_16_L,                 /* 16APSK-L modulation                               */
  APSK_32_L,                 /* 32APSK-L modulation                               */
  APSK_64,                   /* 64APSK modulation                                 */
  APSK_64_L                  /* 64APSK-L modulation                               */
};
