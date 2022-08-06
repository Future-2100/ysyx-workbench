module flush (
  input   wire    mmu_jump_en   ,
  input   wire    mmu_branch_en ,

  output  wire    flush_nop     
);

  assign  flush_nop = (mmu_jump_en | mmu_branch_en);

endmodule
