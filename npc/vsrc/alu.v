module alu
#(
  parameter DW = 64
) (
  input   wire            rs1_en    ,
  input   wire             pc_en    ,
  input   wire  [DW-1:0]  rs1_data  ,
  input   wire  [DW-1:0]   pc_data  ,

  input   wire            rs2_en    ,
  input   wire            imm_en    ,
  input   wire  [DW-1:0]  rs2_data  ,
  input   wire  [DW-1:0]  imm_data  ,

  input   wire             lgc_en   ,
  input   wire  [3:0]      lgc_op   , //regular option
  input   wire            mlgc_en   ,
  input   wire  [2:0]     mlgc_op   , //M Standard Extension
  input   wire           wmlgc_en   ,
  input   wire  [3:0]    wmlgc_op   , //M Standard Extension
  input   wire            wlgc_en   ,
  input   wire  [4:0]     wlgc_op   ,
  input   wire              br_en   ,
  input   wire  [2:0]       br_op   , //branch  option

  output  wire  [DW-1:0]  result    ,
  output  wire            br_asrt   ,
  output  wire            zero      

);

`define ADD   4'b0000 
`define SUB   4'b1000
`define SLL   4'b0001
`define SLT   4'b0010
`define SLTU  4'b0011
`define XOR   4'b0100
`define SRL   4'b0101
`define SRA   4'b1101
`define OR    4'b0110
`define AND   4'b0111
`define LUI   4'b1111

`define ADDW  5'b10000
`define SLLW  5'b10001
`define SRLW  5'b10101
`define SRAW  5'b11101
`define SUBW  5'b11000

`define BEQ   3'b000  
`define BNE   3'b001
`define BLT   3'b100
`define BGE   3'b101
`define BLTU  3'b110
`define BGEU  3'b111

`define MUL    3'b000
`define MULH   3'b001
`define MULHSU 3'b010
`define MULHU  3'b011
`define DIV    3'b100
`define DIVU   3'b101
`define REM    3'b110
`define REMU   3'b111

`define MULW    4'b1000
`define DIVW    4'b1100
`define DIVUW   4'b1101
`define REMW    4'b1110
`define REMUW   4'b1111

  wire signed [DW-1:0] opdata1 = ( {DW{rs1_en}} & rs1_data ) | 
                                 ( {DW{ pc_en}} &  pc_data ) ;

  wire signed [DW-1:0] opdata2 = ( {DW{rs2_en}} & rs2_data ) |
                                 ( {DW{imm_en}} & imm_data ) ;

  wire  unsigned [DW-1:0] uopdata1 = opdata1;
  wire  unsigned [DW-1:0] uopdata2 = opdata2;

  wire  signed [DW/2-1:0] wopdata1 = opdata1[DW/2-1:0] ;
  wire  signed [DW/2-1:0] wopdata2 = opdata2[DW/2-1:0] ;

  wire  unsigned [DW/2-1:0] uwopdata1 = wopdata1;
  wire  unsigned [DW/2-1:0] uwopdata2 = wopdata2;

  assign  zero = ( result == 0 ) ? 1'b1 : 1'b0;

  reg   [DW-1:0]  lgc_result;
  always@(*) begin
    case (lgc_op)
      `ADD    :   lgc_result = opdata1 + opdata2 ; 
      `SUB    :   lgc_result = opdata1 - opdata2 ; 
      `XOR    :   lgc_result = opdata1 ^ opdata2 ; 
      `SLL    :   lgc_result = opdata1  <<  opdata2[5:0]  ; 
      `SRL    :   lgc_result = opdata1  >> opdata2[5:0]  ; 
      `SRA    :   lgc_result = opdata1  >>>  opdata2[5:0]  ; 
      `OR     :   lgc_result = opdata1 | opdata2 ; 
      `AND    :   lgc_result = opdata1 & opdata2 ; 
      `SLT    :   lgc_result = (opdata1  <  opdata2) ? 64'b1 : 64'b0 ; 
      `SLTU   :   lgc_result = (uopdata1 < uopdata2) ? 64'b1 : 64'b0 ; 
      `LUI    :   lgc_result = opdata2  ; 
      default :   lgc_result = {DW{1'b0}};
    endcase
  end

  
  wire  [2*DW-1:0] multu = uopdata1 * uopdata2;
  wire  [2*DW-1:0] multsu= opdata1  * uopdata2;

  reg   [DW-1:0] mlgc_result;
  always@(*) begin
    case(mlgc_op)
      `MUL    :   mlgc_result = opdata1 * opdata2 ;
      `MULH   :   mlgc_result = multu[DW-1:0];
      `MULHSU :   mlgc_result = multsu[2*DW-1:DW] ;
      `MULHU  :   mlgc_result = multu[2*DW-1:DW] ;
      `DIV    :   mlgc_result = opdata1 / opdata2 ;
      `DIVU   :   mlgc_result = uopdata1 / uopdata2 ;
      `REM    :   mlgc_result = opdata1 % opdata2 ;
      `REMU   :   mlgc_result = uopdata1 % uopdata2 ;
      default :   mlgc_result = {DW{1'b0}};
    endcase
  end

  reg  [DW/2-1:0] wmlgc_result ;
  always@(*) begin
    case(wmlgc_op)
      `MULW   :   wmlgc_result = wopdata1  * wopdata2  ;
      `DIVW   :   wmlgc_result = wopdata1  / wopdata2  ;
      `DIVUW  :   wmlgc_result = uwopdata1 / uwopdata2 ;
      `REMW   :   wmlgc_result = wopdata1  % wopdata2  ;
      `REMUW  :   wmlgc_result = uwopdata1 % uwopdata2 ;
      default :   wmlgc_result = {(DW/2){1'b0}} ;
    endcase
  end

  reg [DW/2-1:0] wlgc_result;
  always@(*) begin
    case (wlgc_op) 
      `ADDW   :   wlgc_result = wopdata1 +   wopdata2 ;
      `SLLW   :   wlgc_result = wopdata1 <<  wopdata2[4:0];
      `SRLW   :   wlgc_result = wopdata1 >>  wopdata2[4:0];
      `SRAW   :   wlgc_result = wopdata1 >>> wopdata2[4:0];
      `SUBW   :   wlgc_result = wopdata1 - wopdata2 ;
      default :   wlgc_result = {(DW/2){1'b0}};
    endcase
  end

  assign  result =  ( {DW{ lgc_en }} & lgc_result ) | 
                    ( {DW{wlgc_en }} & { {(DW/2){wlgc_result[DW/2-1]}}, wlgc_result} ) |
                    ( {DW{mlgc_en }} & mlgc_result) |
                    ( {DW{wmlgc_en}} & { {(DW/2){wmlgc_result[DW/2-1]}},wmlgc_result} ) ;

  reg br_result;
  always@(*) begin
    case (br_op)
      `BEQ    :  br_result = (opdata1 == opdata2) ? 1'b1 : 1'b0;
      `BNE    :  br_result = (opdata1 != opdata2) ? 1'b1 : 1'b0;
      `BLT    :  br_result = (opdata1  < opdata2) ? 1'b1 : 1'b0; 
      `BGE    :  br_result = (opdata1 >= opdata2) ? 1'b1 : 1'b0; 
      `BLTU   :  br_result = (uopdata1 < uopdata2)? 1'b1 : 1'b0; 
      `BGEU   :  br_result = (uopdata1 >=uopdata2)? 1'b1 : 1'b0; 
      default :  br_result = 1'b0;
    endcase
  end

  assign br_asrt = br_result & br_en ;


endmodule

