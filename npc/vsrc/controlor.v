module controlor (
  input   wire  [31:0]  inst    ,

  output  wire          imm_en  ,
  output  wire          I_type  ,
  output  wire          wen     ,

  output  wire  [3:0]   alu_op  ,
  output  wire          ebreak 

);

  wire  [6:0] opcode = inst[6:0] ;
  wire  [2:0] funct3 = inst[14:12] ;
  wire  [6:0] funct7 = inst[31:25];

  assign  I_type = ( opcode == 7'b0010011 );
  assign  alu_op = ( {4{I_type}} & {1'b0,funct3} ) | 
                   ( 4'b0 ) ;
  assign wen = I_type ;
  assign  ebreak = ( opcode==7'b1110011 ) & ( inst[20]==1'b1 ) ;
  assign  imm_en = I_type;

  initial begin
    if( inst == inst) ;
    if( funct7 == funct7 ) ;
  end

endmodule

