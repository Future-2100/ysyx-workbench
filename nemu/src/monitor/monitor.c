#include <isa.h>
#include <elf.h>
#include <memory/paddr.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
//  Log("Exercise: Please remove me in the source code and compile NEMU again.");
//  assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;
static char *elf_file = NULL;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

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
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           read elf FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}


FILE *elf_fp = NULL;

void read_elf(char *elf_file){
  if(elf_file != NULL) {
    FILE *fp = fopen(elf_file, "r");
    Assert(fp, "Can not open '%s'", elf_file);
    elf_fp = fp;

    /* obtain the start of section headers */
    fseek(elf_fp, 40, SEEK_SET);
    Elf64_Off e_shoff;
    if( fread(&e_shoff, sizeof(e_shoff), 1,elf_fp) ) {
      Log("start of section headers : %ld", e_shoff);
    }
    else {
      assert(0);
    }

    /* obtain the size of section headers */
    fseek(elf_fp, 58, SEEK_SET);
    uint16_t e_shentsize;
    if( fread(&e_shentsize, sizeof(e_shentsize), 1, elf_fp) ) {
      Log("size of section headers : %d", e_shentsize);
    }
    else {
      assert(0);
    }

    /* obtain the number of section headers */
    uint16_t e_shnum;
    if( fread(&e_shnum, sizeof(e_shnum), 1, elf_fp) ) {
      Log("number oof section headers : %d", e_shnum);
    }
    else {
      assert(0);
    }

    /* obtain the section header string table index */
    uint16_t e_shstrndx;
    if( fread(&e_shstrndx, sizeof(e_shstrndx), 1, elf_fp) ) {
      Log( "Section header string table index : %d", e_shstrndx );
    }
    else {
      assert(0);
    }

    fseek(elf_fp, e_shoff, SEEK_SET);
    Elf64_Shdr elf_shd[e_shnum];
    char sh_name[e_shnum][20];
    int i;
    for(i=0; i<e_shnum; i++) {
      if (fread(&elf_shd[i].sh_name     , 4, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_type     , 4, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_flags    , 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_addr     , 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_offset   , 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_size     , 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_link     , 4, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_info     , 4, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_addralign, 8, 1, elf_fp) );
      if (fread(&elf_shd[i].sh_entsize  , 8, 1, elf_fp) );
    }
    Elf64_Off shstrtab_off = elf_shd[e_shstrndx].sh_offset + 1;
   // Log("e_shstrndx.sh_offset = %lx", shstrtab_off);
   // Log("e_strtab.sh_offset = %lx", elf_shd[e_shstrndx-1].sh_offset);
   

    i = 0;
    int j = 0;

    char buf = '0';
    for(i=0; i<e_shnum; i++) {
      fseek(elf_fp, shstrtab_off+elf_shd[i].sh_name, SEEK_SET);
      while( buf != '\0' ) {
        buf = (char)fgetc(elf_fp);
        sh_name[i][j] = buf;
        j++;
      }
      printf("[%d] = %s\n",i, sh_name[i]);
    }
    

  }
  Log("Elf is read from %s", elf_file ? elf_file : "none");
  return;
}


void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Read the elf file. */
  read_elf(elf_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
