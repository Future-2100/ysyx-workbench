module alu (
  input   wire  [63:0]  rsdata1,
  input   wire          imm_en ,
  input   wire  [63:0]  rsdata2,
  input   wire  [63:0]  imm    ,

  input   wire  [3:0]   alu_op,

  output  wire  [63:0]  result,
  output  wire          zero  

);

`define ADD 4'b0000

  wire  [63:0]  opdata1 = rsdata1;
  wire  [63:0]  opdata2 = imm_en ?  imm : rsdata2 ;
  
  assign  result = ( {64{alu_op==`ADD}} & ( opdata1 + opdata2 ) ) | 
                   ( 64'b0 ) ;

  assign  zero = ( result == 64'b0 ) ;

endmodule

