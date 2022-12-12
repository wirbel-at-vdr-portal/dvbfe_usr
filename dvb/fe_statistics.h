/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * DVBv5 statistics.
 ******************************************************************************/



/*******************************************************************************
 * Scale types for the quality parameters.
 ******************************************************************************/
enum fecap_scale_params {
  FE_SCALE_NOT_AVAILABLE = 0, /* item not available, temporary or permanent   */
  FE_SCALE_DECIBEL,           /* item reported as signed 0.001 dB steps       */
  FE_SCALE_RELATIVE,          /* item reported as unsigned 0..65535           */
  FE_SCALE_COUNTER            /* item reported as unsigned counts             */
};


/*******************************************************************************
 * Used for DTV frontend quality reports.
 ******************************************************************************/
struct dtv_stats {
  __u8 scale;                 /* one of fecap_scale_params                    */
  union {
     __u64 uvalue;            /* FE_SCALE_RELATIVE,FE_SCALE_COUNTER           */
     __s64 svalue;            /* FE_SCALE_DECIBEL; in 0.001 dB steps          */
     };
} __attribute__ ((packed));


/*******************************************************************************
 * Stores DTV frontend quality reports.
 ******************************************************************************/
#define MAX_DTV_STATS  4

struct dtv_fe_stats {
  /* On most standards, len can either be 0 or 1. Only for ISDB, up to four
   * stats are reported. If zero, this stat is disabled.
   */
  __u8 len;
  struct dtv_stats stat[MAX_DTV_STATS];
} __attribute__ ((packed));




/*******************************************************************************
 * Legacy DTV frontend quality statistics.
 ******************************************************************************/
#define FE_READ_BER                  _IOR('o', 70, __u32) /* bit error rate     */
#define FE_READ_SIGNAL_STRENGTH      _IOR('o', 71, __u16) /* signal strength    */
#define FE_READ_SNR                  _IOR('o', 72, __u16) /* signal-noise ratio */
#define FE_READ_UNCORRECTED_BLOCKS   _IOR('o', 73, __u32) /* uncorrected blocks */
