/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Pilot tones.
 ******************************************************************************/

enum fe_pilot {
  PILOT_ON,                  /* Pilot tones enabled                             */
  PILOT_OFF,                 /* Pilot tones disabled                            */
  PILOT_AUTO                 /* Autodetect pilot tones                          */
};
