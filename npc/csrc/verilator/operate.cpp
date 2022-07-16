#include <common.h>
// Include common routines
#include <verilated.h>
#include <verilated_dpi.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"

static VerilatedContext* contextp = new VerilatedContext;
static Vtop* top = new Vtop;


//-----  extern function ------//
uint32_t pmem_read(uint64_t pc);
void npc_trap(int state, vaddr_t pc, int halt_ret);


uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void dump_gpr() {
  int i;
  for (i = 0; i<32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

void init_verilator(int argc, char** argv, char** env) {

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


void reset(int n) {
  top->rstn = 0 ;
  top->clk  = 1 ;

  for ( int i=0; i<(n*2); i++ ) {
      top->eval();
      contextp->timeInc(10);
      top->clk = !top->clk;
  }
    top->rstn = 1;
    top->eval();
}


void init_module() {

  reset(10);
  printf("pc = %lx\n",top->pc);
  printf(FONT_GREEN "---------- module reseted ----------\n" FONT_NONE );

}


void run_step(uint64_t n) {

  while( (n--) && ( !Verilated::gotFinish() )  ) {

    if(  top->clk ) {
      if(top->ebreak)  { 
        npc_trap(2 , top->pc, top->a);
        end_sim(); 
        for(int i=0; i<30; i++) printf(FONT_BLUE "-");
        printf(" program end ");
        for(int i=0; i<30; i++) printf("-");
        printf(FONT_NONE "\n");
        return ;
      }
      contextp->timeInc(1); // 10 timeprecision period passes...
      top->inst = pmem_read(top->pc);
      top->eval();
      contextp->timeInc(9);
    }
    
    else {
      printf("pc = %lx, inst = %x \n", top->pc, top->inst);
      contextp->timeInc(10);
    }

    top->clk = !top->clk ;
    // Evaluate model
    top->eval();

    if(  top->clk ) {
      if(top->ebreak)  { 
        npc_trap(2 , top->pc, top->a);
        end_sim(); 
        for(int i=0; i<30; i++) printf(FONT_BLUE "-");
        printf(" program end ");
        for(int i=0; i<30; i++) printf("-");
        printf(FONT_NONE "\n");
        return ;
      }
      contextp->timeInc(1); // 10 timeprecision period passes...
      top->inst = pmem_read(top->pc);
      top->eval();
      contextp->timeInc(9);
    }
    
    else {
      printf("pc = %lx, inst = %x \n", top->pc, top->inst);
      contextp->timeInc(10);
    }

    top->clk = !top->clk ;
    // Evaluate model
    top->eval();
  }
}


void delete_module() {

  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

}


