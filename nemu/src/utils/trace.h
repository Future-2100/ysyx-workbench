#ifndef __TRACE_H__
#define __TRACE_H__

#include <elf.h>

extern FILE *elf_fp;

typedef struct {
  char name[40];
  //char *name;
  Elf64_Addr addr_sta;
  Elf64_Addr addr_end;
} FUNCT;

extern int func_num;

extern FUNCT function[0];

#endif

