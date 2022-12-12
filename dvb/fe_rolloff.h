/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Symbol rolloff factor α.
 * NOTE:
 *  α=35% is implied on DVB-S.
 *  α=35% is default On DVB-S2.
 *  for DVB-C, rolloff is given by delivery system choice.
 ******************************************************************************/

enum fe_rolloff {
 ROLLOFF_35,                 /* Rolloff factor: α=35%                           */
 ROLLOFF_20,                 /* Rolloff factor: α=20%                           */
 ROLLOFF_25,                 /* Rolloff factor: α=25%                           */
 ROLLOFF_AUTO,               /* Auto-detect rolloff factor.                     */
 ROLLOFF_15,                 /* Rolloff factor: α=15%                           */
 ROLLOFF_10,                 /* Rolloff factor: α=10%                           */
 ROLLOFF_5,                  /* Rolloff factor: α=5%                            */
};
