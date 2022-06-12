module ram
#(
  parameter DW = 64 ,
  parameter AW = 27 ,
  parameter DP = 134217728

) (
  input   wire            clk     ,

  input   wire            ram1_en ,
  input   wire            ram2_en ,
  input   wire            ram3_en ,
  input   wire            ram4_en ,

  input   wire  [AW-1:0]  addr    ,
  input   wire            wr_en   ,
  input   wire  [DW-1:0]  wdata   ,

  output  wire  [DW-1:0]  rdata

);

  reg   [7 :0]  ram1   [DP-1:0]   ; 
  reg   [7 :0]  ram2   [DP-1:0]   ;
  reg   [15:0]  ram3   [DP-1:0]   ;
  reg   [31:0]  ram4   [DP-1:0]   ;



  always@(posedge clk) begin
    if(wr_en & ram1_en) begin
      ram1[addr] <= wdata[ 7: 0];
    end
  end

  always@(posedge clk) begin
    if(wr_en & ram2_en) begin
      ram2[addr] <= wdata[15: 8];
    end
  end

  always@(posedge clk) begin
    if(wr_en & ram3_en) begin
      ram3[addr] <= wdata[31:16];
    end
  end

  always@(posedge clk) begin
    if(wr_en & ram4_en) begin
      ram4[addr] <= wdata[63:32];
    end
  end

  reg   [7 :0]  rdata1   ; 
  reg   [7 :0]  rdata2   ;
  reg   [15:0]  rdata3   ;
  reg   [31:0]  rdata4   ;

  always@(negedge clk) begin
    rdata1 <= ram1[addr];
    rdata2 <= ram2[addr];
    rdata3 <= ram3[addr];
    rdata4 <= ram4[addr];
  end

  assign  rdata = {rdata4,rdata3,rdata2,rdata1};
  

endmodule

