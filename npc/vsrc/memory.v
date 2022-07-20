module memory
#(
  parameter DW = 64
) (

//  input wire  clk   ,
  input wire  rstn  ,

  input wire  lb  ,
  input wire  lh  ,
  input wire  lw  ,
  input wire  ld  ,

  input wire  lbu  ,
  input wire  lhu  ,
  input wire  lwu  ,

  input wire  sb  ,
  input wire  sh  ,
  input wire  sw  ,
  input wire  sd  ,

  input wire  [DW-1:0]    wdata_in ,
  input wire  [DW-1:0]    addr_in  ,

  output  wire  [DW-1:0]  load_data,

  output  wire  [DW-1:0]  wdata ,
  output  wire  [3:0]     wlen  ,
  output  wire            wen   ,
  output  wire            ren   ,
  input   wire  [DW-1:0]  rdata ,
  output  wire  [DW-1:0]  addr  

);

  assign  wlen = ( {4{sb}} & 4'd1 )  |
                 ( {4{sh}} & 4'd2 )  |
                 ( {4{sw}} & 4'd4 )  |
                 ( {4{sd}} & 4'd8 )  ;

  assign  wdata = ( {DW{sb}} & {56'b0, wdata_in[7 :0]} ) | 
                  ( {DW{sh}} & {48'b0, wdata_in[15:0]} ) |
                  ( {DW{sw}} & {32'b0, wdata_in[31:0]} ) |
                  ( {DW{sd}} & {       wdata_in      } ) ;

  assign  addr  =  addr_in;

  assign  wen =  ( sb | sh | sw | sd ) & rstn ;
  assign  ren =  ( lb | lh | lw | ld | lbu | lhu | lwu ) ;

  wire  [DW-1:0]  lb_data = { {(DW- 8){rdata[ 7]}} , rdata[ 7:0] };
  wire  [DW-1:0]  lh_data = { {(DW-16){rdata[15]}} , rdata[15:0] };
  wire  [DW-1:0]  lw_data = { {(DW-32){rdata[31]}} , rdata[31:0] };
  wire  [DW-1:0]  ld_data = rdata;
  wire  [DW-1:0]  lbu_data = { {(DW- 8){1'b0}} , rdata[ 7:0] };
  wire  [DW-1:0]  lhu_data = { {(DW-16){1'b0}} , rdata[15:0] };
  wire  [DW-1:0]  lwu_data = { {(DW-32){1'b0}} , rdata[31:0] };

  assign  load_data = ( {DW{lb}}  & lb_data )  |
                      ( {DW{lh}}  & lh_data )  |
                      ( {DW{lw}}  & lw_data )  |
                      ( {DW{ld}}  & ld_data )  |
                      ( {DW{lbu}} & lbu_data ) |
                      ( {DW{lhu}} & lhu_data ) |
                      ( {DW{lwu}} & lwu_data ) ;

endmodule

/*


  wire  [DW-1:0] rdata;



 ram ram_inst (
   .clk (clk) ,

   .ram1_en ( ram1_en ) , 
   .ram2_en ( ram2_en ) , 
   .ram3_en ( ram3_en ) , 
   .ram4_en ( ram4_en ) , 

   .addr (addr[29:3]) ,
   .wr_en(wr_en),
   .wdata(wdata),

   .rdata(rdata)

 ); 

*/
