#include <dlfcn.h>

#include <getopt.h>
#include <common.h>

static char *img_file = NULL;
static char *diff_so_file = NULL;
static int  difftest_port = 1234;


void init_difftest(char *ref_so_file, long img_size, int port);
void init_disasm(const char *triple);

extern bool is_batch_mode ;

uint8_t pmem[0x8000000] __attribute((aligned(4096))) = {};

uint32_t inst_read(uint64_t pc) {
  uint32_t inst = *(uint32_t *)( pc - 0x80000000 + pmem);
  return inst;
}

uint64_t mem_read(uint64_t addr) {
    uint64_t data = *(uint64_t *)( addr - 0x80000000 + pmem);
    return data;
}

void mem_write(uint64_t addr, int len, word_t data) {
      if( addr < 0x80000000 || addr >= 0x88000000 ) {
        printf(FONT_RED "address is out of the boundary!\n" FONT_NONE);
        assert(0);
        return ;
      }
    switch ( len ) {
      case 1 : *(uint8_t  *)( addr - 0x80000000 + pmem ) = data; return;
      case 2 : *(uint16_t *)( addr - 0x80000000 + pmem ) = data; return;
      case 3 : *(uint32_t *)( addr - 0x80000000 + pmem ) = data; return;
      case 4 : *(uint64_t *)( addr - 0x80000000 + pmem ) = data; return;
    }
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"help"     , no_argument      , NULL, 'h'},
    {"diff"     , required_argument, NULL, 'd'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhd:", table, NULL)) != -1) {
    switch (o) {
      case 'b': is_batch_mode = true; break;
      case 'd': diff_so_file = optarg; break;
      case  1 : img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-d,---diff=REF_SO       run DiffTest with reference REF_SO\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

static const uint32_t img [] = {
   0x00000297,  // auipc t0,0
   0x0002b823,  // sd  zero,16(t0)
   0x0102b503,  // ld  a0,16(t0)
   0x00100073,  // ebreak (used as nemu_trap)
   0xdeadbeef,  // some data
 };


void init_isa() {
    /* Load built-in image. */
    memcpy( pmem, img, sizeof(img));
}

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.\n");
    return 4096;  //built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);
  fseek(fp, 0, SEEK_END);

  long size = ftell(fp);
  Log("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread( pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


static void welcome() {
  printf("\n");
  printf("\n");
  printf(FONT_GREEN "Welcome to riscv64 " ANSI_BG_RED FONT_YELLOW "NPC" FONT_NONE " !\n");
  printf("\n");
  printf("\n");
}

void init_monitor(int argc, char** argv) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

#ifdef CONFIG_DIFFTEST
  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);
#endif

  /* Initialize the llvm */
  init_disasm("riscv64" "-pc-linux-gnu");

  /* Display welcome message. */
  welcome();
}

