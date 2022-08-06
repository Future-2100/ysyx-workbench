module regfile(
  input   wire    clk   ,
  input   wire    rstn  ,

  input   wire    [4:0]   index_rs1   ,
  input   wire    [4:0]   index_rs2   ,
  output  wire    [63:0]   data_rs1   ,
  output  wire    [63:0]   data_rs2   ,

  input   wire               wb_en    ,
  input   wire    [4:0]   index_rd    ,
  input   wire    [63:0]   data_rd    ,

);

  reg  [63:0]  gpr [31:0] ;

  integer i;

  always@(posedge clk) begin
    if(!rstn) begin
      for( i=0; i<32; i=i+1) begin
        gpr[i] <= 64'b0;
      end
    end
    else if( wb_en && (index_rd != 0) ) begin
      gpr[index_rd] <= data_rd;
    end
  end

  assign  data_rs1 = gpr[index_rs1];
  assign  data_rs2 = gpr[index_rs2];

endmodule
