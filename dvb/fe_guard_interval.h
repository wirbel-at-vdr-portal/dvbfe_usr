/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Guard interval.
 * Please note that not all intervals are supported by a given standard.
 ******************************************************************************/

enum fe_guard_interval {
  GUARD_INTERVAL_1_32,       /* Guard interval 1/32                               */ 
  GUARD_INTERVAL_1_16,       /* Guard interval 1/16                               */ 
  GUARD_INTERVAL_1_8,        /* Guard interval 1/8                                */ 
  GUARD_INTERVAL_1_4,        /* Guard interval 1/4                                */
  GUARD_INTERVAL_AUTO,       /* Autodetect guard interval                         */
  GUARD_INTERVAL_1_128,      /* Guard interval 1/128                              */
  GUARD_INTERVAL_19_128,     /* Guard interval 19/128                             */
  GUARD_INTERVAL_19_256,     /* Guard interval 19/256                             */
  GUARD_INTERVAL_PN420,      /* PN length 420, 1/4                                */
  GUARD_INTERVAL_PN595,      /* PN length 595, 1/6                                */
  GUARD_INTERVAL_PN945,      /* PN length 945, 1/9                                */
  GUARD_INTERVAL_1_64        /* Guard interval 1/64                               */
};
