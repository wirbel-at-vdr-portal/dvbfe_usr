/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: Delivery system type.
 * NOTE: setting delivery system is mandatory.
 ******************************************************************************/

enum fe_delivery_system {
  SYS_UNDEFINED,             /* Not yet defined.                                */
  SYS_DVBC_ANNEX_A,          /* Cable, DVB-C ITU-T J.83 Annex A (Europe)        */
  SYS_DVBC_ANNEX_B,          /* Cable, DVB-C ITU-T J.83 Annex B (N.America)     */
  SYS_DVBT,                  /* Terrestrial, DVB-T                              */
  SYS_DSS,                   /* Satellite, DSS (not fully supported)            */
  SYS_DVBS,                  /* Satellite, DVB-S                                */
  SYS_DVBS2,                 /* Satellite, DVB-S2/S2X                           */
  SYS_DVBH,                  /* Terrestrial (mobile), DVB-H (deprecated)        */
  SYS_ISDBT,                 /* Terrestrial, ISDB-T                             */
  SYS_ISDBS,                 /* Satellite, ISDB-S                               */
  SYS_ISDBC,                 /* Cable, ISDB-C (no drivers yet)                  */
  SYS_ATSC,                  /* Terrestrial, ATSC (8-VSB)                       */
  SYS_ATSCMH,                /* Terrestrial (mobile), ATSC-M/H                  */
  SYS_DTMB,                  /* Terrestrial, DTMB                               */
  SYS_CMMB,                  /* Terrestrial (mobile), CMMB (not fully supp.)    */
  SYS_DAB,                   /* Digital audio broadcasting (not fully supp.)    */
  SYS_DVBT2,                 /* Terrestrial, DVB-T2                             */
  SYS_TURBO,                 /* Satellite, DVB-S Turbo                          */
  SYS_DVBC_ANNEX_C,          /* Cable, DVB-C ITU-T J.83 Annex C (Japan)         */
  SYS_DVBC2,                 /* Cable, DVB-C2                                   */
};

/* deprecated: SYS_DVBC_ANNEX_AC */
#define SYS_DVBC_ANNEX_AC  SYS_DVBC_ANNEX_A
