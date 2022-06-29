#ifndef __TRACE_H__
  #define __TRACE_H__

#include <elf.h>

FILE *elf_fp = NULL;

typedef struct {
  char name[40];
  //char *name;
  Elf64_Addr addr_sta;
  Elf64_Addr addr_end;
} FUNCT;

int func_num;

FUNCT function[0];

void init_elf(char *elf_file); 



#endif

