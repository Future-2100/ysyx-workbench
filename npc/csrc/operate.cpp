#include <common.h>
#include <paddr.h>

// Include common routines
#include <verilated.h>
#include <verilated_dpi.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "cpu.h"

#define RTC_ADDR    0xa0000048
#define SERIAL_ADDR 0xa00003f8
uint64_t get_time();

static VerilatedContext* contextp = new VerilatedContext;
static Vtop* top = new Vtop;

//-----  extern function ------//
void npc_trap(int state, vaddr_t pc, int halt_ret);

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

  top->clk = 0; 
  top->eval(); 
  contextp->timeInc(10);

  top->clk = 1; 
  top->eval(); 
  contextp->timeInc(10);

}

void reset(int n) {
  top->rstn = 0;
  while( n-- > 0) single_cycle();
  top->rstn = 1;
  top->clk = !top->clk;
  top->eval();
  contextp->timeInc(10);
} 

void init_module() {

  reset(10);
  printf("pc = %lx\n",top->pc);
  printf(ANSI_FMT_GREEN "---------- module reseted ----------\n" ANSI_FMT_NONE );
  //printf("pc = %lx\n",top->pc);
  return ;

}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
//void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void vmem_write(long long waddr, long long wdata, char wlen, char wen) {
  if(wen && top->clk ){
    //printf("waddr = 0x%llx, wdata = 0x%llx, wlen = %d\n", waddr, wdata, wlen);
    long long align_addr = waddr ;//& ~0x7ull;
    if(align_addr == SERIAL_ADDR) {
      putc((char)(wdata), stderr);
    }
    else {
      paddr_write((paddr_t)(align_addr), wlen, wdata);
    }
    //printf("-----finished write data-----\n");
  }
}

void vmem_read(long long raddr, long long *rdata , char ren) {
  if(ren && top->clk ){
    //printf("raddr = 0x%llx, rdata = 0x%llx\n", raddr, *rdata);
    long long align_addr = raddr ; //& ~0x7ull;
    if( align_addr == RTC_ADDR ){
      uint64_t us = get_time();
      *rdata = (uint32_t)us;
    }
    else if( align_addr == (RTC_ADDR + 0x04) ) {
      uint64_t us = get_time() >> 32;
      *rdata = (uint32_t)us;
    }
    else {
      *rdata = paddr_read((paddr_t)(align_addr),8);
    }
    //printf("-----finished read data-----\n");
  }
}

void run_step(Decode *s, CPU_state *cpu) {

//  int j=2;
//  while ( j-- && ( !contextp->gotFinish() ) ) {

      top->clk = !top->clk;   //posedge clk
      top->inst = inst_fetch(&top->dnxt_pc, 4);
      top->eval();
      contextp->timeInc(10);

      top->clk = !top->clk;   //negedge clk 
      
      top->eval();
      contextp->timeInc(10);

      s->snpc = top->snxt_pc;
      s->dnpc = top->dnxt_pc;
      s->pc   = top->pc;
      s->isa.inst.val = top->inst;
      for (int i=0; i<32; i++) {
        cpu->gpr[i] = cpu_gpr[i];
      }

      if(top->ebreak)  { 
        npc_trap(NPC_END , top->pc, top->a);
        for(int i=0; i<30; i++) printf(ANSI_FMT_BLUE "-");
        printf(" program end ");
        for(int i=0; i<30; i++) printf("-");
        printf(ANSI_FMT_NONE "\n");
        return ;
      }
}


void delete_module() {

  end_sim(); 
  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

}
