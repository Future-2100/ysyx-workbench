module S011HD1P_X32Y2D128
#(  
  parameter Bits       = 128  ,
  parameter Word_Depth =  64  ,
  parameter Add_Width  =   6  

)(
  input   wire                  clk   ,
  input   wire                  cen   ,
  input   wire                  wen   ,
  input   wire  [Add_Width-1:0] A     ,
  input   wire  [Bits-1:0]      D     ,
  output  reg   [Bits-1:0]      Q     
);

  reg [Bits-1:0] ram [0:Word_Depth-1];
  always@(posedge clk) begin
    if( !cen && !wen ) begin
      ram[A] <= D ;
    end
    Q <= !cen && wen ? ram[A] : {4{$random}};
  end

endmodule

module S011HD1P_X32Y2D128_BW
#(  
  parameter Bits       = 128  ,
  parameter Word_Depth =  64  ,
  parameter Add_Width  =   6  ,
  parameter Wen_Width  = 128

)(
  input   wire                  clk   ,
  input   wire                  CEN   ,
  input   wire                  WEN   ,
  input   wire  [Wen_Width-1:0] BWEN  ,
  input   wire  [Add_Width-1:0] A     ,
  input   wire  [Bits-1:0]      D     ,
  output  reg   [Bits-1:0]      Q     
);

  wire  cen = ~CEN;
  wire  wen = ~WEN;
  wire  [Wen_Width-1:0] bwen = ~BWEN;

  reg [Bits-1:0] ram [0:Word_Depth-1];

  always@(posedge clk) begin
    if( cen && wen ) begin
      ram[A] <= ( D & bwen ) | ( ram[A] & ~bwen );
    end
    Q <= cen && !wen ? ram[A] : {4{$random}};
  end

endmodule
