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

  Elf_Ehdr header;
  printf("Elf_Ehdr size : %d\n", sizeof(header));
  fs_read(fd, &header, sizeof(Elf_Ehdr));
  uint32_t *e_ident = (uint32_t *)(header.e_ident);
  assert ( *e_ident == 0x464c457f );

  Elf_Phdr elf_phdr;
  for( int i = 0; i < header.e_phnum ; i++ ) {
    fs_lseek(fd, header.e_phoff + header.e_phentsize*i, SEEK_SET);
    fs_read (fd, &elf_phdr, sizeof(elf_phdr));
    if( elf_phdr.p_type == PT_LOAD ) {
      fs_lseek( fd, elf_phdr.p_offset, SEEK_SET );
      fs_read(fd, (char *)elf_phdr.p_vaddr, elf_phdr.p_memsz);
      memset( (char *)(elf_phdr.p_vaddr + elf_phdr.p_filesz), 0, elf_phdr.p_memsz - elf_phdr.p_filesz);
     }
  }

  /*
  uint32_t ident;
  fs_read(fd, &ident, 4);

  Elf64_Off phoff;
  fs_lseek(fd, 32, SEEK_SET);
  fs_read(fd, &phoff, 8);
  //ramdisk_read( &phoff, 32, 8);
  //assert( phoff == 0x40 );
  
  uint16_t phentsize;
  fs_lseek(fd, 54, SEEK_SET);
  fs_read(fd, &phentsize, 2);
  //ramdisk_read( &phentsize, 54, 2);

  uint16_t phnum;
  fs_lseek(fd, 56, SEEK_SET);
  fs_read(fd, &phnum, 2);
  //ramdisk_read( &phnum, 56, 2);

  Elf64_Addr entry;
  fs_lseek(fd, 24, SEEK_SET);
  fs_read(fd, &entry, 8);
  //assert( entry==0x83008040 );
  //ramdisk_read( &entry, 24, 8 );

  Elf_Phdr elf_phdr;
  for( int i = 0; i < phnum ; i++ ) {
    fs_lseek(fd, phoff + phentsize*i, SEEK_SET);
    fs_read (fd, &elf_phdr.p_type  , 4);
    fs_read (fd, &elf_phdr.p_flags , 4);
    fs_read (fd, &elf_phdr.p_offset, 8);
    fs_read (fd, &elf_phdr.p_vaddr , 8);
    fs_read (fd, &elf_phdr.p_paddr , 8);
    fs_read (fd, &elf_phdr.p_filesz, 8);
    fs_read (fd, &elf_phdr.p_memsz , 8);
    fs_read (fd, &elf_phdr.p_align , 8);
   // ramdisk_read( &elf_phdr.p_type   , phoff + phentsize*i +  0 , 4 );
   // ramdisk_read( &elf_phdr.p_flags  , phoff + phentsize*i +  4 , 4 );
   // ramdisk_read( &elf_phdr.p_offset , phoff + phentsize*i +  8 , 8 );
   // ramdisk_read( &elf_phdr.p_vaddr  , phoff + phentsize*i + 16 , 8 );
   // ramdisk_read( &elf_phdr.p_paddr  , phoff + phentsize*i + 24 , 8 );
   // ramdisk_read( &elf_phdr.p_filesz , phoff + phentsize*i + 32 , 8 );
   // ramdisk_read( &elf_phdr.p_memsz  , phoff + phentsize*i + 40 , 8 );
   // ramdisk_read( &elf_phdr.p_align  , phoff + phentsize*i + 48 , 8 );
    if( elf_phdr.p_type == PT_LOAD ) {
      fs_lseek( fd, elf_phdr.p_offset, SEEK_SET );
      fs_read(fd, (char *)elf_phdr.p_vaddr, elf_phdr.p_memsz);
      memset( (char *)(elf_phdr.p_vaddr + elf_phdr.p_filesz), 0, elf_phdr.p_memsz - elf_phdr.p_filesz);
     }
  }
  */

      Log("program loaded successful" );
  //halt(0);
  //return 0 ;
  fs_close(fd);
  //return entry;
  return header.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

