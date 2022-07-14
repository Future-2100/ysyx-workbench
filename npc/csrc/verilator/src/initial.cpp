#include <assert.h>
#include <getopt.h>
#include <verilated.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <Vtop.h>


 char *img_file = NULL ;
 char *log_file = NULL ;

static uint8_t pmem[0x8000000] __attribute((aligned(4096))) = {};

static int parse_args(int argc, char** argv) {
  const struct option table[] = {
    {"log "  ,  required_argument, NULL, 'l'},
    {0       , 0                 , NULL,  0 },
  };
  int o;
  while( (o = getopt_long(argc, argv, "-l:", table, NULL)) != -1 ) {
    switch (o) {
      case 'l' : log_file = optarg; break;
      case  1  : img_file = optarg; return 0;
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

static void init_isa() {
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

extern VerilatedContext* contextp ;
extern Vtop* top ; 

void init_sim(int argc, char** argv, char** env) {

  // Prevent unused variable warnings
  if( false && argc && argv && env) {}

  //Create logs/ directory in case we have traces to put under it
  Verilated::mkdir("build/logs");

  // Set debug level, 0 is off, 9 is highest presently used
  contextp->debug(0);
  
  //Verilator must compute traced signals
  contextp->traceEverOn(true);

  // Pass arguments so Verilated code can see them, e.g. $value$plusargs
  // This needs to be called before you create any model
  contextp->commandArgs(argc, argv);

  const svScope scope = svGetScopeFromName("TOP.top");
  assert(scope);
  svSetScope(scope);

}

