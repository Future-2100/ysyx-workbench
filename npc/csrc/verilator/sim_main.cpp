#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <getopt.h>

// Include common routines
#include <verilated.h>

// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

#include "svdpi.h"
#include "Vtop__Dpi.h"

static char *img_file = NULL ;
static char *log_file = NULL ;

static uint8_t pmem[0x8000000] __attribute((aligned(4096))) = {};

static int parse_args(int argc, char** argv) {
  const struct option table[] = {
    {"log "  ,  required_argument, NULL, 'l'},
    {"img "  ,  required_argument, NULL, 'i'},
    {0       , 0                 , NULL,  0 },
  };
  int o;
  while( (o = getopt_long(argc, argv, "-l:i:", table, NULL)) != -1 ) {
    switch (o) {
      case 'l' : log_file = optarg; break;
      case 'i' : img_file = optarg; break;
      case  1  :                 return 0;
      default  :
                 printf("-l,--log=FILE      output log to FILE\n");
                 printf("-i,--img=FILE      load img to FILE\n");
                 printf("\n");
                 exit(0);
    }
  }
  return 0;
}

static const uint32_t img [] = {
  0x00000297,
  0x0002b823,
  0x0102b503,
  0x00100073,
  0xdeadbeef,
};

void init_isa() {
  memcpy( pmem, img, sizeof(img) );

}

static long load_img() {
  if (img_file == NULL) {
    printf("Use the default build-in image.\n");
    return 4096;
  }

  printf(" imag_file = %s\n ", img_file);
  FILE *fp = fopen(img_file, "rb");
  assert(fp);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld", img_file, size);

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

int main(int argc, char** argv, char** env) {

  init_memory(argc, argv);

  // Prevent unused variable warnings
  if( false && argc && argv && env) {}

  //Create logs/ directory in case we have traces to put under it
  Verilated::mkdir("build/logs");

  //Construct a VerilatedContext to hold simulation time, etc.
  VerilatedContext* contextp = new VerilatedContext; // must delete it at end
//const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

  // Set debug level, 0 is off, 9 is highest presently used
  contextp->debug(0);

  //Verilator must compute traced signals
  contextp->traceEverOn(true);

  // Pass arguments so Verilated code can see them, e.g. $value$plusargs
  // This needs to be called before you create any model
  contextp->commandArgs(argc, argv);

  // Construct the Verilated model, from Vtop.h generated froom Verilating "top.v"
  Vtop* top = new Vtop;  // must delete it at end
//const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};

  const svScope scope = svGetScopeFromName("TOP.top");
  assert(scope);
  svSetScope(scope);

  //begin 
  top->rstn = 0;
  top->clk  = 0;
  top->inst = 0x00;
  
    for ( int i=0; i<10; i++ ) {
      contextp->timeInc(1);
      top->clk = !top->clk;
      top->rstn = 0 ;
      top->eval();
    }

    top->rstn = 1;

  // Simulated until $finish
  //while( !Verilated::gotFinish() ) {
  int j = 30;
  while( j-- ) {

    contextp->timeInc(1); // 1 timeprecision period passes...

    top->clk = !top->clk ;

    if( top->clk ) {
      top->inst = pmem_read(top->pc);
      if(top->ebreak)  end_sim(); 
    }
    // Evaluate model
    top->eval();

    if( !top->clk ) {
      printf("pc = %lx, inst = %x \n", top->pc, top->inst);
    }

  }

  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

  // Return good completion status
  return 0;
}

