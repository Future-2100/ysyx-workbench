module controlor
#(
  parameter IW = 32 

) (
  input  wire            clk        ,
  input  wire            rstn       ,

  input  wire  [IW-1:0]  instr_in   ,
  output reg   [IW-1:0]  instr_out  ,
  input  wire            instr_en   ,
  output wire            fetch_en   ,
  output wire               pc_ld   ,
  output wire             dnpc_en   ,

  output  wire  wb_en   ,
  output  wire  wb_load ,
  output  wire  wb_pc   ,
  output  wire  wb_alu  ,

  output  wire  I_type,
  output  wire  S_type,
  output  wire  B_type,
  output  wire  U_type,
  output  wire  J_type,

  output  wire  rs1_en  ,
  output  wire   pc_en  ,
  output  wire  rs2_en  ,
  output  wire  imm_en  ,

  output  wire          lgc_en ,
  output  wire  [3:0]   lgc_op ,
  output  wire         wlgc_en ,
  output  wire  [4:0]  wlgc_op ,
  output  wire           br_en ,
  output  wire  [2:0]    br_op ,
  output  wire         mlgc_en ,
  output  wire  [2:0]  mlgc_op ,
  output  wire        wmlgc_en ,
  output  wire  [3:0] wmlgc_op ,
  
  output wire    jal_en ,
  output wire   jalr_en ,

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


wire  [31:0]  instr = instr_out;

assign dnpc_en = ( instr == 32'b0 ) ? 1'b0 : 1'b1 ;

always@(posedge clk) begin
  if(!rstn)
    instr_out <= 32'b0   ;
  else if(instr_en)
    instr_out <= instr_in;
  else
    instr_out <= 32'b0   ;
end

parameter IDLE  = 3'b000;
parameter FETCH = 3'b001;
parameter WAIT  = 3'b010;
parameter EXEC  = 3'b100;


reg [2:0] state_now;
reg [2:0] state_next;
always@(posedge clk) begin
  if(!rstn)
    state_now <= IDLE;
  else
    state_now <= state_next;
end

always@(*) begin
  state_next = IDLE;
  fetch_en   = 1'b0;
  case(state_now)
    IDLE : state_next = FETCH;
    FETCH: begin
           state_next = WAIT ;
           fetch_en   = 1'b1 ;
         end
    WAIT : state_next = ( instr_en ) ? EXEC : WAIT;
    EXEC : state_next = FETCH;
    default : state_next = IDLE;
  endcase
end

always@(posedge clk) begin
  if(!rstn)
    pc_ld <= 1'b0;
  else if (state_now == FETCH)
    pc_ld <= 1'b1;
  else
    pc_ld <= 1'b0;
end


  wire  [6:0] opcode  = instr[6:0] ;

  wire  [2:0] funct3  = instr[14:12];

  wire  [6:0] funct7  = instr[31:25];

  assign  ebreak = ( opcode==7'b1110011 ) & ( funct7==7'b0 ) & ( instr[24:20]==5'b00001 ) ;

  wire       lui_en = ( opcode == 7'b0110111 ) ;
  wire     auipc_en = ( opcode == 7'b0010111 ) ;
  assign     jal_en = ( opcode == 7'b1101111 ) ;
  assign    jalr_en = ( opcode == 7'b1100111 ) ;
  assign      br_en = ( opcode == 7'b1100011 ) ;
  wire      load_en = ( opcode == 7'b0000011 ) ;
  wire     store_en = ( opcode == 7'b0100011 ) ;

  wire     immop_en = ( opcode == 7'b0010011 ) & ( funct3[1:0] != 2'b01 ) ;
  wire     immsf_en = ( opcode == 7'b0010011 ) & ( funct3[1:0] == 2'b01 ) ;
  wire    wimmop_en = ( opcode == 7'b0011011 ) & ( funct3[1:0] != 2'b01 ) ;
  wire    wimmsf_en = ( opcode == 7'b0011011 ) & ( funct3[1:0] == 2'b01 ) ;
  wire      rsop_en = ( opcode == 7'b0110011 ) & ( funct7[0]   == 1'b0  ) ;
  wire     wrsop_en = ( opcode == 7'b0111011 ) & ( funct7[0]   == 1'b0  ) ;
  wire     mrsop_en = ( opcode == 7'b0110011 ) & ( funct7[0]   == 1'b1  ) ;
  wire    wmrsop_en = ( opcode == 7'b0111011 ) & ( funct7[0]   == 1'b1  ) ;

  assign  I_type = jalr_en | load_en | immop_en | immsf_en | wimmop_en | wimmsf_en ;
  assign  S_type = store_en  ;
  assign  B_type = br_en ;
  assign  U_type = lui_en | auipc_en ;
  assign  J_type = jal_en ;
  wire    R_type = rsop_en | wrsop_en | mrsop_en | wmrsop_en ;

  assign  rs1_en = I_type | R_type | S_type | B_type ;
  assign   pc_en = auipc_en | jal_en ;

  assign  rs2_en = R_type | B_type ;
  assign  imm_en = I_type | S_type | U_type | J_type ;

  assign  lgc_op  =  ( {4{auipc_en }} & ( 4'b0000) ) | 
                     ( {4{  lui_en }} & ( 4'b1111) ) |
                     ( {4{ rsop_en }} & { instr[30],funct3 } ) |
                     ( {4{immop_en }} & {    1'b0 ,funct3 } ) | 
                     ( {4{immsf_en }} & { instr[30],funct3 } ) ;

  assign  wlgc_op =  ( {5{wimmop_en}} & ( {1'b1,    1'b0 ,funct3} ) ) |
                     ( {5{wimmsf_en}} & ( {1'b1, instr[30],funct3} ) ) |
                     ( {5{ wrsop_en}} & ( {1'b1, instr[30],funct3} ) ) ;

  assign  mlgc_op = funct3 ;
  assign wmlgc_op = {1'b1, funct3 };

  assign  br_op = funct3 ;

  assign  wlgc_en = wimmop_en | wrsop_en | wimmsf_en ;
  assign   lgc_en =  immop_en |  rsop_en |  immsf_en | auipc_en | lui_en | 
                      jalr_en |   jal_en |   load_en | store_en ;

  assign  mlgc_en =  mrsop_en ;
  assign wmlgc_en = wmrsop_en ;

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

  assign  wb_load = load_en;
  assign  wb_pc   = jal_en | jalr_en ;
  assign  wb_alu  = auipc_en |    lui_en |   rsop_en | immop_en |
                    immsf_en | wimmop_en | wimmsf_en | wrsop_en |
                    mrsop_en | wmrsop_en ;

  assign wb_en = wb_load | wb_pc | wb_alu ;

endmodule


