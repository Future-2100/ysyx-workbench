#include <assert.h>
#include <getopt.h>
#include <verilated.h>

 char *img_file = NULL ;
 char *log_file = NULL ;

static uint8_t pmem[0x8000000] __attribute((aligned(4096))) = {};

int parse_args(int argc, char** argv) {
  const struct option table[] = {
    {"log "  ,  required_argument, NULL, 'l'},
    {0       , 0                 , NULL,  0 },
  };
  int o;
  while( (o = getopt_long(argc, argv, "-l:", table, NULL)) != -1 ) {
    switch (o) {
      case 'l' : log_file = optarg; break;
      case  1  :                 return 0;
      default  :
                 printf("-l,--log=FILE      output log to FILE\n");
                 printf("\n");
                 exit(0);
    }
  }
  return 0;
}

const uint32_t img [] = {
  0x00000297,
  0x0002b823,
  0x0102b503,
  0x00100073,
  0xdeadbeef,
};

void init_isa() {
  memcpy( pmem, img, sizeof(img) );
}

long load_img() {
  if (img_file == NULL) {
    printf("Use the default build-in image.\n");
    return 4096;
  }

  printf(" imag_file = %s\n ", img_file);
  FILE *fp = fopen(img_file, "rb");
  assert(fp);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread( pmem , size, 1, fp);
  assert( ret == 1 );

  fclose(fp);
  return size;
}


void init_memory(int argc, char** argv) {
  parse_args(argc, argv);
  init_isa();
  long img_size = load_img();
}

uint32_t pmem_read(uint64_t pc) {
  uint32_t inst = *(uint32_t *)( pc - 0x80000000 + pmem);
  return inst;
}

