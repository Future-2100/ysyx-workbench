// Include common routines
#include <verilated.h>
// Inculde model header, generated from Verilating "top.v"
#include <Vtop.h>

void init_monitor(int, char *[]);
void init_sim(int argc, char** argv, char** env);
void init_module();
void engine_start();
int is_exit_status_bad();
//int is_exit_status_bad();


int main(int argc, char** argv, char** env) {

  init_monitor(argc, argv);

  init_sim(argc, argv, env);

  init_module();  //reset 10 periods

  engine_start();

  // Return good completion status
  return is_exit_status_bad();

}

