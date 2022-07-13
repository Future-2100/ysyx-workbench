module imm_gen
(
  input   wire          I_type ,
  input   wire  [31:0]  inst   ,

  output  wire  [63:0]  imm

);

  wire  [63:0] imm_I = { {32{inst[31]}}, {21{inst[31]}}, inst[30:25], inst[24:21], inst[20] } ;

  assign  imm = {64{I_type}} & imm_I ;

  initial begin
    if( inst[19:0] == inst[19:0] ) ;
  end


endmodule

