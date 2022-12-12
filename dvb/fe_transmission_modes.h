/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Transmission mode. OFDM and DMTB
 * Please note that not all modes are supported by a given standard.
 ******************************************************************************/

enum fe_transmit_mode {
  TRANSMISSION_MODE_2K,      /* Transmission mode 2K                              */
  TRANSMISSION_MODE_8K,      /* Transmission mode 8K                              */
  TRANSMISSION_MODE_AUTO,    /* Autodetect transmission mode.                     */
  TRANSMISSION_MODE_4K,      /* Transmission mode 4K                              */
  TRANSMISSION_MODE_1K,      /* Transmission mode 1K                              */
  TRANSMISSION_MODE_16K,     /* Transmission mode 16K                             */
  TRANSMISSION_MODE_32K,     /* Transmission mode 32K                             */
  TRANSMISSION_MODE_C1,      /* Single Carrier (C=1) transmission mode, DMTB      */
  TRANSMISSION_MODE_C3780    /* Multi Carrier (C=3780) transmission mode, DTMB    */
};
