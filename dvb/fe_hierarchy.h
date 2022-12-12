/* SPDX-License-Identifier: LGPL-2.1+ WITH Linux-syscall-note */
#pragma once

/*******************************************************************************
 * Tuning: DVB-T hierarchy
 ******************************************************************************/

enum fe_hierarchy {
  HIERARCHY_NONE,            /* No hierarchy (default)                           */
  HIERARCHY_1,               /* Hierarchy 1                                      */
  HIERARCHY_2,               /* Hierarchy 2                                      */
  HIERARCHY_4,               /* Hierarchy 4                                      */
  HIERARCHY_AUTO             /* Autodetect hierarchy (no hw known)               */
};
