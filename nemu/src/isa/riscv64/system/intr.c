#include <isa.h>


vaddr_t isa_mret() {
  return cpu.mepc ;

}

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.mepc = epc;
  cpu.mcause = NO;
  
  return cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}


word_t isa_csrrw( int src1, vaddr_t csr_index ) {
  printf("cpu.gpr[%d] = %lx, csr_index = %lx\n", src1, cpu.gpr[src1], csr_index );
  word_t dest_value;
  switch (csr_index) {
    case MTVEC_ADDR   : 
      dest_value = cpu.mtvec ;
      cpu.mtvec = src1 ;  
      break;
    case MEPC_ADDR    : 
      dest_value = cpu.mepc ;
      cpu.mepc  = src1 ;  
      break;
    case MCAUSE_ADDR  : 
      dest_value = cpu.mcause ;
      cpu.mcause= src1 ;  
      break;
    case MSTATUS_ADDR :
      dest_value = cpu.mstatus ;
      cpu.mstatus = cpu.gpr[src1] ;
      break;
    default : Assert ( 0, "isa_csrrw : no index = 0x%lx",csr_index ); break;
  }
  return  dest_value ;

}

word_t isa_csrrc( word_t src1, vaddr_t csr_index ) {
  word_t dest_value;
  switch (csr_index) {
    case MTVEC_ADDR   : 
      dest_value = cpu.mtvec ;
      cpu.mtvec = (~src1) & cpu.mtvec ;  
      break;
    case MEPC_ADDR    : 
      dest_value = cpu.mepc ;
      cpu.mepc  = (~src1) & cpu.mepc ;  
      break;
    case MCAUSE_ADDR  : 
      dest_value = cpu.mcause ;
      cpu.mcause=  (~src1) & cpu.mcause ;   
      break;
    case MSTATUS_ADDR :
      dest_value = cpu.mstatus ;
      cpu.mstatus = (~src1) & cpu.mstatus ;  
      break;
    default : Assert ( 0, "isa_csrrc : no index = 0x%lx",csr_index ); break;
  }
  return  dest_value ;

}

word_t isa_csrrs( word_t src1, vaddr_t csr_index ) {
  word_t dest_value;
  switch (csr_index) {
    case MTVEC_ADDR   : 
      dest_value = cpu.mtvec ;
      cpu.mtvec = src1 | cpu.mtvec ;  
      break;
    case MEPC_ADDR    : 
      dest_value = cpu.mepc ;
      cpu.mepc  = src1 | cpu.mepc ;  
      break;
    case MCAUSE_ADDR  : 
      dest_value = cpu.mcause ;
      cpu.mcause= src1 | cpu.mcause ;  
      break;
    case MSTATUS_ADDR :
      dest_value = cpu.mstatus ;
      cpu.mstatus = src1 | cpu.mstatus ;
      break;
    default : Assert ( 0, "isa_csrrs : no index = 0x%lx",csr_index ); break;
  }
  return  dest_value ;

}
