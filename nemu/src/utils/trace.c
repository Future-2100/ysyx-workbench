#include <common.h>
#include <elf.h>

FILE *elf_fp = NULL;

//SH means section headers
Elf64_Off SH_start;
uint16_t SH_num;

void init_elf(char *elf_file){
  if(elf_file == NULL) {
    return ;
  }
  
    FILE *fp = fopen(elf_file, "r");
    Assert(fp, "Can not open '%s'", elf_file);
    elf_fp = fp;

    /* obtain the start of section headers */
    fseek(elf_fp, 40, SEEK_SET);
    if( fread(&SH_start, sizeof(SH_start), 1,elf_fp) ) {
      Log("start of section headers : %ld", SH_start);
    }
    else {
      assert(0);
    }

    /* obtain the number of section headers */
    fseek(elf_fp, 60, SEEK_SET);
    if( fread(&SH_num, sizeof(SH_num), 1, elf_fp) ) {
      Log("number oof section headers : %d", SH_num);
    }
    else {
      assert(0);
    }

    /* obtain the section header string table index */
    uint16_t e_shstrndx;
    if( fread(&e_shstrndx, sizeof(e_shstrndx), 1, elf_fp) ) {
      Log( "Section header string table index : %d", e_shstrndx );
    }
    else {
      assert(0);
    }

    /* obtain all the datas of section headersj */
    fseek(elf_fp, SH_start, SEEK_SET);
    Elf64_Shdr elf_shd[SH_num];
    
    for(int i=0; i<SH_num; i++) {
      if (fread(&elf_shd[i].sh_name     , 4, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_type     , 4, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_flags    , 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_addr     , 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_offset   , 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_size     , 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_link     , 4, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_info     , 4, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_addralign, 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_entsize  , 8, 1, elf_fp) );
    }
    Elf64_Off shstrtab_off = elf_shd[e_shstrndx].sh_offset ;
    int i = 0;
    int j = 0;
    char buf;
    char sh_name_str[SH_num][20];
    for(i=0; i<SH_num; i++) {
      fseek(elf_fp, shstrtab_off + elf_shd[i].sh_name, SEEK_SET);
      j=0;
      buf = '0';
      while( buf != '\0' ) {
        buf = (char)fgetc(elf_fp);
        sh_name_str[i][j] = buf;
        j++;
      }
      printf("[%d] = %s\n",i, sh_name_str[i]);
    }

  Log("Elf is read from %s", elf_file ? elf_file : "none");
  
}
