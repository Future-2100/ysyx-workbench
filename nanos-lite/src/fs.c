#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;


enum {FD_STDIN, 
  FD_STDOUT, 
  FD_STDERR, 
  FD_EVENTS,
  FD_DISPINFO,
  FD_FB
};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("invalid read : should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}


size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read (void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);
/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin" , 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write },
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write },
  [FD_EVENTS] = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_DISPINFO] = {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},
  [FD_FB] = {"/dev/fb", 0, 0, invalid_read, fb_write},
#include "files.h"
};

int fb_num = 0 ;
void init_fs() {
      size_t width  = io_read(AM_GPU_CONFIG).width ;
      size_t height = io_read(AM_GPU_CONFIG).height;
      file_table[FD_FB].size = width * height * 4 ;
      fb_num = sizeof(file_table)/ sizeof(file_table[0]) ;
#ifdef CONFIG_FTRACE
      printf("init_fs : number of files : %d\n", fb_num);
#endif
}

int fs_open(const char *pathname, int flags, int mode){
  int i;
  for( i=0; i<fb_num  ; i++ ) {
    if( strcmp ( pathname, file_table[i].name  ) == 0 ){
#ifdef CONFIG_FTRACE
      printf("opened file : %s, fd = %d\n", file_table[i].name, i);
#endif
      file_table[i].open_offset = 0;
      return i ;
    }
  }
  printf("fs_open error : can not find file : %s\n",pathname);
  assert(0);
  return -1 ;
}

size_t fs_read(int fd, void *buf, size_t len){
#ifdef CONFIG_FTRACE
  printf("read file : %s, fd = %d, buf = %p, len = %d, offset = %p\n",file_table[fd].name, fd, buf, len , file_table[fd].open_offset);
#endif
  assert( fd >=0 && fd < fb_num );
  size_t ret = 0;

  if( file_table[fd].read == NULL ) {
    assert( file_table[fd].open_offset <= file_table[fd].size ); 
    if( file_table[fd].open_offset + len > file_table[fd].size ) {
      len = file_table[fd].size - file_table[fd].open_offset;
    }
    size_t offset = file_table[fd].open_offset + file_table[fd].disk_offset;
    ret = ramdisk_read( buf, offset, len );
    file_table[fd].open_offset = file_table[fd].open_offset + len ;
  }
  else {
    ret =  (*(file_table[fd].read))( buf, 0, len );
  }
    return ret ;
}

size_t fs_write(int fd, void *buf, size_t len){
#ifdef CONFIG_FTRACE
  printf("write file : %s, fd = %d, buf = %p, len = %d, offset = %p\n",file_table[fd].name, fd, buf, len , file_table[fd].open_offset);
#endif
  assert( fd >=0 && fd < fb_num );
  size_t ret = 0;

  if( file_table[fd].write == NULL ) {
    assert( file_table[fd].open_offset <= file_table[fd].size ); 
    if( file_table[fd].open_offset + len > file_table[fd].size) {
      len = file_table[fd].size - file_table[fd].open_offset;
    }
    size_t offset = file_table[fd].open_offset + file_table[fd].disk_offset;
    ret = ramdisk_write( buf, offset, len );
    file_table[fd].open_offset = file_table[fd].open_offset + len ;
  }
  else if ( file_table[fd].write == fb_write ) {
    assert( file_table[fd].open_offset <= file_table[fd].size ); 
    if( file_table[fd].open_offset + len > file_table[fd].size) {
      len = file_table[fd].size - file_table[fd].open_offset;
    }
    size_t offset = file_table[fd].open_offset ;
    ret = (*(file_table[fd].write))(buf, offset, len);
    //fb_write
    file_table[fd].open_offset = file_table[fd].open_offset + len ;
  }

  else {
    ret = (*(file_table[fd].write))( buf, 0, len );
  }
  return ret ;
}

size_t fs_lseek(int fd, size_t offset, int whence){
#ifdef CONFIG_FTRACE
  char seek_set[] = "SEEK_SET";
  char seek_end[] = "SEEK_END";
  char seek_cur[] = "SEEK_CUR";
  char *seek_flag = NULL ;
  if( whence==SEEK_SET ) seek_flag = seek_set;
  else if ( whence==SEEK_END ) seek_flag = seek_end;
  else if ( whence==SEEK_CUR ) seek_flag = seek_cur;

  printf("lseek file : %s, fd = %d, offset = %p, whence = \"%s\"\n",file_table[fd].name, fd, offset, seek_flag);
#endif
  if( fd > 2 ) {
    switch (whence) {
      case SEEK_SET :  file_table[fd].open_offset = offset;
                       break;
      case SEEK_CUR :  file_table[fd].open_offset = file_table[fd].open_offset + offset;
                       break;
      case SEEK_END :  file_table[fd].open_offset = file_table[fd].size + offset;
                       break;
      default       :  file_table[fd].open_offset = file_table[fd].open_offset ;
                       break;
    }
    return file_table[fd].open_offset ;
  }
  else {
    printf("fs_lseek error : should not reach here \n");
    assert(0);
    return 0;
  }
}


int fs_close(int fd){
  file_table[fd].open_offset = 0 ;
  return 0;
}
