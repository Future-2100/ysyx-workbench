#include <common.h>
#include <trace.h>

FILE *elf_fp = NULL;

extern int func_num;

<<<<<<< HEAD
FUNCT function[0];
=======
FUNCT function[255];
>>>>>>> tracer-ysyx2204

void init_elf(char *elf_file){
  if(elf_file == NULL) {
    return ;
  }
  
    FILE *fp = fopen(elf_file, "r");
    Assert(fp, "Can not open '%s'", elf_file);
    elf_fp = fp;
    
    /* obtain the start of section headers */
    static Elf64_Off SH_start;
    fseek(elf_fp, 40, SEEK_SET);
    if( fread(&SH_start, sizeof(SH_start), 1,elf_fp) ) ; 
    else {
      assert(0);
    }

    /* obtain the number of section headers */
    static uint16_t SH_num;
    fseek(elf_fp, 60, SEEK_SET);
    if( fread(&SH_num, sizeof(SH_num), 1, elf_fp) ); 
    else {
      assert(0);
    }

    /* obtain the section header string table index */
    static uint16_t SH_stindex; //section header string table index
    if( fread(&SH_stindex, sizeof(SH_stindex), 1, elf_fp) )  ;
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

/* obtain all the data of symbol table */
uint64_t  symtab_size= elf_shd[symtab_index].sh_size   ;
uint16_t  symtab_num = symtab_size / sizeof(Elf64_Sym) ;
Elf64_Off symtab_off = elf_shd[symtab_index].sh_offset ;
Elf64_Sym symtab[symtab_num]    ;
char symtab_name[symtab_num][40];

fseek(elf_fp, symtab_off, SEEK_SET);
for(i=0; i<symtab_num; i++) {
  if ( fread(&symtab[i].st_name  , 4, 1, elf_fp) );
  if ( fread(&symtab[i].st_info  , 1, 1, elf_fp) );
  if ( fread(&symtab[i].st_other , 1, 1, elf_fp) );
  if ( fread(&symtab[i].st_shndx , 2, 1, elf_fp) );
  if ( fread(&symtab[i].st_value , 8, 1, elf_fp) );
  if ( fread(&symtab[i].st_size  , 8, 1, elf_fp) );
}

    Elf64_Off strtab_off = elf_shd[strtab_index].sh_offset ;
    for(i=0; i<symtab_num; i++) {
      fseek(elf_fp, strtab_off + symtab[i].st_name , SEEK_SET);
      buf = '0' ;
      j = 0;
      while( buf != '\0' ) {
        buf = (char)fgetc(elf_fp);
        symtab_name[i][j] = buf;
        j++;
      }
    }

    for(i=0; i<symtab_num; i++) {
      if( symtab[i].st_info == 18 ) 
        func_num ++;
    }

    FUNCT *func = function;

    j = 0 ;

    for(i=0; i<symtab_num; i++) {
      if( symtab[i].st_info == 18 )  {
        strcpy( (func+j)->name, symtab_name[i] );
        (func+j)->addr_sta = symtab[i].st_value;
        (func+j)->addr_end = symtab[i].st_value + symtab[i].st_size ;
//        printf( "func[%d] : %s  %lx - %lx\n", j, (func+j)->name, (func+j)->addr_sta, (func+j)->addr_end );
        j++;
      }
    }

  Log("Elf is read from %s", elf_file ? elf_file : "none");
  
}


