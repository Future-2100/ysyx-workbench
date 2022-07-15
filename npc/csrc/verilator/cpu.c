
enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
} NPCState;

NPCState npc_state = { .state = NPC_STOP };

void exe_step();

void execute(uint64_t n) {

  for(uint64_t i=0; i<n; i++) {
    exe_step();
  }
}


void cpu_exec(uint64_t n) {

  switch (npc_state.state) {
    case NPC_END :
    case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and ru    n again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  execute(n);

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;
    case NPC_END : 
    case NPC_ABORT:
    case NPC_QUIT : 
         printf("program execute %ld steps finished\n", n);
  }
}

