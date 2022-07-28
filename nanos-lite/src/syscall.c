#include <common.h>
#include "syscall.h"
#include "fs.h"

uintptr_t sys_brk( uintptr_t new_break ) {

  return 0 ;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_exit  : //printf("is in sys_exit \n"); 
                     halt(a[1]) ;  
                     c->GPRx = 0 ;
                     break;

    case SYS_yield : //printf("is in sys_yield\n"); 
                     yield() ; 
                     c->GPRx = 0  ;
                     break  ;

    case SYS_open  : //printf("is in sys_open\n");
                     c->GPRx = fs_open( (char *)a[1], (int)a[2], (int)a[3] );
                     break;

    case SYS_read  : //printf("is in sys_read\n");
                     c->GPRx = fs_read( (int)a[1], (void *)a[2], a[3] );
                     break;

    case SYS_write : //printf("is in sys_write\n"); 
                     //printf("a[1] = %x, a[2] = %x, a[3] = %x\n");
                     c->GPRx = fs_write((int)a[1], (void *)a[2], a[3] ) ;
                     break;

    case SYS_close : //printf("is in sys_close\n");
                     c->GPRx = fs_close( (int)a[1] );
                     break;

    case SYS_lseek : //printf("is in sys_lseek\n");
                     c->GPRx = fs_lseek( (int)a[1], a[2], (int)a[3] );
                     break;

    case SYS_brk   : c->GPRx = sys_brk( a[1] );  //used in malloc
                     break;

    case  -1       : //printf(" here is_yield \n");  
                     c->GPRx = 0 ;
                     break;

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
