module imm_gen (
  input   wire  [31:0]  instr  ,
  input   wire          I_type ,
  input   wire          S_type ,
  input   wire          U_type ,
  input   wire          B_type ,
  input   wire          J_type ,
  output  wire  [63:0]  imm   
);

  assign imm = ( {64{I_type}} & { {53{instr[31]}},instr[30:20] } ) | 
               ( {64{S_type}} & { {53{instr[31]}},instr[30:25],instr[11:7] } ) |
               ( {64{B_type}} & { {52{instr[31]}},instr[7], instr[30:25],instr[11:8],1'b0 } ) |
               ( {64{U_type}} & { {33{instr[31]}},instr[30:12], 12'b0 } ) |
               ( {64{J_type}} & { {44{instr[31]}},instr[19:12], instr[20], instr[30:21], 1'b0 } ) ; 

endmodule

