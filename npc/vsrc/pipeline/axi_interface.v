module axi_interface(
	input   wire             clk         ,
	input   wire             rstn        ,
  input   wire    [63:0]   pc          ,

  output  wire     [31:0]  instr       ,
  output  wire             instr_valid ,

	input		wire		[63:0]	 mm_addr		 ,
	input		wire    [63:0]   mm_wdata    ,
  input   wire    [3:0]    mm_wlen     ,
  input   wire             mm_wen      ,
  output  wire             wdata_valid      ,
//
   output  reg    [63:0]   mm_rdata         ,
   input   wire            mm_ren           ,
   output  wire            rdata_valid      ,

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
  input   wire    [63:0]  RDATA    ,
  input   wire    [1:0]   RRESP    ,
  input   wire            RLAST    ,
//input   wire            RUSER    ,
  input   wire            RVALID   ,
  output  reg             RREADY   ,

//-------write require channel-------
  output  wire    [3:0]   AWID        ,
  output  wire    [63:0]  AWADDR      ,
  output  wire    [7:0]   AWLEN       ,
  output  wire    [2:0]   AWSIZE      ,
  output  wire    [1:0]   AWBURST     ,
  output  wire            AWLOCK      ,
  output  wire    [3:0]   AWCACHE     ,
  output  wire    [2:0]   AWPORT      ,
  output  wire    [3:0]   AWQOS       ,
  output  wire    [3:0]   AWREGION    ,
//output  wire            AWUSER      ,
  output  wire            AWVALID     ,
  input   wire            AWREADY     ,

//-------write data channel----------
  output  wire    [3:0]   WID         ,
  output  wire    [63:0]  WDATA       ,
  output  wire    [7:0]   WSTRB       ,
  output  wire            WLAST       ,
//output  wire            WUSER       ,
  output  wire            WVALID      ,
  input   wire            WREADY      ,

//-------write response channel-------
  input   wire    [3:0]   BID         , 
  input   wire    [1:0]   BRESP       , 
//input   wire            BUSER       ,
  input   wire            BVALID      ,
  output  wire            BREADY    
);


//--------abstract the posedge of the rstn---------------

reg delay_rstn;
always@(posedge clk)
  delay_rstn <= rstn;

wire  posedge_rstn = rstn & ~delay_rstn;

localparam r_IDLE  = 4'b0000;
localparam r_IREQU = 4'b0001;
localparam r_IRESP = 4'b0010;
localparam r_MREQU = 4'b0100;
localparam r_MRESP = 4'b1000;

localparam ID_instr = 4'b0;
localparam ID_data  = 4'b1;

localparam AxSIZE_1   = 3'b000;
localparam AxSIZE_2   = 3'b001;
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


reg [3:0]  nstate_r;
reg [3:0]  cstate_r;


always@(posedge clk) begin
  if(!rstn)
    cstate_r <= r_IDLE;
  else
    cstate_r <= nstate_r;
end

wire  rresp_instr_en = (RVALID && RRESP==xRESP_OKAY && RID==ID_instr && RLAST==1'b1);
wire  rresp_data_en  = (RVALID && RRESP==xRESP_OKAY && RID==ID_data  && RLAST==1'b1);

always@(*) begin
  case (cstate_r)
    r_IDLE : nstate_r = posedge_rstn ? r_IREQU : r_IDLE ;

    r_IREQU : nstate_r = ( ARREADY )  ? r_IRESP : r_IREQU;

    r_IRESP : nstate_r = (  rresp_instr_en == 0 ) ? r_IRESP : 
                     (( rresp_instr_en & mm_ren )? r_MREQU : r_IREQU);
    r_MREQU : nstate_r = ( ARREADY ) ? r_MRESP : r_MREQU;

    r_MRESP : nstate_r = ( rresp_data_en ) ? r_IREQU : r_MRESP ;

    default : nstate_r = r_IDLE;
  endcase
end


always@(posedge clk) begin
  if(!rstn) begin
    RREADY <= 1'b0;
  end else begin
    RREADY <= 1'b1;
  end
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
  end 
  else begin
    case ( cstate_r ) 
      r_IDLE : begin 
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

     r_IREQU : begin
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
     r_IRESP : if( rresp_instr_en && !mm_ren ) begin
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
      r_MREQU : if( ARREADY==0 ) begin
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
      r_MRESP : if( rresp_data_en ) begin
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
             end else begin
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
                 )? pc : ( (
                   ARVALID     ==  1'b1          &&  
                   ARID        ==  ID_data       && 
                   ARLEN       ==  8'b0          &&  
                   ARSIZE      ==  AxSIZE_8      && 
                   ARBURST     ==  AxBURST_INCR  &&  
                   ARLOCK      ==  1'b0          &&
                   ARCACHE     ==  4'b0          &&
                   ARQOS       ==  4'b0          &&
                   ARREGION    ==  4'b0          &&
                   ARPORT      ==  AxPORT_Data    
                 )? mm_addr : 64'h80000000 );

assign  instr = RDATA[31:0];
assign  instr_valid = rresp_instr_en ;
assign  mm_rdata    =  RDATA;
assign  rdata_valid = rresp_data_en;


localparam w_IDLE   = 4'b0000;
localparam w_MREQU  = 4'b0001;
localparam w_WAITW  = 4'b0010;
localparam w_WAITAW = 4'b0100;
localparam w_MRESP  = 4'b1000;

reg [3:0]  nstate_w;
reg [3:0]  cstate_w;

always@(posedge clk) begin
  if(!rstn)
    cstate_w <= 4'b0;
  else
    cstate_w <= nstate_w;
end

always@(*) begin
  case (cstate_w)
    w_IDLE   :    nstate_w = ( mm_wen )  ? w_MREQU : w_IDLE   ;
    w_MREQU  :    nstate_w = ( AWREADY &&  WREADY )? w_MRESP  : (
                             ( AWREADY && !WREADY )? w_WAITW  : (
                             (!AWREADY &&  WREADY )? w_WAITAW : w_MREQU) );
    w_WAITW  :    nstate_w = ( WREADY  ) ? w_MRESP : w_WAITW  ;
    w_WAITAW :    nstate_w = ( AWREADY ) ? w_MRESP : w_WAITAW ;
    w_MRESP  :    nstate_w = ( wresp_data_en ) ? w_IDLE : w_MRESP ;
    default  :    nstate_w = w_IDLE ;
  endcase
end

wire  [2:0] awsize = ( { 3{( mm_wlen == 4'd1 )}} & AxSIZE_1 ) | 
                     ( { 3{( mm_wlen == 4'd2 )}} & AxSIZE_2 ) |
                     ( { 3{( mm_wlen == 4'd4 )}} & AxSIZE_2 ) |
                     ( { 3{( mm_wlen == 4'd8 )}} & AxSIZE_2 ) ;


always@(posedge clk) begin
  if( !rstn ) begin
    AWVALID <=  1'b0;
    AWID    <=  4'b0;
    AWADDR  <= 64'b0;
    AWLEN   <=  8'b0;
    AWSIZE  <=  3'b0;
    AWBURST <=  2'b0;
    AWLOCK  <=  1'b0;
    AWCACHE <=  4'b0;
    AWPORT  <=  3'b0;
    AWQOS   <=  4'b0;
    AWREGION<=  4'b0;
  end else begin
    case ( cstate_w )
      w_IDLE   : 
        if( mm_wen ) begin
          AWVALID <=  1'b1;
          AWID    <=  ID_data;
          AWADDR  <=  mm_addr;
          AWLEN   <=  8'b0   ;
          AWSIZE  <=  awsize ;
          AWBURST <=  AxBURST_INCR;
          AWLOCK  <=  1'b0;
          AWCACHE <=  4'b0;
          AWPORT  <=  AxPORT_Data;
          AWQOS   <=  4'b0;
          AWREGION<=  4'b0;
        end else begin
          AWVALID <=  1'b0;
        end

      w_MREQU  : if( !AWREADY ) begin
          AWVALID <=  AWVALID   ;
          AWID    <=  AWID      ;
          AWADDR  <=  AWADDR    ;
          AWLEN   <=  AWLEN     ;
          AWSIZE  <=  AWSIZE    ;
          AWBURST <=  AWBURST   ;
          AWLOCK  <=  AWLOCK    ;
          AWCACHE <=  AWCACHE   ;
          AWPORT  <=  AWPORT    ;
          AWQOS   <=  AWQOS     ;
          AWREGION<=  AWREGION  ;
      end else begin
          AWVALID <= 1'b0;
      end

      w_WAITW  : ; 
      w_WAITAW : if( !AWREADY ) begin
          AWVALID <=  AWVALID   ;
          AWID    <=  AWID      ;
          AWADDR  <=  AWADDR    ;
          AWLEN   <=  AWLEN     ;
          AWSIZE  <=  AWSIZE    ;
          AWBURST <=  AWBURST   ;
          AWLOCK  <=  AWLOCK    ;
          AWCACHE <=  AWCACHE   ;
          AWPORT  <=  AWPORT    ;
          AWQOS   <=  AWQOS     ;
          AWREGION<=  AWREGION  ;
      end else begin
          AWVALID <= 1'b0;
      end
      w_MRESP  :begin ; end
      default  : ;
    endcase
  end
end


wire  [7:0] wstrb  = ( { 8{( mm_wlen == 4'd1 )}} & 8'b0000_0001) | 
                     ( { 8{( mm_wlen == 4'd2 )}} & 8'b0000_0011) |
                     ( { 8{( mm_wlen == 4'd4 )}} & 8'b0000_1111) |
                     ( { 8{( mm_wlen == 4'd8 )}} & 8'b1111_1111) ;


always@(posedge clk) begin
  if( !rstn ) begin
    WVALID <=  1'b0;
    WID    <=  4'b0;
    WDATA  <= 64'b0;
    WSTRB  <=  8'b0;
    WLAST  <=  1'b0;
  end else begin
    case ( cstate_w )
      w_IDLE   :   begin
        if( mm_wen ) begin
          WVALID <=  1'b1;
          WID    <=  ID_data ;
          WDATA  <=  mm_wdata;
          WSTRB  <=  wstrb   ;
          WLAST  <=  1'b1;
        end else begin
          WVALID <=  1'b0;
        end
      end
      w_MREQU  : if( !WREADY ) begin
          WVALID <= WVALID  ;  
          WID    <= WID     ;
          WDATA  <= WDATA   ;
          WSTRB  <= WSTRB   ;
          WLAST  <= WLAST   ;
      end else begin
          WVALID <= 1'b0;
      end
      w_WAITAW  : begin ; end
      w_WAITW   : if( !WREADY ) begin
          WVALID <= WVALID  ;  
          WID    <= WID     ;
          WDATA  <= WDATA   ;
          WSTRB  <= WSTRB   ;
          WLAST  <= WLAST   ;
      end else begin
          WVALID <= 1'b0;
      end
      w_MRESP  :begin ; end
      default  : ;
    endcase
  end
end

always@(posedge clk) begin
  if( !rstn )
    BREADY <= 1'b0;
  else
    BREADY <= 1'b1;
end

//assign  AWADDR  =  mm_addr ;
//assign  WDATA   =  mm_wdata;
wire    wresp_data_en =  (BVALID && BRESP==xRESP_OKAY && BID==ID_data );
assign  wdata_valid   =  wresp_data_en;


endmodule

