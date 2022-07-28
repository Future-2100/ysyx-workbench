#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t file_offset = 0 ;

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin" , 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode){
  int i;
  for( i=0; i<sizeof(file_table)/sizeof(file_table[0]) ; i++ ) {
    if( strcmp ( pathname, file_table[i].name  ) == 0 ){
      printf("opened file : %s\n", pathname);
      file_offset = file_table[i].disk_offset;
      return i ;
    }
  }
  //if( i == sizeof(file_table)/sizeof(file_table[0]) )
    return 0 ;
}

size_t fs_read(int fd, void *buf, size_t len){
  ramdisk_read( buf, file_offset, len );
  file_offset = file_offset + len ;
  return len ;
}

size_t fs_write(int fd, void *buf, size_t len){
  char *ch = (char *)buf;
  if( fd==FD_STDOUT || fd==FD_STDIN ) {
    for( int i = 0; i < len; i++) {
      putch(*ch);
      ch++;
    }
  }
  return len ;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  return 0;
}

int fs_close(int fd){
  return 0;
}
