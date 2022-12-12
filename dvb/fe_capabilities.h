/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * used to query the DTV frontends capabilities.
 ******************************************************************************/

enum fe_caps {
  FE_IS_STUPID                   =  0,        /* empty capabilities                               */
  FE_CAN_INVERSION_AUTO          = (1 <<  0), /* fe supports auto detection of spectral inversion */
  FE_CAN_FEC_1_2                 = (1 <<  1), /* fe supports forward error correction 1/2         */
  FE_CAN_FEC_2_3                 = (1 <<  2), /* fe supports forward error correction 2/3         */
  FE_CAN_FEC_3_4                 = (1 <<  3), /* fe supports forward error correction 3/4         */
  FE_CAN_FEC_4_5                 = (1 <<  4), /* fe supports forward error correction 4/5         */
  FE_CAN_FEC_5_6                 = (1 <<  5), /* fe supports forward error correction 5/6         */
  FE_CAN_FEC_6_7                 = (1 <<  6), /* fe supports forward error correction 6/7         */
  FE_CAN_FEC_7_8                 = (1 <<  7), /* fe supports forward error correction 7/8         */
  FE_CAN_FEC_8_9                 = (1 <<  8), /* fe supports forward error correction 8/9         */
  FE_CAN_FEC_AUTO                = (1 <<  9), /* fe supports auto detection of forward error corr */
  FE_CAN_QPSK                    = (1 << 10), /* DVB-S/S2, DVB-T/T2, fe supports QPSK modulation  */
  FE_CAN_QAM_16                  = (1 << 11), /* fe supports QAM16                                */
  FE_CAN_QAM_32                  = (1 << 12), /* fe supports QAM32                                */
  FE_CAN_QAM_64                  = (1 << 13), /* fe supports QAM64                                */
  FE_CAN_QAM_128                 = (1 << 14), /* fe supports QAM128                               */
  FE_CAN_QAM_256                 = (1 << 15), /* fe supports QAM256                               */
  FE_CAN_QAM_AUTO                = (1 << 16), /* fe supports auto detection of QAM modulation     */
  FE_CAN_TRANSMISSION_MODE_AUTO  = (1 << 17), /* DVB-T/T2, fe supports auto detection of TM mode  */
  FE_CAN_BANDWIDTH_AUTO          = (1 << 18), /* DVB-T/T2, fe supports auto detection of bandwidth*/
  FE_CAN_GUARD_INTERVAL_AUTO     = (1 << 19), /* DVB-T/T2, fe supports auto detection of GI       */
  FE_CAN_HIERARCHY_AUTO          = (1 << 20), /* DVB-T, fe supports auto detection of hierarchy   */
  FE_CAN_8VSB                    = (1 << 21), /* ATSC, fe supports terrestrial VSB8 modulation    */
  FE_CAN_16VSB                   = (1 << 22), /* ATSC, fe supports terrestrial VSB16 modulation   */
/*                               = (1 << 23),    not in use.                                      */
/*                               = (1 << 24),    not in use.                                      */
/*                               = (1 << 25),    not in use.                                      */
  FE_CAN_MULTISTREAM             = (1 << 26), /* DVB-S2(X), fe supports multi-stream per PLP      */
  FE_CAN_TURBO_FEC               = (1 << 27), /* DVB-S/S2, fe supports turbo fec                  */
  FE_CAN_2G_MODULATION           = (1 << 28), /* DVB-(S/C/T)2, fe 2nd. gen delivery system        */
/*                               = (1 << 29),    not in use.                                      */
  FE_CAN_RECOVER                 = (1 << 30), /* fe can recover from cable unplug. Do not use.    */
  FE_CAN_MUTE_TS                 = (1 << 31)  /* fe can mute (unwanted/broken) spurious TS data   */
};

struct dvb_frontend_info {
  char name[128];                             /* Human readable name of the frontend              */
  enum { FE_TYPE_IS_DEPRECATED } deprecated1; /* do not use.                                      */
  __u32 frequency_min;                        /* Minimum frequency, kHz Satellite, Hz otherwise.  */
  __u32 frequency_max;                        /* Maximum frequency, kHz Satellite, Hz otherwise.  */
  __u32 frequency_stepsize;                   /* frequency is rounded to multiples of this value. */
  __u32 frequency_tolerance;                  /* Frequency tolerance                              */
  __u32 symbol_rate_min;                      /* Minimum symbol rate in bauds (Cable/Satellite)   */ 
  __u32 symbol_rate_max;                      /* Maximum symbol rate in bauds (Cable/Satellite)   */ 
  __u32 symbol_rate_tolerance;                /* Symbol rate tolerance                            */
  __u32 deprecated2;                          /* do not use.                                      */
	enum fe_caps caps;
};

#define FE_GET_INFO   _IOR('o', 61, struct dvb_frontend_info)

