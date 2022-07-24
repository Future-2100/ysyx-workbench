#include <isa.h>

CPU_CSR csr = { };

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  csr.mepc = epc;
  csr.mcause = NO;
  
  return csr.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

word_t isa_csrrw( word_t src1, vaddr_t csr_index ) {
  word_t dest_value;
  switch (csr_index) {
    case MTVEC_ADDR   : 
      dest_value = csr.mtvec ;
      csr.mtvec = src1 ;  
      break;
    case MEPC_ADDR    : 
      dest_value = csr.mepc ;
      csr.mepc  = src1 ;  
      break;
    case MCAUSE_ADDR  : 
      dest_value = csr.mcause ;
      csr.mcause= src1 ;  
      break;
    default : Assert ( 0, "Other CSR register" ); break;
  }
  return  dest_value ;

}
