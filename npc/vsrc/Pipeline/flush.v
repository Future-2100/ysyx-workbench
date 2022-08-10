module flush (
  input   wire    jump_en   ,
  output  wire    flush_nop     
);

  assign  flush_nop = jump_en ;

endmodule
