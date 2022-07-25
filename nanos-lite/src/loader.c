#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);

#define BASE_PA 0x83000000
static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf64_Off phoff;
  ramdisk_read( &phoff, 32, 8);
  printf(" phoff = %d \n",phoff );
  uint16_t phentsize;
  ramdisk_read( &phentsize, 54, 2);
  printf(" phentsize = %d \n",phentsize );
  uint16_t phnum;
  ramdisk_read( &phnum, 56, 2);
  printf(" phnum = %d \n",phnum );

  Elf_Phdr elf_phdr;
  uintptr_t entry = 0;
  for( int i = 0; i < phnum; i++ ) {
    ramdisk_read( &elf_phdr.p_type   , phoff + phentsize*i +  0 , 4 );
    ramdisk_read( &elf_phdr.p_flags  , phoff + phentsize*i +  4 , 4 );
    ramdisk_read( &elf_phdr.p_offset , phoff + phentsize*i +  8 , 8 );
    ramdisk_read( &elf_phdr.p_vaddr  , phoff + phentsize*i + 16 , 8 );
    ramdisk_read( &elf_phdr.p_paddr  , phoff + phentsize*i + 24 , 8 );
    ramdisk_read( &elf_phdr.p_filesz , phoff + phentsize*i + 32 , 8 );
    ramdisk_read( &elf_phdr.p_memsz  , phoff + phentsize*i + 40 , 8 );
    ramdisk_read( &elf_phdr.p_align  , phoff + phentsize*i + 48 , 8 );
    printf(" p_type   = %x ,p_flags  = %x\n",elf_phdr.p_type, elf_phdr.p_flags );
    printf(" p_offset = %x ,p_vaddr  = %x\n",elf_phdr.p_offset, elf_phdr.p_vaddr );
    printf(" p_paddr  = %x ,p_filesz = %x\n",elf_phdr.p_paddr , elf_phdr.p_filesz );
    printf(" p_memsz  = %x ,p_align  = %x\n",elf_phdr.p_memsz , elf_phdr.p_align );
    if( elf_phdr.p_type == PT_LOAD ) {
      entry = elf_phdr.p_vaddr;
      ramdisk_read( (char *)(elf_phdr.p_vaddr), elf_phdr.p_offset, elf_phdr.p_memsz );
      memset( (char *)(elf_phdr.p_vaddr + elf_phdr.p_filesz), 0, elf_phdr.p_memsz - elf_phdr.p_filesz);
     }
  }

      return entry;
//  TODO();
      printf(" loaded program  \n" );
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

