module ifu(
  input   wire          clk           ,
  input   wire          rstn          ,

  input   wire  [63:0]  dnxt_pc       ,
  input   wire          fetch_en      ,
  output  reg   [31:0]  instr         ,
  output  reg           instr_en      , 

  output  reg           ifu_ARVALID   ,
  input   wire          ifu_ARREADY   ,
  output  reg   [63:0]  ifu_ARADDR    ,
  output  reg   [2:0]   ifu_ARPORT    ,

  input   wire          ifu_RVALID    ,
  output  reg           ifu_RREADY    ,
  input   wire  [63:0]  ifu_RDATA     ,
  input   wire  [1:0]   ifu_RRESP     

);

  parameter IDLE = 3'b000;
  parameter RREQ = 3'b001;
  parameter RDATA= 3'b010;
  parameter INSTR= 3'b100;


  reg [2:0] state_now ;
  reg [2:0] state_next;


  always@(posedge clk) begin
    if(!rstn)
      state_now <= IDLE;
    else
      state_now <= state_next;
  end


  always@(*) begin
    state_next  = IDLE ;
    ifu_ARVALID = 1'b0 ;
    ifu_ARADDR  = 64'b0;
    ifu_ARPORT  = 3'b0 ;
    ifu_RREADY  = 1'b0 ;
    case (state_now) 
      IDLE  : begin
        state_next = (fetch_en) ? RREQ : IDLE ;
      end
      RREQ  : begin
        state_next = (ifu_ARREADY) ? RDATA : RREQ ;
        ifu_ARVALID = 1'b1    ;
        ifu_ARADDR  = dnxt_pc ;
        ifu_ARPORT  = 3'b100  ;
      end
      RDATA : begin
        state_next = (ifu_RVALID && (ifu_RRESP==2'b0)) ? INSTR : RDATA;
        ifu_RREADY = 1'b1;
      end
      INSTR : begin
        state_next = IDLE;
      end
      default : state_next = IDLE;
    endcase
end

  always@(posedge clk) begin
    if(!rstn) begin
      instr_en <= 1'b0 ;
      instr    <= 32'b0;
    end
    else if( state_next == INSTR ) begin
      instr_en <= 1'b1;
      instr    <= ifu_RDATA[31:0];
    end
    else begin
      instr_en <= 1'b0 ;
      instr    <= 32'b0;
    end
  end

endmodule


