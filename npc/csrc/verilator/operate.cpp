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
uint32_t inst_read(uint64_t pc);
uint64_t mem_read(uint64_t addr);
void     mem_write(uint64_t addr, int len, word_t data);
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

static int clk = 0 ;
static int rstn  = 0 ;

void reset(int n) {

  top->rstn = rstn  ;
  top->clk  = clk ;

  for ( int i=0; i<(n*2); i++ ) {
      top->eval();
      contextp->timeInc(10);
      clk = !clk;
      top->clk = clk;
  }
    rstn = 1 ;
    top->rstn = rstn;
}


void init_module() {

  reset(10);
  printf("pc = %lx\n",top->pc);
  printf(FONT_GREEN "---------- module reseted ----------\n" FONT_NONE );

}


void run_step(uint64_t n) {

  while( (n--) && ( !Verilated::gotFinish() )  ) {

    if(  clk ) {
      if(top->ebreak)  { 
        npc_trap(2 , top->pc, top->a);
        end_sim(); 
        for(int i=0; i<30; i++) printf(FONT_BLUE "-");
        printf(" program end ");
        for(int i=0; i<30; i++) printf("-");
        printf(FONT_NONE "\n");
        return ;
      }
      if( top->wen ) {
        mem_write(top->addr, top->wlen, top->wdata);
      }
      top->eval();
      contextp->timeInc(1); // 10 timeprecision period passes...
      top->inst = inst_read(top->pc);
      top->eval();
      contextp->timeInc(9);
    }
    
    else {
      if( top->ren ) {
        top->rdata = mem_read(top->addr);
      }
      printf("pc = %lx, inst = %x \n", top->pc, top->inst);
      top->eval();
      contextp->timeInc(10);
    }

    clk = !clk ;
    top->clk = clk ;

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
      if( top->wen ) {
        mem_write(top->addr, top->wlen, top->wdata);
      }
      top->eval();
      contextp->timeInc(1); // 10 timeprecision period passes...
      top->inst = inst_read(top->pc);
      top->eval();
      contextp->timeInc(9);
    }
    
    else {
      if( top->ren ) {
        top->rdata = mem_read(top->addr);
      }
      printf("pc = %lx, inst = %x \n", top->pc, top->inst);
      top->eval();
      contextp->timeInc(10);
    }

    clk = !clk ;
    top->clk = !top->clk ;

  }
}


void delete_module() {

  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

}


