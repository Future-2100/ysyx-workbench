#include <common.h>
// Include common routines
#include <verilated.h>
#include <verilated_dpi.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "cpu.h"

static VerilatedContext* contextp = new VerilatedContext;
static Vtop* top = new Vtop;

//-----  extern function ------//
uint32_t inst_read(uint64_t pc);
uint64_t mem_read(uint64_t addr);
void     mem_write(uint64_t addr, int len, word_t data);
void npc_trap(int state, vaddr_t pc, int halt_ret);


uint64_t *cpu_gpr = NULL;
//extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void isa_reg_display() {
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

static void single_cycle() {
  top->clk = 1; top->eval(); contextp->timeInc(10);
  top->clk = 0; top->eval(); contextp->timeInc(10);
}

void reset(int n) {
  top->rstn = 0;
  while( n-- > 0) single_cycle();
  top->rstn = 1;
} 

void init_module() {

  reset(10);
  printf("pc = %lx\n",top->pc);
  printf(ANSI_FMT_GREEN "---------- module reseted ----------\n" ANSI_FMT_NONE );
}

extern bool g_print_step;

void run_step(Decode *s) {

//  int j = 2 ;
//  while ( j-- && ( !contextp->gotFinish() ) ) {

      
      if( top->wen ) {
        mem_write(top->addr, top->wlen, top->wdata);
      }

      top->clk = !top->clk;
      top->eval();
      contextp->timeInc(1); // 10 timeprecision period passes...
      top->inst = inst_read(top->pc);
      top->eval();
      contextp->timeInc(9);

      if( top->ren ) {
        top->rdata = mem_read(top->addr);
      }
      s->snpc = top->snxt_pc;
      s->dnpc = top->dnxt_pc;
      s->pc   = top->pc;
      s->isa.inst.val = top->inst;
      top->clk = !top->clk;
      top->eval();
      contextp->timeInc(10);

      if(top->ebreak)  { 
        npc_trap(2 , top->pc, top->a);
        end_sim(); 
        for(int i=0; i<30; i++) printf(ANSI_FMT_BLUE "-");
        printf(" program end ");
        for(int i=0; i<30; i++) printf("-");
        printf(ANSI_FMT_NONE "\n");
        return ;
      }

}


void delete_module() {

  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

}


