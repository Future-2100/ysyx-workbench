#include <isa.h>
#include <cpu/cpu.h>
#include <memory/vaddr.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args) {
  int N;
  char *arg = strtok(NULL," ");
  if( arg == NULL )
    N = 1; 
  else
    sscanf(arg,"%d", &N);
  
  cpu_exec(N);

  return 0;
}

static int cmd_info(char *args) {
//  char *arg = strtok(NULL, " ");
  if(strcmp(args,"r") == 0)
    isa_reg_display();
  else if (strcmp(args,"w")== 0)
    info_w();
  else
    printf("Parameter error!\n");
  
  return 0;
}

static int cmd_x(char *args){
  int N;
  char *arg = strtok(NULL, " ");
  if(arg == NULL) { 
    printf("Error : missing the parameter N!\n");
    return 0;
  }
  else {
    sscanf(arg, "%d", &N);
    arg = strtok(NULL, " ");
    if(arg == NULL) {
      printf("Error: missing the expression EXPR !\n");
      return 0;
    }
    else{
      bool success = true;
      vaddr_t addr;
      addr = (vaddr_t)expr(arg, &success);
      for(int i=0; i < N; i++) {
        printf("0x%08lx = 0x%08lx\n",addr,vaddr_read(addr,4));
        addr += 4;
      }
    }
  return 0;
  }
}

static int cmd_p(char *args){
  bool success;
  word_t result;
  result = expr(args,&success);
  printf("%ld\n", result);

  return 0;
}

static int cmd_w(char *args){
  //char *arg = strtok(NULL, " ");
  if(args == NULL) {
    printf("Error: failed to apply for a watchpoint, missing the expression EXPR !\n");
    return 0;
  }
  else {
    new_wp(args);
    return 0;
  }
}

static int cmd_d(char *args){
  char *arg = strtok(NULL," ");
  if(arg == NULL) {
    printf("Error: missing the sequence number N !\n");
    return 0;
  }
  else {
    int N;
    sscanf(arg,"%d", &N);
    if( N < 1 || N > 32) {
      printf("Error: N should be 1~32\n");
      return 0;
    }
    else {
      free_NO(N);
      return 0;
    }
  }
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "The program suspends execution after stepping N instructions. When N is not given, it defaults to 1", cmd_si},
  { "info", "r : Print register status\n\
       w : Print watch point information", cmd_info},
  { "x" , "Solve the expression EXPR, take the result as the first memory address, and output N consecutive 4 bytes in hex form", cmd_x},
  { "p" , "Solve the expression EXPR", cmd_p},
  { "w" , "Pauses the execution of program when the value of expression EXPR changes", cmd_w},
  { "d" , "Delete the watchpoint with sequence number N", cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
  
  /* Initiallize the itrace ring pool */
  init_iring_pool();
}
