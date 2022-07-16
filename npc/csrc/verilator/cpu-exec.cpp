#include <common.h>


#define MAX_INST_TO_PRINT 30

void run_step(uint64_t n);

static bool g_print_step = false;

uint64_t g_nr_guest_inst = 0;

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState ;

NPCState npc_state = { .state = NPC_STOP };

static void execute(uint64_t n) {

  for(; n>0; n--) {
    run_step(1);
    g_nr_guest_inst ++;
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

