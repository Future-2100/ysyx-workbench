#include <common.h>
#include <trace.h>

void init_elf(char *elf_file){
  if(elf_file == NULL) {
    return ;
  }
  
    FILE *fp = fopen(elf_file, "r");
    Assert(fp, "Can not open '%s'", elf_file);
    elf_fp = fp;

  Log("Elf is read from %s", elf_file ? elf_file : "none");
  
}


