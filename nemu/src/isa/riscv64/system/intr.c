#include <isa.h>


vaddr_t isa_mret() {
  //cpu.mstatus = 0xa00001800;
  return cpu.mepc + 4 ;

}

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.mepc   = epc;
  cpu.mcause = NO ;
  
  //printf("raise_intr :pc = %lx, mtvec = %lx, mepc = %lx, mcause = %lx, mstatus = %lx \n",cpu.pc, cpu.mtvec, cpu.mepc, cpu.mcause, cpu.mstatus );
  return cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}


//riscv64_CPU_State
word_t isa_csrrw( int src1, vaddr_t csr_index ) {
  //printf("cpu.gpr[%d] = %lx, csr_index = %lx\n", src1, cpu.gpr[src1], csr_index );
  word_t dest_value;
  switch (csr_index) {
    case MTVEC_ADDR   : 
      dest_value = cpu.mtvec ;
      cpu.mtvec = cpu.gpr[src1] ;  
      break;
    case MEPC_ADDR    : 
      dest_value = cpu.mepc ;
      cpu.mepc  = cpu.gpr[src1] ;  
      break;
    case MCAUSE_ADDR  : 
      dest_value = cpu.mcause ;
      cpu.mcause= cpu.gpr[src1] ;  
      break;
    case MSTATUS_ADDR :
      dest_value = cpu.mstatus ;
      cpu.mstatus = cpu.gpr[src1] ;
      break;
    default : Assert ( 0, "isa_csrrw : no index = 0x%lx",csr_index ); break;
  }
  //printf("cpu.mtvec = %lx\n",cpu.mtvec);
  //printf("csrrw : csr_index = %lx , mtvec = %lx, mepc = %lx, mcause = %lx, mstatus = %lx \n",csr_index , cpu.mtvec, cpu.mepc, cpu.mcause, cpu.mstatus );
  return  dest_value ;

}

word_t isa_csrrc( int src1, vaddr_t csr_index ) {
  word_t dest_value;
  switch (csr_index) {
    case MTVEC_ADDR   : 
      dest_value = cpu.mtvec ;
      cpu.mtvec = (~cpu.gpr[src1]) & cpu.mtvec ;  
      break;
    case MEPC_ADDR    : 
      dest_value = cpu.mepc ;
      cpu.mepc  = (~cpu.gpr[src1]) & cpu.mepc ;  
      break;
    case MCAUSE_ADDR  : 
      dest_value = cpu.mcause ;
      cpu.mcause=  (~cpu.gpr[src1]) & cpu.mcause ;   
      break;
    case MSTATUS_ADDR :
      dest_value = cpu.mstatus ;
      cpu.mstatus = (~cpu.gpr[src1]) & cpu.mstatus ;  
      break;
    default : Assert ( 0, "isa_csrrc : no index = 0x%lx",csr_index ); break;
  }
 // printf("csrrc : csr_index = %lx , mtvec = %lx, mepc = %lx, mcause = %lx, mstatus = %lx \n",csr_index , cpu.mtvec, cpu.mepc, cpu.mcause, cpu.mstatus );
  return  dest_value ;

}

word_t isa_csrrs( int src1, vaddr_t csr_index ) {
  //printf("cpu.gpr[%d] = %lx, csr_index = %lx\n", src1, cpu.gpr[src1], csr_index );
  word_t dest_value;
  switch (csr_index) {
    case MTVEC_ADDR   : 
      dest_value = cpu.mtvec ;
      cpu.mtvec = cpu.gpr[src1] | cpu.mtvec ;  
      break;
    case MEPC_ADDR    : 
      dest_value = cpu.mepc ;
      cpu.mepc  = cpu.gpr[src1] | cpu.mepc ;  
      break;
    case MCAUSE_ADDR  : 
      dest_value = cpu.mcause ;
      cpu.mcause = cpu.gpr[src1] | cpu.mcause ;  
      break;
    case MSTATUS_ADDR :
      dest_value = cpu.mstatus ;
      cpu.mstatus = cpu.gpr[src1] | cpu.mstatus ;
      break;
    default : Assert ( 0, "isa_csrrs : no index = 0x%lx",csr_index ); break;
  }
  //printf("csrrs : csr_index = %lx , mtvec = %lx, mepc = %lx, mcause = %lx, mstatus = %lx \n",csr_index , cpu.mtvec, cpu.mepc, cpu.mcause, cpu.mstatus );
  return  dest_value ;

}
