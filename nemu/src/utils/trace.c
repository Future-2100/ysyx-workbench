#include <common.h>
#include <elf.h>

FILE *elf_fp = NULL;

//SH means section headers
Elf64_Off SH_start;
uint16_t SH_num;
uint16_t SH_stindex; //section header string table index

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
    if( fread(&SH_stindex, sizeof(SH_stindex), 1, elf_fp) ) {
      Log( "Section header string table index : %d", SH_stindex );
    }
    else {
      assert(0);
    }

    /* obtain all the datas of section headers */
    fseek(elf_fp, SH_start, SEEK_SET);
    Elf64_Shdr elf_shd[SH_num];
    char sh_name_str[SH_num][20];
    
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
    Elf64_Off shstrtab_off = elf_shd[SH_stindex].sh_offset ;
    int i = 0;
    int j = 0;
    char buf;
    for(i=0; i<SH_num; i++) {
      fseek(elf_fp, shstrtab_off + elf_shd[i].sh_name, SEEK_SET);
      j=0;
      buf = '0';
      while( buf != '\0' ) {
        buf = (char)fgetc(elf_fp);
        sh_name_str[i][j] = buf;
        j++;
      }
      printf("%s\n",sh_name_str[i]);
    }

    /* obtain the index of .strtab  and the index of .symtab */
    uint16_t strtab_index = 0;
    uint16_t symtab_index = 0;
    for( i=0; i<SH_num; i++) {
      if ( strcmp( sh_name_str[i], ".strtab" ) == 0 ) {
        strtab_index = i;
      }
      if ( strcmp( sh_name_str[i], ".symtab" ) == 0 ) {
        symtab_index = i;
      }

    }
    printf("[%d]=.strtab\n", strtab_index);
    printf("[%d]=.symtab\n", symtab_index);


  Log("Elf is read from %s", elf_file ? elf_file : "none");
  
}
