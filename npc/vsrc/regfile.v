module regfile
#(
  parameter DW = 64 , // data width
  parameter AW = 5
) (
  input   wire    clk               ,
  input   wire    rstn              ,

  input   wire              wb_en   ,
  input   wire              load_en ,
  input   wire              jal_en  ,
  input   wire              jalr_en ,
  input   wire    [DW-1:0]  load_data   , //data read from memory
  input   wire    [DW-1:0]   alu_data   , //result from alu
  input   wire    [DW-1:0]    snxt_pc   , //result of the pc added 4

  input   wire    [AW-1:0]  waddr   ,

  input   wire    [AW-1:0]  raddr1  ,
  input   wire    [AW-1:0]  raddr2  ,
  output  wire    [DW-1:0]  rdata1  ,
  output  wire    [DW-1:0]  rdata2  ,

  output  wire    [DW-1:0]  gpr1

);

  wire    [DW-1:0]  wdata  ; 

  wire  alu_en = !load_en & !(jal_en|jalr_en);
  assign  wdata = ( {DW{load_en}} & load_data ) | 
                  ( {DW{jal_en | jalr_en}} & snxt_pc ) | 
                  ( {DW{alu_en }} &  alu_data) ;

  reg   [DW-1:0]    gpr   [31:0]  ;

  assign gpr1 = gpr[1];

  integer i;

  wire  wen = wb_en && (waddr != {AW{1'b0}}) ;
  always@(posedge clk or negedge rstn) begin
    if(!rstn) begin
      for(i=0; i<32; i=i+1) begin
        gpr[i] <= {DW{1'b0}} ;
      end
    end
    else if (wen) begin
      gpr[waddr] <= wdata ;
    end
  end


  assign  rdata1 = (raddr1 == {AW{1'b0}}) ? {DW{1'b0}} : gpr[raddr1] ;
  assign  rdata2 = (raddr2 == {AW{1'b0}}) ? {DW{1'b0}} : gpr[raddr2] ;
  

endmodule

