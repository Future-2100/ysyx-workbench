module regfile(
  input   wire    clk   ,
  input   wire    rstn  ,

  input   wire            update  ,

  input   wire    [4:0]   index_rs1   ,
  input   wire    [4:0]   index_rs2   ,
  output  wire    [63:0]  gpr_data_rs1   ,
  output  wire    [63:0]  gpr_data_rs2   ,

  input   wire               wr_en    ,
  input   wire    [4:0]   index_rd    ,
  input   wire    [63:0]   data_rd    
);


  reg  [63:0]  gpr [31:0] ;

  integer i;

  always@(posedge clk) begin
    if(!rstn) begin
      for( i=0; i<32; i=i+1) begin
        gpr[i] <= 64'b0;
      end
    end
    else if( wr_en && (index_rd != 0) && update ) begin
      gpr[index_rd] <= data_rd;
    end
  end

  assign  gpr_data_rs1 = gpr[index_rs1];
  assign  gpr_data_rs2 = gpr[index_rs2];

endmodule
