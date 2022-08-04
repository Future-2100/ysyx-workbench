module controlor
#(
  parameter IW = 32 

) (
  input  wire            clk        ,
  input  wire            rstn       ,

  output  reg             ifu_ARVALID  ,
  input   wire            ifu_ARREADY  ,
  output  reg   [63:0]    ifu_ARADDR   ,
  output  reg   [2:0]     ifu_ARPORT   ,

  input   wire            ifu_RVALID   ,
  output  wire            ifu_RREADY   ,
  input   wire  [63:0]    ifu_RDATA    ,
  input   wire  [1:0]     ifu_RRESP    ,
  
  input  wire   [63:0]    dnxt_pc    ,
  output wire   [IW-1:0]  instr      ,
  output wire             instr_en   ,
  output wire                pc_ld   ,

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

assign  pc_ld = ( ifu_ARVALID && ifu_ARREADY ) ;

assign  instr_en   = ( ifu_RVALID  && ifu_RREADY && (ifu_RRESP == 2'b00) ) ? 1'b1 : 1'b0 ;
assign  ifu_RREADY = 1'b1;
assign  instr      =  ifu_RDATA[31:0] ;

parameter IDLE  = 2'b00;
parameter FETCH = 2'b01;
parameter EXEC  = 2'b10;

reg [1:0] cpu_nstate;
reg [1:0] cpu_cstate;
always@(posedge clk) begin
  if(!rstn)
    cpu_cstate <= IDLE;
  else
    cpu_cstate <= cpu_nstate;
end

always@(*) begin
  ifu_ARPORT  =  3'b0 ;
  ifu_ARADDR  = 64'b0 ;
  ifu_ARVALID =  1'b0 ;
  cpu_nstate  =  IDLE ;
  case (cpu_cstate)
    IDLE  : cpu_nstate = FETCH;
    FETCH : begin
      ifu_ARPORT  = 3'b100 ;
      ifu_ARADDR  = dnxt_pc;
      ifu_ARVALID = 1'b1   ;
      cpu_nstate  = ( ifu_ARREADY ) ? EXEC : FETCH;
    end
    EXEC  : begin
      if( ifu_RVALID && ifu_RRESP==2'b00 ) begin
        ifu_ARPORT  = 3'b100         ;
        ifu_ARADDR  = dnxt_pc        ;
        ifu_ARVALID = 1'b1           ;
        cpu_nstate  = ( ifu_ARREADY ) ? EXEC : FETCH;
      end
      else begin
        cpu_nstate  =  EXEC          ;
      end
    end
    default : cpu_nstate = FETCH ;
  endcase
end



  wire  [6:0] opcode  = instr[6:0] ;

  wire  [2:0] funct3  = instr[14:12];

  wire  [6:0] funct7  = instr[31:25];

  assign  ebreak = ( opcode==7'b1110011 ) & ( funct7==7'b0 ) & ( instr[24:20]==5'b00001 ) ;

  wire       lui_en = ( opcode == 7'b0110111 )  ;
  wire     auipc_en = ( opcode == 7'b0010111 )  ;
  assign     jal_en = ( opcode == 7'b1101111 )  ;
  assign    jalr_en = ( opcode == 7'b1100111 )  ;
  assign      br_en = ( opcode == 7'b1100011 )  ;
  wire      load_en = ( opcode == 7'b0000011 )  & instr_en ;
  wire     store_en = ( opcode == 7'b0100011 )  & instr_en ;

  wire     immop_en = ( opcode == 7'b0010011 ) & ( funct3[1:0] != 2'b01 )  ;
  wire     immsf_en = ( opcode == 7'b0010011 ) & ( funct3[1:0] == 2'b01 )  ;
  wire    wimmop_en = ( opcode == 7'b0011011 ) & ( funct3[1:0] != 2'b01 )  ;
  wire    wimmsf_en = ( opcode == 7'b0011011 ) & ( funct3[1:0] == 2'b01 )  ;
  wire      rsop_en = ( opcode == 7'b0110011 ) & ( funct7[0]   == 1'b0  )  ;
  wire     wrsop_en = ( opcode == 7'b0111011 ) & ( funct7[0]   == 1'b0  )  ;
  wire     mrsop_en = ( opcode == 7'b0110011 ) & ( funct7[0]   == 1'b1  )  ;
  wire    wmrsop_en = ( opcode == 7'b0111011 ) & ( funct7[0]   == 1'b1  )  ;

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

  assign  lb  = load_en & ( funct3 == 3'b000 )  ;
  assign  lh  = load_en & ( funct3 == 3'b001 )  ;
  assign  lw  = load_en & ( funct3 == 3'b010 )  ;
  assign  ld  = load_en & ( funct3 == 3'b011 )  ;
  assign  lbu = load_en & ( funct3 == 3'b100 )  ;
  assign  lhu = load_en & ( funct3 == 3'b101 )  ;
  assign  lwu = load_en & ( funct3 == 3'b110 )  ;

  assign  sb  = store_en & ( funct3 == 3'b000 ) ;
  assign  sh  = store_en & ( funct3 == 3'b001 ) ;
  assign  sw  = store_en & ( funct3 == 3'b010 ) ;
  assign  sd  = store_en & ( funct3 == 3'b011 ) ;

  assign  wb_load = load_en;
  assign  wb_pc   = jal_en | jalr_en ;
  assign  wb_alu  = auipc_en |    lui_en |   rsop_en | immop_en |
                    immsf_en | wimmop_en | wimmsf_en | wrsop_en |
                    mrsop_en | wmrsop_en ;

  assign wb_en = ( wb_load | wb_pc | wb_alu ) & instr_en ;

endmodule


