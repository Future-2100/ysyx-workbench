module pc_gen
#(
  parameter DW = 64
) (

  input   wire                clk       ,
  input   wire                rstn      ,
  
  input   wire    [DW-1:0]    imm       ,
  input   wire    [DW-1:0]    result    ,

  input   wire                  br_en   , //branch assert
  input   wire                jalr_en   ,
  input   wire                jal_en    ,

  output  wire    [DW-1:0]    snxt_pc   ,
  output  wire    [DW-1:0]    dnxt_pc   ,
  output   reg    [DW-1:0]    pc        

);


  wire  [DW-1:0]     br_pc = pc + imm    ;
  wire  [DW-1:0]    jal_pc = result      ;
  wire  [DW-1:0]   jalr_pc = result & { {(DW-1){1'b1}} , 1'b0} ;

  wire    snxt_en = (!jalr_en) & (!jal_en) & (!br_en) ;
  assign  snxt_pc = pc + 4 ;

  assign  dnxt_pc = ( {DW{jalr_en }} & jalr_pc ) |
                    ( {DW{ jal_en }} &  jal_pc ) |
                    ( {DW{  br_en }} &   br_pc ) |
                    ( {DW{snxt_en }} & snxt_pc ) ;

  always@(posedge clk) begin
    if(!rstn) begin
      pc <= 64'h80000000 - 4 ;
    end else begin
      pc <= dnxt_pc  ;
    end
  end

endmodule


