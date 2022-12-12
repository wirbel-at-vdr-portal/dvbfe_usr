/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Delivery system type.
 * NOTE: setting delivery system is mandatory.
 ******************************************************************************/

enum fe_delivery_system {
  SYS_UNDEFINED,             /* Not yet defined.                                */
  SYS_DVBC_ANNEX_A,          /* Cable TV: DVB-C ITU-T J.83 Annex A (Europe)     */
  SYS_DVBC_ANNEX_B,          /* Cable TV: DVB-C ITU-T J.83 Annex B (N.America)  */
  SYS_DVBT,                  /* Terrestrial TV: DVB-T                           */
  SYS_DSS,                   /* Satellite TV: DSS (not fully supported)         */
  SYS_DVBS,                  /* Satellite TV: DVB-S                             */
  SYS_DVBS2,                 /* Satellite TV: DVB-S2 and DVB-S2X                */
  SYS_DVBH,                  /* Terrestrial TV (mobile): DVB-H (deprecated)     */
  SYS_ISDBT,                 /* Terrestrial TV: ISDB-T                          */
  SYS_ISDBS,                 /* Satellite TV: ISDB-S                            */
  SYS_ISDBC,                 /* Cable TV: ISDB-C (no drivers yet)               */
  SYS_ATSC,                  /* Terrestrial TV: ATSC (8-VSB)                    */
  SYS_ATSCMH,                /* Terrestrial TV (mobile): ATSC-M/H               */
  SYS_DTMB,                  /* Terrestrial TV: DTMB                            */
  SYS_CMMB,                  /* Terrestrial TV (mobile): CMMB (not fully supp.) */
  SYS_DAB,                   /* Digital audio: DAB (not fully supported)        */
  SYS_DVBT2,                 /* Terrestrial TV: DVB-T2                          */
  SYS_TURBO,                 /* Satellite TV: DVB-S Turbo                       */
  SYS_DVBC_ANNEX_C,          /* Cable TV: DVB-C ITU-T J.83 Annex C (JP)         */
  SYS_DVBC2,                 /* Cable TV: DVB-C2                                */
};

/* deprecated: SYS_DVBC_ANNEX_AC */
#define SYS_DVBC_ANNEX_AC  SYS_DVBC_ANNEX_A
