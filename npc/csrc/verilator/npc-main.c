
void init_monitor(int, char *[]);
void engine_start();


int main(int argc, char** argv, char** env) {

  init_monitor(argc, argv);

  init_sim(argc, argv, env);

  engine_start();

  return 0;

}

