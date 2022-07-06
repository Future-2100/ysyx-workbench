module top(
  input a,
  input b,
  output f
);

  assign f = a ^ b;
  
  initial begin
//    if($test$plusargs("trace") != 0) begin
      $display("[%0t] Tracing to build/logs/top.vcd...\n",$time);
      $dumpfile("build/logs/top.vcd");
      $dumpvars();
//    end
    $display("[%0t] Model running...\n", $time);
  end
 

endmodule

