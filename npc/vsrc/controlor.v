module controlor
#(
  parameter IW = 32 

) (

  input wire  [IW-1:0]  inst  ,

  output wire     jal_en ,
  output wire    jalr_en ,
  output wire  branch_en ,
  output wire    load_en ,

  output  wire  wb_en ,

  output  wire  I_type,
  output  wire  S_type,
  output  wire  B_type,
  output  wire  U_type,
  output  wire  J_type,

  output  wire  auipc_en,
  output  wire  imm_en,

  output  wire  [3:0] rglr_op ,
  output  wire  [4:0] wrglr_op,
  output  wire  [2:0] branch_op ,

  output  wire  op_en   ,
  output  wire  wop_en  ,

  output  wire  lb      ,
  output  wire  lh      ,
  output  wire  lw      ,
  output  wire  ld      ,
  output  wire  lbu     ,
  output  wire  lhu     ,
  output  wire  lwu     ,

  output  wire  sb      ,
  output  wire  sh      ,
  output  wire  sw      ,
  output  wire  sd      ,

  output  wire  ebreak
);

  initial begin
    if ( inst == inst ) ;
  end


  wire  [4:0] opcode = inst[6:2] ;

  wire  [2:0] funct3  = inst[14:12];

  wire  [6:0] funct7  = inst[31:25];

  assign  ebreak = ( opcode==5'b11100 ) & ( funct7==7'b0 ) & ( inst[24:20]==5'b00001 ) ;

  wire       lui_en = ( opcode == 5'b01101 ) ;
  assign   auipc_en = ( opcode == 5'b00101 ) ;
  assign     jal_en = ( opcode == 5'b11011 ) ;
  assign    jalr_en = ( opcode == 5'b11001 ) ;
  assign  branch_en = ( opcode == 5'b11000 ) ;
  assign    load_en = ( opcode == 5'b00000 ) ;
  wire     store_en = ( opcode == 5'b01000 ) ;

  wire     immop_en = ( opcode == 5'b00100 ) & ( funct3[1:0] != 2'b01 ) ;
  wire     immmv_en = ( opcode == 5'b00100 ) & ( funct3[1:0] == 2'b01 ) ;
  wire      rsop_en = ( opcode == 5'b01100 ) ;
  wire    immopw_en = ( opcode == 5'b00110 ) ;
  wire     rsopw_en = ( opcode == 5'b01110 ) ;

  assign  I_type = jalr_en | load_en | immop_en | immopw_en ;
  assign  S_type = store_en  ;
  assign  B_type = branch_en ;
  assign  U_type = lui_en | auipc_en ;
  assign  J_type = jal_en ;

  assign  wb_en = lui_en | auipc_en | jal_en  | jalr_en   | 
                 load_en | immop_en | rsop_en | immopw_en | rsopw_en ;

  assign  imm_en = immop_en | immopw_en | auipc_en ;

  assign  rglr_op =  ( {4{auipc_en}} & ( 4'b0000) ) | 
                     ( {4{ lui_en }} & ( 4'b1111) ) |
                     ( {4{rsop_en }} & { inst[30],funct3 } ) |
                     ( {4{immop_en}} & { 1'b0, funct3 }) | 
                     ( {4{immmv_en}} & { inst[30],funct3 } ) ;

  assign  wrglr_op = { (immopw_en | rsopw_en), inst[30], funct3 } ;

  assign  branch_op = funct3 ;

  assign  wop_en = immopw_en | rsopw_en ;
  assign   op_en =  immop_en | rsop_en | auipc_en | lui_en ;

  assign  lb  = load_en & ( funct3 == 3'b000 ) ;
  assign  lh  = load_en & ( funct3 == 3'b001 ) ;
  assign  lw  = load_en & ( funct3 == 3'b010 ) ;
  assign  ld  = load_en & ( funct3 == 3'b011 ) ;
  assign  lbu = load_en & ( funct3 == 3'b100 ) ;
  assign  lhu = load_en & ( funct3 == 3'b101 ) ;
  assign  lwu = load_en & ( funct3 == 3'b110 ) ;

  assign  sb  = store_en & ( funct3 == 3'b000 ) ;
  assign  sh  = store_en & ( funct3 == 3'b001 ) ;
  assign  sw  = store_en & ( funct3 == 3'b010 ) ;
  assign  sd  = store_en & ( funct3 == 3'b011 ) ;


endmodule


