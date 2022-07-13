module alu
#(
  parameter DW = 64
) (
  input   wire  [DW-1:0]  rs1       ,
  input   wire  [DW-1:0]  pc        ,
  input   wire  [DW-1:0]  rs2       ,
  input   wire  [DW-1:0]  imm       ,

  input   wire            imm_en    ,
  input   wire            auipc_en  , 
  input   wire  [3:0]     rglr_op   , //regular option
  input   wire  [4:0]    wrglr_op   ,
  input   wire  [2:0]   branch_op   , //branch  option

  input   wire          branch_en   ,
  input   wire            wop_en    ,
  input   wire             op_en    ,

  output  wire  [DW-1:0]  result    ,
  output  wire            zero      ,
  output  wire            brch_asrt 

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

  wire signed [DW-1:0] opdata1 = (auipc_en)? pc  : rs1 ;
  wire signed [DW-1:0] opdata2 = (imm_en)  ? imm : rs2 ;
  wire  unsigned [DW-1:0] uopdata1 = opdata1;
  wire  unsigned [DW-1:0] uopdata2 = opdata2;

  wire  signed [DW/2-1:0] wopdata1 = opdata1[DW/2-1:0] ;
  wire  signed [DW/2-1:0] wopdata2 = opdata2[DW/2-1:0] ;


  assign  zero = ( result == 0 ) ? 1'b1 : 1'b0;

  reg   [DW-1:0]  rglr_rslt;
  always@(*) begin
    case (rglr_op)
      `ADD    :   rglr_rslt = opdata1 + opdata2 ; 
      `SUB    :   rglr_rslt = opdata1 - opdata2 ; 
      `XOR    :   rglr_rslt = opdata1 ^ opdata2 ; 
      `SLL    :   rglr_rslt = opdata1  << opdata2[5:0]  ; 
      `SRL    :   rglr_rslt = opdata1 <<< opdata2[5:0]  ; 
      `SRA    :   rglr_rslt = opdata1  >> opdata2[5:0]  ; 
      `OR     :   rglr_rslt = opdata1 | opdata2 ; 
      `AND    :   rglr_rslt = opdata1 & opdata2 ; 
      `SLT    :   rglr_rslt = (opdata1 < opdata2) ? 64'b1 : 64'b0 ; 
      `SLTU   :   rglr_rslt = (uopdata1 < uopdata2) ? 64'b1 : 64'b0 ; 
      `LUI    :   rglr_rslt = opdata1  ; 
      default :   rglr_rslt = {DW{1'b0}};
    endcase
  end

  reg [DW/2-1:0] wrglr_rslt;
  always@(*) begin
    case (wrglr_op) 
      `ADDW   :   wrglr_rslt = wopdata1 +   wopdata2 ;
      `SLLW   :   wrglr_rslt = wopdata1 <<  wopdata2[4:0];
      `SRLW   :   wrglr_rslt = wopdata1 <<< wopdata2[4:0];
      `SRAW   :   wrglr_rslt = wopdata1 >>  wopdata2[4:0];
      `SUBW   :   wrglr_rslt = wopdata1 - wopdata2 ;
      default :   wrglr_rslt = {(DW/2){1'b0}};
    endcase
  end

  assign  result =  ( {DW{ op_en  }} & rglr_rslt ) | 
                    ( {DW{wop_en  }} & { {(DW/2){wrglr_rslt[DW/2-1]}}, wrglr_rslt} ) ;

  reg brch_value;
  always@(*) begin
    case (branch_op)
      `BEQ    :  brch_value = (opdata1 == opdata2) ? 1'b1 : 1'b0;
      `BNE    :  brch_value = (opdata1 != opdata2) ? 1'b1 : 1'b0;
      `BLT    :  brch_value = (opdata1  < opdata2) ? 1'b1 : 1'b0; 
      `BGE    :  brch_value = (opdata1 >= opdata2) ? 1'b1 : 1'b0; 
      `BLTU   :  brch_value = (uopdata1  < uopdata2) ? 1'b1 : 1'b0; 
      `BGEU   :  brch_value = (uopdata1  >=uopdata2) ? 1'b1 : 1'b0; 
      default :  brch_value = 1'b0;
    endcase
  end
  assign brch_asrt = brch_value & branch_en ;



endmodule

