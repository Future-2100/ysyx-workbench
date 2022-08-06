module branch_pc_adder(
  input   wire  [63:0]  imm_B      ,
  input   wire  [63:0]  pc         ,

  output  wire  [63:0]  branch_pc

);

wire  [64:0]  sum ;

assign  sum = $signed({ imm_B[63],imm_B }) + $signed({ 1'b0, pc }) ;

assign branch_pc = sum[63:0];

endmodule

