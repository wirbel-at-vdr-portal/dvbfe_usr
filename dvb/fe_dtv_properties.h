/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once
#include "fe_statistics.h"

/*******************************************************************************
 * DVBv5 DTV properties
 ******************************************************************************/

/*******************************************************************************
 * Store one DVBv5 command - value pair.
 ******************************************************************************/
struct dtv_property {
  __u32 cmd;                   /* command, see fe_dtv_cmds.h                  */
  __u32 reserved[3];           /* Not used.                                   */
  union {
     __u32 data;               /* argument for DTV command.                   */
     struct dtv_fe_stats st;   /* result for DTV_STAT_* commands              */
     struct {                  /* No used.                                    */
        __u8 data[32];         /* No used.                                    */
        __u32 len;             /* No used.                                    */
        __u32 reserved1[3];    /* No used.                                    */
        void *reserved2;       /* No used.                                    */
        } buffer;              /* No used.                                    */
     } u;
  int result;                  /* Not used.                                   */
} __attribute__ ((packed));


/*******************************************************************************
 * A struct for one or more dtv_property, for FE_GET_PROPERTY, FE_SET_PROPERTY
 ******************************************************************************/
struct dtv_properties {
  __u32 num;                  /* number of commands stored at the struct. */
  struct dtv_property* props; /* a pointer to struct dtv_property         */
};



#define FE_SET_PROPERTY  _IOW('o', 82, struct dtv_properties)
#define FE_GET_PROPERTY  _IOR('o', 83, struct dtv_properties)
