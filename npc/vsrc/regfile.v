module regfile
(
  input   wire    clk               ,
  input   wire    rstn              ,


  input   wire    [4:0]   raddr1    ,
  output  wire    [63:0]  rdata1    ,
  input   wire    [4:0]   raddr2    ,
  output  wire    [63:0]  rdata2    ,

  input   wire            wen       ,
  input   wire    [4:0]   waddr     ,
  input   wire    [63:0]  wdata     ,
  output  wire    [63:0]  gpr1      

);

  reg   [63:0]    gpr   [31:1]  ;

  integer i;

  always@(posedge clk or negedge rstn) begin
    if(!rstn) begin
      for(i=1; i<32; i=i+1) begin
        gpr[i] <= 64'b0;
      end
    end
    else if (wen && (waddr != 5'b0) ) begin
      gpr[waddr] <= wdata ;
    end
  end

  assign  rdata1 = (raddr1 == 5'b0) ? 64'b0 : gpr[raddr1] ;
  assign  rdata2 = (raddr2 == 5'b0) ? 64'b0 : gpr[raddr2] ;
  
  assign  gpr1 = gpr[1];

endmodule

