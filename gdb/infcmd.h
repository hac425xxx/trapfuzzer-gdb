/* Copyright (C) 1986-2020 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef INFCMD_H
#define INFCMD_H 1

extern "C" {
  void run_command (const char *args, int from_tty);
}

typedef struct _MEM_BRK_INFO{
  CORE_ADDR address;
  unsigned int length;
  unsigned int prot;
  CORE_ADDR page_address;
  unsigned int page_size;
}MEM_BRK_INFO;

enum HOOK_FUNC_TYPE {
  MALLOC_FUNC,
  FREE_FUNC,
  REALLOC_FUNC
};


typedef struct _HOOK_BRK{
  CORE_ADDR address;
  unsigned int length;
  enum HOOK_FUNC_TYPE func_type;
}HOOK_BRK;

typedef struct _HEAP_INFO{
  CORE_ADDR address;
  unsigned int length;
  CORE_ADDR page_address;
  unsigned int page_size;
}HEAP_INFO;





CORE_ADDR get_argument(unsigned int idx);
#endif
