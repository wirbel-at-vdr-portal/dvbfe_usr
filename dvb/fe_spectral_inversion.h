/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Set spectral inversion. Cable and satellite.
 *
 * INVERSION_AUTO: the hardware will try to figure out the spectral inversion
 * by itself. If the hardware doesn't support detection, lock with INVERSION_OFF
 * is tried first, and if it fails INVERSION_ON is tried. 
 ******************************************************************************/

enum fe_spectral_inversion {
  INVERSION_OFF,             /* No Spectral Inversion.                            */
  INVERSION_ON,              /* Spectral Inversion enabled.                       */
  INVERSION_AUTO             /* Auto-detect spectral inversion.                   */
};
