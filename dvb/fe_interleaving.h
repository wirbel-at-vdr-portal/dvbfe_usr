/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: DTMB time interleaving
 * Please note that, currently, only DTMB uses it.
 ******************************************************************************/

enum fe_interleaving {
  INTERLEAVING_NONE,         /* No interleaving.                                 */
  INTERLEAVING_AUTO,         /* Auto-detect interleaving.                        */
  INTERLEAVING_240,          /* Interleaving of 240 symbols.                     */
  INTERLEAVING_720           /* Interleaving of 720 symbols.                     */
};
