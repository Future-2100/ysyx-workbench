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

#define RTC_ADDR1   0xa0000048
#define RTC_ADDR2   0xa000004c
#define SERIAL_ADDR 0xa00003f8

uint64_t get_time();

VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop;

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

  top->clk = !top->clk ; 
  top->eval(); 
  contextp->timeInc(10);

}

void reset(int n) {
  top->rstn = 0;
  //top->ifu_ARREADY = 0;
  while( n-- > 0) single_cycle();
  top->rstn = 1;
} 

void init_module() {

  top->clk = 0;
  reset(20);
  printf("pc = %lx\n",top->pc);
  printf(ANSI_FMT_GREEN "---------- module reseted ----------" ANSI_FMT_NONE "\n");
  //printf("pc = %lx\n",top->pc);
  return ;

}

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void vmem_write(long long waddr, long long wdata, char wlen, char wen) {
  if(wen && top->clk ){
#ifdef CONFIG_MTRACE
    printf("waddr = 0x%llx, wdata = 0x%llx, wlen = %d\n", waddr, wdata, wlen);
#endif
    long long align_addr = waddr ;//& ~0x7ull;
    if(align_addr == SERIAL_ADDR) {
      putc((char)(wdata), stderr);
    }
    else {
      paddr_write((paddr_t)(align_addr), wlen, wdata);
    }
#ifdef CONFIG_MTRACE
    printf("-----finished write data-----\n");
#endif
  }
}

extern "C" void vmem_read(long long raddr, long long *rdata , char ren) {
  if(ren && top->clk ){
#ifdef CONFIG_MTRACE
    printf("raddr = 0x%llx, rdata = 0x%llx\n", raddr, *rdata);
#endif
    long long align_addr = raddr ; //& ~0x7ull;
    if( align_addr == RTC_ADDR1 ){
      uint64_t us = get_time();
      *rdata = (uint32_t)us;
    }
    else if( align_addr == RTC_ADDR2 ) {
      uint64_t us = get_time() >> 32;
      *rdata = (uint32_t)us;
    }
    else {
      *rdata = paddr_read((paddr_t)(align_addr),8);
    }
#ifdef CONFIG_MTRACE
    printf("-----finished read data-----\n");
#endif
  }
}

/*
extern "C" void axi_arready(char arvalid, char *arready) {
  if( top->clk && arvalid ) {
    *arready = rand()%2;
  }
}
*/


bool fetch_req = false;
uintptr_t fetch_addr = 0;

void run_step(Decode *s, CPU_state *cpu, bool *diff_en) {

      *diff_en = false;

      //top->instr = inst_fetch(&top->pc, 4);
      
      top->clk = !top->clk;   //posedge clk
      top->eval();
      contextp->timeInc(10);


      if( top->ARVALID==1 ) {
        top->ARREADY = rand()%2;
      }

      if( top->ARVALID == 1 && top->ARREADY == 1 && top->ARPORT == 4) {
        fetch_req  = true;
        fetch_addr = top->ARADDR ;
      }
      if( fetch_req == true ) {
        int ready = rand()%2;
        if(ready == 1) {
          fetch_req = false;
          top->ARREADY = 0;
          top->RVALID  = 1 ;
          top->RDATA   = inst_fetch(&fetch_addr,4);
          top->RRESP   = 0 ;
          if( top->RREADY==1 ) {
            top->ARREADY = 1;
          }
        }
        else {
          top->RVALID = 0;
        }
      }
      else {
          top->RVALID = 0;
      }
      top->ARREADY = 0;
      

      if( top->this_valid ) {
        *diff_en = true ;
      s->snpc = top->this_pc + 4;
      //s->dnpc = top->dnxt_pc;
      s->pc   = top->this_pc;
      s->isa.inst.val = top->this_instr;
        for (int i=0; i<32; i++) {
          cpu->gpr[i] = cpu_gpr[i];
        }
      }

      if(top->this_ebreak || contextp->time() >= 1000u)  { 
        npc_trap(NPC_END , top->this_pc, cpu_gpr[10]);
        for(int i=0; i<30; i++) printf(ANSI_FMT_BLUE "-");
        printf(" program end ");
        for(int i=0; i<30; i++) printf("-");
        printf(ANSI_FMT_NONE "\n");
        return ;
      }

      top->clk = !top->clk;   //negedge clk 
      top->eval();
      contextp->timeInc(10);

}


void delete_module() {

  end_sim(); 
  // Final model cleanup
  top->final();

  // Destory model
  delete top;

  delete contextp;

}
