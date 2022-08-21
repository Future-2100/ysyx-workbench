#include <common.h>
#include <cpu.h>
#include <locale.h>

#define MAX_INST_TO_PRINT 30

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

NPCState npc_state = { .state = NPC_STOP };

void difftest_step(vaddr_t pc, vaddr_t npc);
uint64_t get_time();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc, bool diff){
#ifdef CONFIG_ITRACE
   log_write("%s\n", _this->logbuf);
  if( g_print_step ) { puts(_this->logbuf); }
#endif
#ifdef CONFIG_DIFFTEST
  if( diff == true ) {
    difftest_step(_this->pc, dnpc);
  }
#endif
}

void run_step(Decode *s, CPU_state *cpu, bool *diff);

static void exec_once(Decode *s, vaddr_t pc, bool *diff){

  s->pc = pc;
  s->snpc = pc;
  run_step(s, &cpu, diff);
  cpu.pc = s->dnpc;

#ifdef CONFIG_ITRACE
  char *p = s->logbuf;

  //record the pc
  p += snprintf(p, sizeof(s->logbuf), "0x%08lx" ":", s->pc);
  //p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;

  //record the infomation of the instruction in s->logbuf
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }

  //add some number of space in s->logbuf
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  //record the disassemble information in s->logbuf
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      s->pc, (uint8_t *)&s->isa.inst.val, ilen);

#endif

}

static void execute(uint64_t n) {
  Decode s;
  bool diff = false;
  for(; n>0; n--) {
    exec_once(&s,cpu.pc, &diff);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc, diff);
    if(npc_state.state != NPC_RUNNING) {
      break;
    }
    /*
    #ifdef CONFIG_DEVICE
      device_update();
    #endif
    */
  }
}

void npc_trap(int state, vaddr_t pc, int halt_ret) {
  npc_state.state = state;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
}

void npc_quit() {
  npc_state.state = NPC_QUIT;
}

static void statistic() {
  setlocale(LC_NUMERIC, "");
#define NUMBERIC_FMT "%'ld"
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");

}

extern void isa_reg_display();
void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

void cpu_exec(uint64_t n) {
  g_print_step = ( n < MAX_INST_TO_PRINT ) ;
  switch (npc_state.state) {
    case NPC_END : 
    case NPC_ABORT:
      printf( "Program execution has ended. To restart the program, exit NPC and run again.\n" );
      return ;
    default : npc_state.state = NPC_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: 
    case NPC_ABORT:
      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FMT_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FMT_GREEN) :
             ANSI_FMT("HIT BAD TRAP", ANSI_FMT_RED))),
          npc_state.halt_pc);
    case NPC_QUIT: statistic(); break;

  return;
  }
}


int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
     (npc_state.state == NPC_QUIT);
  return !good;
}

