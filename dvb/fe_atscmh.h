/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: ATSC-MH
 ******************************************************************************/



/*******************************************************************************
 * Type of Series Concatenated Convolutional Code Block Mode
 ******************************************************************************/
enum atscmh_sccc_block_mode {
  ATSCMH_SCCC_BLK_SEP  = 0, /* SCCC outer code mode independent for each Group Region (A, B, C, D) */
  ATSCMH_SCCC_BLK_COMB = 1, /* all four Regions have the same SCCC outer code mode.                */
};


/*******************************************************************************
 * Type of Series Concatenated Convolutional Code Rate
 ******************************************************************************/
enum atscmh_sccc_code_mode {
  ATSCMH_SCCC_CODE_HLF = 0, /* The outer code rate of a SCCC Block is 1/2 rate.                    */
  ATSCMH_SCCC_CODE_QTR = 1, /* The outer code rate of a SCCC Block is 1/4 rate.                    */
};


/*******************************************************************************
 * Reed Solomon (RS) frame ensemble.
 ******************************************************************************/
enum atscmh_rs_frame_ensemble {
  ATSCMH_RSFRAME_ENS_PRI = 0, /* Primary Ensemble.   */
  ATSCMH_RSFRAME_ENS_SEC = 1  /* Secondary Ensemble. */
};


/*******************************************************************************
 * Reed Solomon (RS) frame mode.
 ******************************************************************************/
enum atscmh_rs_frame_mode {
  ATSCMH_RSFRAME_PRI_ONLY = 0, /* Single: There is only a primary RS Frame for all Group Regions.     */
  ATSCMH_RSFRAME_PRI_SEC  = 1, /* Dual: Primary RS Frame for Region A and B, Secondary for C and D.   */
};


/*******************************************************************************
 * ATSC-M/H Reed Solomon modes.
 ******************************************************************************/
enum atscmh_rs_code_mode {
  ATSCMH_RSCODE_211_187 = 0,  /* RS code (211,187) */
  ATSCMH_RSCODE_223_187 = 1,  /* RS code (223,187) */
  ATSCMH_RSCODE_235_187 = 2,  /* RS code (235,187) */
};
