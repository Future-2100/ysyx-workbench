#include <cpu/cpu.h>
#include <trace.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <../src/monitor/sdb/sdb.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 30
#define NR_IRING 20
<<<<<<< HEAD

extern FUNCT function[0];
int func_num;

typedef struct iring {
  char iringbuf[128] ;
  struct iring *next;
  bool used;
} IRING ;

static IRING iring_pool[NR_IRING] = {};

static IRING *iring_head;
static IRING *iring_end ;

void init_iring_pool() {
  int i;
  for( i=0; i<NR_IRING; i++) {
    iring_pool[i].next = ( i==NR_IRING-1 ? iring_pool : &iring_pool[i+1] );
    iring_pool[i].used = false;
  }
  iring_head = iring_pool;
  iring_end  = iring_pool + NR_IRING-1 ;
  
}

=======
>>>>>>> tracer-ysyx2204

extern FUNCT function[0];
int func_num;

typedef struct iring {
  char iringbuf[128] ;
  struct iring *next;
  bool used;
} IRING ;

static IRING iring_pool[NR_IRING] = {};

static IRING *iring_head;
static IRING *iring_end ;

void init_iring_pool() {
  int i;
  for( i=0; i<NR_IRING; i++) {
    iring_pool[i].next = ( i==NR_IRING-1 ? iring_pool : &iring_pool[i+1] );
    iring_pool[i].used = false;
  }
  iring_head = iring_pool;
  iring_end  = iring_pool + NR_IRING-1 ;
  
}


CPU_state cpu = { .mstatus = 0xa00001800 };
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT
  if(head_expr()==true) {
    nemu_state.state = NEMU_STOP;
  }
#endif

}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  /* update the s->logbuf */

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
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;


  //record the disassemble information in s->logbuf
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
  
#ifdef CONFIG_IRINGTRACE
  //record the information in iringbuf
  strcpy( iring_head->iringbuf, s->logbuf );
  iring_head->used = true;
  iring_end = iring_head;
  iring_head = iring_head->next;
#endif

#ifdef CONFIG_FTRACE
  //record the information of function call and ret
  if( s->isa.inst.val==0x8067 ) {
    word_t ret_addr = cpu.gpr[1];
    bool match = false;
    for(i = 0; i < func_num; i++) {
      if( (ret_addr >= function[i].addr_sta) && (ret_addr < function[i].addr_end) ) {
        printf("%lx : ret: [%s]\n", s->pc,function[i].name);
        match = true;
        break;
      }
    }

    if (match == false)
      printf("%lx : ret [???]\n", s->pc);
  }

  int rs1 = BITS(s->isa.inst.val, 19, 15);
  //int rd  = BITS(s->isa.inst.val, 11, 7 );

  uint32_t ins = s->isa.inst.val;
  word_t jal_offset = (SEXT ( BITS(ins,31,31),1) << 20) | (BITS(ins,19,12) << 12) | (BITS(ins,20,20) << 11) | (BITS(ins,30,25) << 5) | (BITS(ins,24,21) << 1);

  word_t jalr_offset =  SEXT(BITS(ins, 31, 20), 12);
  

#define JAL_JUDGE (s->isa.inst.val&0xfff)==0xef
  if( JAL_JUDGE ) {
    word_t  jal_addr =  jal_offset + s->pc;
    bool match = false;
    for(i = 0; i < func_num; i++) {
      if( (jal_addr >= function[i].addr_sta) && (jal_addr < function[i].addr_end) ) {
        printf("%lx : call [%s @%lx]\n", s->pc, function[i].name, jal_addr);
        match = true;
        break;
      }
    }
    if ( match == false )
      printf("%lx : call [??? @%lx]\n", s->pc, jal_addr);
  }
 
#define JALR_JUDGE (s->isa.inst.val&0x7fff)==0xe7
  if( JALR_JUDGE ) {
    word_t jalr_addr = jalr_offset + cpu.gpr[rs1]; 
    bool match = false;
    for(i = 0; i < func_num; i++) {
      if( (jalr_addr >= function[i].addr_sta) && (jalr_addr < function[i].addr_end) ) {
        printf("%lx : call [%s @%lx]\n", s->pc, function[i].name, jalr_addr);
        match = true;
        break;
      }
  }
    if ( match == false )
      printf("%lx : call [??? @%lx]\n", s->pc, jalr_addr);
  }
#endif
  
#endif

}

void itrace_display(){
  IRING *p = iring_head; 

  for( int i=0; i<NR_IRING-1; i++  ) {
    if( p->used == true ) {
      printf("    %s\n",p->iringbuf);
    }
      p = p->next;
  }
  printf("--> %s\n",p->iringbuf);

}


static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) {
#ifdef CONFIG_IRINGTRACE
      itrace_display();
#endif
      break;
    }
    IFDEF(CONFIG_DEVICE, device_update());
  }
}


static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");

}

void assert_fail_msg() {
  isa_reg_display();
#ifdef CONFIG_ITRACE
  itrace_display();
#endif
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
