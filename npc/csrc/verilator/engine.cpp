#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
//#include <istream>
//#include <iostream>
#include <readline/history.h>
#include <readline/readline.h>

void cpu_exec(uint64_t n);
void run_all();

#define ARRLEN(arr) (int)(sizeof(arr)) / sizeof(arr[0])

bool batch_mode = false ;

static int cmd_c(char *args) {
  run_all();
  return 0;
}

static int cmd_q(char *args) {
//  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_si(char *args) {
  int N;
  char *arg = strtok(NULL, " ");
  if( arg == NULL )
    N = 1;
  else
    sscanf(arg, "%d", &N);

  cpu_exec(N);

  return 0;
}

static int cmd_info(char *args) {
  return 0;
}

static int cmd_x(char *args){
  return 0;
  }

static int cmd_p(char *args){
  return 0;
}

static int cmd_w(char *args){
  return 0;
}

static int cmd_d(char *args){
  return 0;
}

static int cmd_help(char *args);



static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "The program suspends execution after stepping N instructions. When N is not given, it defaults to 1", cmd_si},
  { "info", "r : Print register status\n\
       w : Print watch point information", cmd_info},
  { "x" , "Solve the expression EXPR, take the result as the first memory address, and output N consecutive 4 bytes in hex form", cmd_x},
  { "p" , "Solve the expression EXPR", cmd_p},
  { "w" , "Pauses the execution of program when the value of expression EXPR changes", cmd_w},
  { "d" , "Delete the watchpoint with sequence number N", cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)

static char* rl_gets() {
  static char* line_read = NULL ;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }
  return line_read;
}

void sdb_mainloop() {
  if(batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

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


void engine_start() {
  sdb_mainloop();
}

