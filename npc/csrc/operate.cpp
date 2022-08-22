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
  top->clk = !top->clk;
  top->eval();
  contextp->timeInc(10);
} 

void init_module() {

  top->clk = 1;
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
  if(wen && top->clk){
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

/*
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
*/

/*
extern "C" void axi_port(char arvalid, char *arready, char arport, long long araddr, char *rvalid, char rready, char *rresp, long long *rdata) {

    if( arvalid ) {
      *arready = rand()%2;
      printf("%ldus: arvalid = 1, arready = %d\n", contextp->time(), *arready);
    }

    else *arready = 0;

    if( fetch_req==true ) {
      int ready = rand()%2;
      if( ready==1 ) {
        fetch_req=false;
        *arready = 0;
        *rvalid  = 1;
        *rdata   = inst_fetch(&fetch_addr,4);
        *rresp   = 0;
        //if( rready==1 )  *arready = 1;
      }
      else *rvalid = 0;
    }
    else *rvalid = 0;

    if( *arready==1 && arvalid==1 && arport==4 ) {
      fetch_req = true;
      fetch_addr = araddr;
      printf("%ldus : fetch_req is true\n",contextp->time());
    }
}
*/


bool fetch_req = false;
bool read_req  = false;
bool handshake_w  = false;
bool handshake_aw = false;
uintptr_t write_addr = 0;
word_t    write_data = 0;
int       write_size = 0;

uintptr_t fetch_addr = 0;
uintptr_t read_addr  = 0;

void run_step(Decode *s, CPU_state *cpu, bool *diff_en) {

      *diff_en = false;

      //top->instr = inst_fetch(&top->pc, 4);
      top->clk = !top->clk;   //posedge clk
      top->eval();
      contextp->timeInc(1);

      top->ARREADY = 0 ;

      if( top->ARVALID  ==1    && 
          top->ARID     ==0    &&
          top->ARLEN    ==0    &&
          top->ARSIZE   ==2    &&
          top->ARBURST  ==1    &&
          top->ARLOCK   ==0    &&
          top->ARCACHE  ==0    &&
          top->ARPORT   ==4    &&
          top->ARQOS    ==0    &&
          top->ARREGION ==0  
        ) {
        int arready = rand()%2 ;
        top->ARREADY = arready ;
        if( arready ) {
          fetch_req = true;
          fetch_addr = top->ARADDR;
        }
      }

      else if( top->ARVALID  ==1    && 
               top->ARID     ==1    &&
               top->ARLEN    ==0    &&
               top->ARSIZE   ==3    &&
               top->ARBURST  ==1    &&
               top->ARLOCK   ==0    &&
               top->ARCACHE  ==0    &&
               top->ARPORT   ==0    &&
               top->ARQOS    ==0    &&
               top->ARREGION ==0
        ) {
        int arready = rand()%2 ;
        top->ARREADY = arready ;
        if( arready ) {
          read_req  = true;
          read_addr = top->ARADDR;
        }
      }

      if( top->AWVALID  == 1 &&
          top->AWID     == 1 &&
          top->AWLEN    == 0 &&
          top->AWBURST  == 1 &&
          top->AWLOCK   == 0 &&
          top->AWCACHE  == 0 &&
          top->AWPORT   == 0 &&
          top->AWQOS    == 0 &&
          top->AWREGION == 0  
        ) {
        int awready = rand()%2;
        top->AWREADY = awready;
        if( awready ) {
          handshake_aw = true;
          write_addr   = top->AWADDR ;
               if( top->AWSIZE==0 ) write_size = 1;
          else if( top->AWSIZE==1 ) write_size = 2;
          else if( top->AWSIZE==2 ) write_size = 4;
          else if( top->AWSIZE==3 ) write_size = 8;
        }
      }

      if( top->WVALID  == 1 &&
          top->WID     == 1 &&
          top->WLAST   == 1
      ) {
        int wready = rand()%2;
        top->WREADY = wready;
        if( wready ) {
          handshake_w = true;
          write_data  = top->WDATA;
        //  write_strobe= top->WSTRB;
        }
      }


      top->eval();
      contextp->timeInc(9);

      top->clk = !top->clk;   //negedge clk 
      top->eval();
      contextp->timeInc(10);

      if( read_req == true && top->RREADY==1 ) {
        int resp_en = rand()%2;
        if( resp_en ) {
          read_req = false;
          top->RID   = 1;
          top->RDATA = paddr_read((read_addr),8) ;
          top->RRESP = 0;
          top->RLAST = 1;
          top->RVALID= 1;
        }
        else top->RVALID = 0;
      }
      else if( fetch_req == true && top->RREADY==1 ) {
        int resp_en = rand()%2;
        if( resp_en ) {
          fetch_req = false;
          top->RID   = 0;
          top->RDATA = inst_fetch(&fetch_addr,4);
          top->RRESP = 0;
          top->RLAST = 1;
          top->RVALID= 1;
        }
        else top->RVALID = 0;
      }
      else   top->RVALID = 0;


      if( handshake_w && handshake_aw && top->BREADY==1 ) {
        int bresp_en = rand()%2;
        if( bresp_en ) {
          handshake_w = false;
          handshake_aw= false;
          top->BID    = 1    ;
          top->BRESP  = 0    ;
          top->BVALID = 1    ;
          paddr_write(write_addr, write_size, write_data);
        }
        else top->BVALID = 0 ;
      }
      else top->BVALID = 0;

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

      if(top->this_ebreak) { // || contextp->time() >= 10000u)  { 
        npc_trap(NPC_END , top->this_pc, cpu_gpr[10]);
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
