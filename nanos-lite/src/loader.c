#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd = fs_open(filename, 0, 0);
  assert(fd);

  uint32_t ident;
  fs_read(fd, &ident, 4);
  assert ( ident == 0x464c457f );
  halt(0);
  return 0 ;


  ramdisk_read( &ident, 0, 4 );

  Elf64_Off phoff;
  ramdisk_read( &phoff, 32, 8);
  
  uint16_t phentsize;
  ramdisk_read( &phentsize, 54, 2);

  uint16_t phnum;
  ramdisk_read( &phnum, 56, 2);

  Elf64_Addr entry;
  ramdisk_read( &entry, 24, 8 );

  Elf_Phdr elf_phdr;
  for( int i = 0; i < phnum; i++ ) {
    ramdisk_read( &elf_phdr.p_type   , phoff + phentsize*i +  0 , 4 );
    ramdisk_read( &elf_phdr.p_flags  , phoff + phentsize*i +  4 , 4 );
    ramdisk_read( &elf_phdr.p_offset , phoff + phentsize*i +  8 , 8 );
    ramdisk_read( &elf_phdr.p_vaddr  , phoff + phentsize*i + 16 , 8 );
    ramdisk_read( &elf_phdr.p_paddr  , phoff + phentsize*i + 24 , 8 );
    ramdisk_read( &elf_phdr.p_filesz , phoff + phentsize*i + 32 , 8 );
    ramdisk_read( &elf_phdr.p_memsz  , phoff + phentsize*i + 40 , 8 );
    ramdisk_read( &elf_phdr.p_align  , phoff + phentsize*i + 48 , 8 );
    if( elf_phdr.p_type == PT_LOAD ) {
      ramdisk_read( (char *)(elf_phdr.p_vaddr), elf_phdr.p_offset , elf_phdr.p_memsz );
      memset( (char *)(elf_phdr.p_vaddr + elf_phdr.p_filesz), 0, elf_phdr.p_memsz - elf_phdr.p_filesz);
     }
  }

      Log("program loaded successful" );
  return entry ;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

