module pc_gen
#(
  parameter DW = 64
) (

  input   wire                clk       ,
  input   wire                rstn      ,
  
  input   wire    [DW-1:0]    imm       ,
  input   wire    [DW-1:0]    result    ,

  input   wire                brch_asrt , //branch assert
  input   wire                jalr_en   ,
  input   wire                jal_en    ,

  output  wire    [DW-1:0]    dnxt_pc   ,
  output  wire    [DW-1:0]    snxt_pc   ,
  output   reg    [DW-1:0]    pc        

);


  wire  jalbr_en = jal_en | brch_asrt  ;
  wire  [DW-1:0]  jalbr_pc = pc + imm    ;

  wire  [DW-1:0]   jalr_pc = result & { {(DW-1){1'b1}} , 1'b0} ;

  assign  snxt_pc = pc + 4 ;


  assign  dnxt_pc = ( {DW{jalr_en }} & jalr_pc ) |
                    ( {DW{jalbr_en}} & jalbr_pc) |
                    (                  snxt_pc ) ;

  always@(posedge clk or negedge rstn) begin
    if(!rstn) begin
      pc <= 64'h80000000;
    end else begin
      pc <= dnxt_pc  ;
    end
  end

endmodule


