module axi_interface(
	input   wire             clk         ,
	input   wire             rstn        ,
  input   wire    [63:0]   pc          ,

  output  wire     [31:0]  instr       ,
  output  wire             instr_valid ,

	input		wire		[63:0]	 mm_addr		  ,
//	input		wire    [63:0]  mm_wdata    ,
//  input   wire    [3:0]   mm_wlen     ,
//  input   wire            mm_wen      ,
//  output  wire            mm_wvalid   ,
//
   output  reg    [63:0]   mm_rdata         ,
   input   wire            mm_ren           ,

//-------read require channel--------
  output  reg     [3:0]   ARID     ,
  output  wire    [63:0]  ARADDR   ,
  output  reg     [7:0]   ARLEN    ,
  output  reg     [2:0]   ARSIZE   ,
  output  reg     [1:0]   ARBURST  ,
  output  wire            ARLOCK   ,
  output  wire    [3:0]   ARCACHE  ,
  output  reg     [2:0]   ARPORT   ,
  output  wire    [3:0]   ARQOS    ,
  output  wire    [3:0]   ARREGION ,
//output  wire            ARUSER   ,
  output  reg             ARVALID  ,
  input   wire            ARREADY  ,

//-------read response channel-------
  input   wire    [3:0]   RID      ,
  input   reg     [63:0]  RDATA    ,
  input   reg     [1:0]   RRESP    ,
  input   wire            RLAST    ,
//input   wire            RUSER    ,
  input   reg             RVALID   ,
  output  wire            RREADY   

//-------write require channel-------
//  output  wire    [3:0]   AWID        ,
//  output  wire    [63:0]  AWADDR      ,
//  output  wire    [7:0]   AWLEN       ,
//  output  wire    [2:0]   AWSIZE      ,
//  output  wire    [1:0]   AWBURST     ,
//  output  wire            AWLOCK      ,
//  output  wire    [3:0]   AWCACHE     ,
//  output  wire    [2:0]   AWPORT      ,
//  output  wire    [3:0]   AWQOS       ,
//  output  wire    [3:0]   AWREGION    ,
//  output  wire            AWUSER      ,
//  output  wire            AWVALID     ,
//  input   wire            AWREADY     ,

//-------write data channel----------
//  output  wire    [3:0]   WID         ,
//  output  wire    [63:0]  WDATA       ,
//  output  wire    [7:0]   WSTRB       ,
//  output  wire            WLAST       ,
//  output  wire            WUSER       ,
//  output  wire            WVALID      ,
//  input   wire            RREADY      ,
//
////-------write response channel-------
//  input   wire    [3:0]   BID         , 
//  input   wire    [1:0]   BRESP       , 
//  input   wire            BUSER       ,
//  input   wire            BVALID      ,
//  output  wire            BREADY    
);


//--------abstract the posedge of the rstn---------------

reg delay_rstn;
always@(posedge clk)
  delay_rstn <= rstn;

wire  posedge_rstn = rstn & ~delay_rstn;


localparam IDLE  = 4'b0000;
localparam IREQU = 4'b0001;
localparam IRESP = 4'b0010;
localparam MREQU = 4'b0100;
localparam MRESP = 4'b1000;

localparam ID_instr = 4'b0;
localparam ID_data  = 4'b1;

//localparam AxSIZE_1   = 3'b000;
//localparam AxSIZE_2   = 3'b001;
localparam AxSIZE_4   = 3'b010;
localparam AxSIZE_8   = 3'b011;
//localparam AxSIZE_16  = 3'b100;
//localparam AxSIZE_32  = 3'b101;
//localparam AxSIZE_64  = 3'b110;
//localparam AxSIZE_128 = 3'b111;

//localparam AxBURST_FIXED = 2'b00;
localparam AxBURST_INCR  = 2'b01;
//localparam AxBURST_WRAP  = 2'b10;

localparam AxPORT_Instr = 3'b100;
localparam AxPORT_Data  = 3'b000;

localparam xRESP_OKAY   = 2'b00;
//localparam xRESP_EXOKAY = 2'b01;
//localparam xRESP_SLVERR = 2'b10;
//localparam xRESP_DECERR = 2'b11;

reg [3:0]  nstate;
reg [3:0]  cstate;

always@(posedge clk) begin
  if(!rstn)
    cstate <= IDLE;
  else
    cstate <= nstate;
end

wire  rresp_instr_en = (RVALID && RRESP==xRESP_OKAY && RID==ID_instr && RLAST==1'b1);
wire  rresp_data_en  = (RVALID && RRESP==xRESP_OKAY && RID==ID_data  && RLAST==1'b1);

always@(*) begin
  case (cstate)
    IDLE : nstate = posedge_rstn ? IREQU : IDLE ;

    IREQU : nstate = ( ARREADY )  ? IRESP : IREQU;

    IRESP : nstate = (  rresp_instr_en == 0 ) ? IRESP : 
                     (( rresp_instr_en & mm_ren )? MREQU : IREQU);
    MREQU : nstate = ( ARREADY ) ? MRESP : MREQU;

    MRESP : nstate = (  rresp_data_en == 0 ) ? MRESP :
                     (( rresp_data_en & mm_ren )? MREQU : IREQU);

    default : nstate = IDLE;
  endcase
end

always@(posedge clk) begin
  if(!rstn) begin
     ARVALID     <= 'b0  ;  
     ARID        <= 'b0  ; 
     ARLEN       <= 'b0  ;  
     ARSIZE      <= 'b0  ;  
     ARBURST     <= 'b0  ;
     ARLOCK      <= 'b0  ;
     ARCACHE     <= 'b0  ;
     ARQOS       <= 'b0  ;
     ARREGION    <= 'b0  ;
     ARPORT      <= 'b0  ;
     RREADY      <= 'b0  ;
  end 
  else begin
    RREADY <= 1'b1;
    case ( cstate ) 
      IDLE : begin 
               if( posedge_rstn ) begin
                   ARVALID     <=  1'b1          ;  
                   ARID        <=  ID_instr      ; 
                   ARLEN       <=  8'b0          ;  
                   ARSIZE      <=  AxSIZE_4      ; 
                   ARBURST     <=  AxBURST_INCR  ;  
                   ARLOCK      <=  1'b0          ;
                   ARCACHE     <=  4'b0          ;
                   ARQOS       <=  4'b0          ;
                   ARREGION    <=  4'b0          ;
                   ARPORT      <=  AxPORT_Instr  ;
               end
             end

     IREQU : begin
               if( ARREADY==0 ) begin
                   ARVALID     <= ARVALID       ;  
                   ARID        <= ARID          ; 
                   ARLEN       <= ARLEN         ;  
                   ARSIZE      <= ARSIZE        ; 
                   ARBURST     <= ARBURST       ;  
                   ARLOCK      <= ARLOCK        ;
                   ARCACHE     <= ARCACHE       ;
                   ARQOS       <= ARQOS         ;
                   ARREGION    <= ARREGION      ;
                   ARPORT      <= ARPORT        ;
             end
             else begin
                   ARVALID <= 1'b0;
             end
           end
     IRESP : if( rresp_instr_en && !mm_ren ) begin
                //load the new ARchannel data
                //execute the instruction
                   ARVALID     <=  1'b1          ;  
                   ARID        <=  ID_instr      ; 
                   ARLEN       <=  8'b0          ;  
                   ARSIZE      <=  AxSIZE_4      ; 
                   ARBURST     <=  AxBURST_INCR  ;  
                   ARLOCK      <=  1'b0          ;
                   ARCACHE     <=  4'b0          ;
                   ARQOS       <=  4'b0          ;
                   ARREGION    <=  4'b0          ;
                   ARPORT      <=  AxPORT_Instr  ;
             end
             else if( rresp_instr_en && mm_ren ) begin
                   ARVALID     <=  1'b1          ;  
                   ARID        <=  ID_data       ; 
                   ARLEN       <=  8'b0          ;  
                   ARSIZE      <=  AxSIZE_8      ; 
                   ARBURST     <=  AxBURST_INCR  ;  
                   ARLOCK      <=  1'b0          ;
                   ARCACHE     <=  4'b0          ;
                   ARQOS       <=  4'b0          ;
                   ARREGION    <=  4'b0          ;
                   ARPORT      <=  AxPORT_Data   ;
             end
             else begin
               //wait for instruction come back
               //do nothing
                   ARVALID     <= 1'b0    ;  
             end
      MREQU : if( ARREADY==0 ) begin
                   ARVALID     <= ARVALID  ;  
                   ARID        <= ARID     ; 
                   ARLEN       <= ARLEN    ;  
                   ARSIZE      <= ARSIZE   ; 
                   ARBURST     <= ARBURST  ;  
                   ARLOCK      <= ARLOCK   ;
                   ARCACHE     <= ARCACHE  ;
                   ARQOS       <= ARQOS    ;
                   ARREGION    <= ARREGION ;
                   ARPORT      <= ARPORT   ;
             end
             else begin
                  ARVALID <= 1'b0;
             end
      MRESP : if( rresp_data_en && !mm_ren ) begin
                   ARVALID     <=  1'b1          ;  
                   ARID        <=  ID_instr      ; 
                   ARLEN       <=  8'b0          ;  
                   ARSIZE      <=  AxSIZE_4      ; 
                   ARBURST     <=  AxBURST_INCR  ;  
                   ARLOCK      <=  1'b0          ;
                   ARCACHE     <=  4'b0          ;
                   ARQOS       <=  4'b0          ;
                   ARREGION    <=  4'b0          ;
                   ARPORT      <=  AxPORT_Instr  ;
             end
             else if( rresp_data_en && mm_ren )begin
                   ARVALID     <=  1'b1          ;  
                   ARID        <=  ID_data       ; 
                   ARLEN       <=  8'b0          ;  
                   ARSIZE      <=  AxSIZE_8      ; 
                   ARBURST     <=  AxBURST_INCR  ;  
                   ARLOCK      <=  1'b0          ;
                   ARCACHE     <=  4'b0          ;
                   ARQOS       <=  4'b0          ;
                   ARREGION    <=  4'b0          ;
                   ARPORT      <=  AxPORT_Data   ;
             end
             else begin
                  ARVALID <= 1'b0;
             end
    default : ;
    endcase
  end
end

assign  ARADDR = (
                   ARVALID     ==  1'b1          &&  
                   ARID        ==  ID_instr      && 
                   ARLEN       ==  8'b0          &&  
                   ARSIZE      ==  AxSIZE_4      && 
                   ARBURST     ==  AxBURST_INCR  &&  
                   ARLOCK      ==  1'b0          &&
                   ARCACHE     ==  4'b0          &&
                   ARQOS       ==  4'b0          &&
                   ARREGION    ==  4'b0          &&
                   ARPORT      ==  AxPORT_Instr    
                 )? pc : mm_addr ;

assign  instr = RDATA[31:0];
assign  instr_valid = rresp_instr_en ;

always@(posedge clk) begin
  if(!rstn)
    mm_rdata <= 64'b0;
  else if( rresp_data_en )
    mm_rdata <= RDATA;
end

endmodule

