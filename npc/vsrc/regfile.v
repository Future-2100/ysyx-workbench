module regfile
#(
  parameter DW = 64 , // data width
  parameter IW = 32 , // instruction width
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

  input   wire    [IW-1:0]  inst    ,
  output  wire    [DW-1:0]  rdata1  ,
  output  wire    [DW-1:0]  rdata2  ,

  output  wire    [DW-1:0]  gpr1

);
  initial begin
    if ( inst==inst );
  end

  wire    [AW-1:0]  raddr1   = inst[19:15] ;
  wire    [AW-1:0]  raddr2   = inst[24:20] ;
  wire    [AW-1:0]  waddr    = inst[11: 7] ;

  wire    [DW-1:0]  wdata  ; 

  assign  wdata = ( {DW{load_en}} & load_data ) | 
                  ( {DW{jal_en | jalr_en}} & snxt_pc ) | 
                  alu_data;

  reg   [DW-1:0]    gpr   [31:1]  ;

  assign gpr1 = gpr[1];

  integer i;

  always@(posedge clk or negedge rstn) begin
    if(!rstn) begin
      for(i=1; i<32; i=i+1) begin
        gpr[i] <= {DW{1'b0}} ;
      end
    end
    else if (wb_en && (waddr != {AW{1'b0}}) ) begin
      gpr[waddr] <= wdata ;
    end
  end


  assign  rdata1 = (raddr1 == {AW{1'b0}}) ? {DW{1'b0}} : gpr[raddr1] ;
  assign  rdata2 = (raddr2 == {AW{1'b0}}) ? {DW{1'b0}} : gpr[raddr2] ;
  

endmodule

