/************************************************************************/
/* rop-tool - A Return Oriented Programming and binary exploitation     */
/*            tool                                                      */
/*                                                                      */
/* Copyright 2013-2018, -TOSH-                                          */
/* File coded by -TOSH-                                                 */
/*                                                                      */
/* This file is part of rop-tool.                                       */
/*                                                                      */
/* rop-tool is free software: you can redistribute it and/or modify     */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation, either version 3 of the License, or    */
/* (at your option) any later version.                                  */
/*                                                                      */
/* rop-tool is distributed in the hope that it will be useful,          */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of       */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        */
/* GNU General Public License for more details.                         */
/*                                                                      */
/* You should have received a copy of the GNU General Public License    */
/* along with rop-tool.  If not, see <http://www.gnu.org/licenses/>     */
/************************************************************************/
#include "disassemble.h"
#include "binfmt.h"


/* =========================================================================
   This file implement filters and registers for MIPS arch
   ======================================================================= */

const char *r_filter_mips[] = {
  "addiu $%R, $%R, %X",
  "mov%C $%R, $%R",
  "l%C $%R, %X",
  "l%C $%R, %X($%R)",
  "l%C $%R, %X($%R)",
  NULL,
};

const char *r_filter_mips_end[] = {
  "jalr $%R",
  "jalr.hb $%R, $%R",
  "jr $%R",
  "syscall",
  NULL,
};

const char *r_filter_mips_registers[] = {
  "zero", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4",
  "t5", "t6", "t7", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9",
  "k0", "k1", "gp", "sp", "s8", "fp", "ra",
  NULL
};
