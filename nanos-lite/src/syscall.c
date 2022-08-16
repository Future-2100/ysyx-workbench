#include <common.h>
#include "syscall.h"
#include "fs.h"
#include <sys/time.h>
#include "proc.h"

//uintptr_t sys_brk( uintptr_t new_break ); 

/*{

  return 0 ;
}
*/

void naive_uload(PCB *pcb, const char *filename);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_execve:
#ifdef CONFIG_STRACE
                     printf("sys_exit : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     naive_uload(NULL, (char *)a[1]);
                     break;

    case SYS_exit  : 
#ifdef CONFIG_STRACE 
                     printf("sys_exit : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     //halt(a[1]) ;  
                     char *buf = "/bin/menu";
                     a[1] = (uintptr_t)buf;
                     naive_uload(NULL,(char *)a[1]);
                     c->GPRx = 0 ;
                     break;

    case SYS_yield : 
#ifdef CONFIG_STRACE 
                     printf("sys_yield : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     yield() ; 
                     c->GPRx = 0  ;
                     break  ;

    case SYS_open  : 
#ifdef CONFIG_STRACE 
                     printf("sys_open : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     c->GPRx = fs_open( (char *)a[1], (int)a[2], (int)a[3] );
                     break;

    case SYS_read  : 
#ifdef CONFIG_STRACE 
                     printf("sys_read : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     c->GPRx = fs_read( (int)a[1], (void *)a[2], a[3] );
                     break;

    case SYS_write : 
#ifdef CONFIG_STRACE 
                     printf("sys_write : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     c->GPRx = fs_write((int)a[1], (void *)a[2], a[3] ) ;
                     break;

    case SYS_close : 
#ifdef CONFIG_STRACE 
                     printf("sys_close : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     c->GPRx = fs_close( (int)a[1] );
                     break;

    case SYS_lseek : 
#ifdef CONFIG_STRACE 
                     printf("sys_lseek : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     c->GPRx = fs_lseek( (int)a[1], a[2], (int)a[3] );
                     break;

    case SYS_brk   : 
#ifdef CONFIG_STRACE 
                     printf("sys_brk : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     //c->GPRx = sys_brk( a[1] );  //used in malloc
                     c->GPRx = 0;
                     break;

    case SYS_gettimeofday :
#ifdef CONFIG_STRACE
                     printf("sys_gettimeofday : a[1] = %x, a[2] = %x, a[3] = %x\n", a[1], a[2], a[3] );
#endif
                     struct timeval *tv = (struct timeval *)a[1];
                     uint64_t res = io_read(AM_TIMER_UPTIME).us;
                     tv->tv_sec = res / 1000000;
                     res = res % 1000000;
                     tv->tv_usec = res / 1000;
                     c->GPRx = 0;
                     break;


    case  -1       : printf(" here is_yield \n");  
                     c->GPRx = 0 ;
                     break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
