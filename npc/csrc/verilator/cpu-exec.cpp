#include <cpu.h>

#define MAX_INST_TO_PRINT 30


bool g_print_step = false;

uint64_t g_nr_guest_inst = 0;

NPCState npc_state = { .state = NPC_STOP };

void difftest_step(vaddr_t pc, vaddr_t npc);

static void trace_and_difftest(Decode *_this, vaddr_t dnpc){
  if( g_print_step ) { puts(_this->logbuf); }
#ifdef CONFIG_DIFFTEST
  difftest_step(_this->pc, dnpc);
#endif
}

void run_step(Decode *s);

static void exec_once(Decode *s){

  run_step(s);

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
}

static void execute(uint64_t n) {
  Decode s;
  for(; n>0; n--) {
    exec_once(&s);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, s.dnpc);
    if(npc_state.state != NPC_RUNNING) {
      break;
    }
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


void cpu_exec(uint64_t n) {
  g_print_step = ( n < MAX_INST_TO_PRINT ) ;
  switch (npc_state.state) {
    case NPC_END : case NPC_ABORT:
      printf( "Program execution has ended. To restart the program, exit NPC and run again.\n" );
      return ;
    default : npc_state.state = NPC_RUNNING;
  }

  execute(n);

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
      Log("npc: %s at pc = " "0x%016lx",
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", FONT_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", FONT_GREEN) :
             ANSI_FMT("HIT BAD TRAP", FONT_RED))),
          npc_state.halt_pc);
    case NPC_QUIT: Log("total guest instructions = " "%'ld", g_nr_guest_inst);
  }
}


int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
     (npc_state.state == NPC_QUIT);
  return !good;
}

