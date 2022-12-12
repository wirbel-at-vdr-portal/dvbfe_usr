/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Current Status of DTV frontend.
 ******************************************************************************/

enum fe_status {
  FE_NONE        = 0,        /* No reception at all.                              */
  FE_HAS_SIGNAL  = (1 << 0), /* Frontend has some signal above noise level        */
  FE_HAS_CARRIER = (1 << 1), /* Frontend detected signal carrier                  */
  FE_HAS_VITERBI = (1 << 2), /* FEC inner coding (ie VITERBI, LDPC, ..) is stable */
  FE_HAS_SYNC    = (1 << 3), /* TS Sync Bytes was found.                          */
  FE_HAS_LOCK    = (1 << 4), /* Frontend receives data.                           */
  FE_TIMEDOUT    = (1 << 5), /* No lock in about 2secs                            */
  FE_REINIT      = (1 << 6)  /* Frontend was reinitialized, app should retune.    */
};

#define FE_READ_STATUS  _IOR('o', 69, fe_status_t)
