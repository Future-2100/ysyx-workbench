#include <dlfcn.h>
#include <getopt.h>
#include <common.h>
#include <paddr.h>

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int  difftest_port = 1234;
static char *elf_file = NULL;

void init_rand();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_disasm(const char *triple);
void init_log(const char *log_file);
void init_elf(char *elf_file);
void init_isa();
void sdb_set_batch_mode();
void init_mem();
void init_sdb();
void init_device();

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhd:e:l:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case  1 : img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,---diff=REF_SO       run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           read elf FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.\n");
    return 4096;  //built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);
  fseek(fp, 0, SEEK_END);

  long size = ftell(fp);
  Log("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


static void welcome() {
  #ifdef CONFIG_TRACE
    Log("Trace: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  #else
    Log("Trace: %s", ANSI_FMT("OFF", ANSI_FG_RED));
  #endif
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf(ANSI_FMT_GREEN "Welcome to riscv64 " ANSI_BG_RED ANSI_FMT_YELLOW "NPC" ANSI_FMT_NONE " !\n");
  printf("For help, type \"help\"\n");
  printf("\n");

}

void init_monitor(int argc, char** argv) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seen. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Read the elf file. */
<<<<<<< HEAD
  init_elf(elf_file);
=======
  #ifdef CONFIG_ELF
  init_elf(elf_file);
  #endif
>>>>>>> tracer-ysyx2204

  /* Initial memory. */
  init_mem();

  /* Initialize device. */
  #ifdef CONFIG_DEVICE
    init_device();
  #endif
  
  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

#ifdef CONFIG_DIFFTEST
  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);
#endif

  /* Initialize the simple debugger. */
  init_sdb();

  /* Initialize the llvm */
  init_disasm("riscv64" "-pc-linux-gnu");

  /* Display welcome message. */
  welcome();
}

