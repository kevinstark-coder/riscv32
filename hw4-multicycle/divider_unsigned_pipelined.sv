/* INSERT NAME AND PENNKEY HERE */

`timescale 1ns / 1ns

// quotient = dividend / divisor

module divider_unsigned_pipelined (
    input wire clk, rst,
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);
    
    // TODO: your code here

    // stage 1 
    wire [31:0] divided_1[16:0];
    wire [31:0] remainder_1[16:0];
    wire [31:0] quotient_1[16:0];


    assign divided_1[0] = i_dividend;
    assign remainder_1[0] = 0;
    assign quotient_1[0] = 0;
      wire [31:0] divisor_1;
      reg [31:0] divisor_2;
      genvar i;
      for (i = 0; i <16; i = i+1) begin
          divu_1iter d1(
            .i_dividend(divided_1[i]), 
            .i_divisor(divisor_1), 
            .i_quotient(quotient_1[i]), 
            .i_remainder(remainder_1[i]), 
            .o_dividend(divided_1[i+1]), 
            .o_quotient(quotient_1[i+1]), 
            .o_remainder(remainder_1[i+1])
            );
      end
   
      // stage 2
      wire [31:0] divided_2[16:0];
      wire [31:0] remainder_2[16:0];
      wire [31:0] quotient_2[16:0];

        reg [31:0] remainder,quotient;
        logic [31:0] a,b,c;
        for (i = 0; i <16; i = i+1) begin
            divu_1iter d1(
              .i_dividend(divided_2[i]), 
              .i_divisor(divisor_2), 
              .i_quotient(quotient_2[i]), 
              .i_remainder(remainder_2[i]), 
              .o_dividend(divided_2[i+1]), 
              .o_quotient(quotient_2[i+1]), 
              .o_remainder(remainder_2[i+1]) 
              );
        end

        
        always @(posedge clk) begin   
            a<=32'b0;
            b<=32'b0;
            
            divisor_2 <= 32'b0;
            if(rst) begin
                   quotient <= 0;
                   remainder <= 0;
            end  
            else begin
                
                divisor_2 <= divisor_1;
                a <= divided_1[16];
                b <= remainder_1[16];
                c <= quotient_1[16];
                // quotient <= quotient_2[16];
                // remainder<= remainder_2[16];
                
            end
        end
        assign divisor_1 = i_divisor;
        assign   divided_2[0] = a;
        assign   remainder_2[0] = b;
        assign   quotient_2[0] = c;
        assign o_quotient = quotient_2[16];
        assign o_remainder = remainder_2[16];

endmodule


module divu_1iter (
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    input  wire [31:0] i_remainder,
    input  wire [31:0] i_quotient,
    output wire [31:0] o_dividend,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);

  // TODO: copy your code from HW2A here
    wire [31:0] temp_remainder;
    wire [31:0] temp_quotient;
    
    assign temp_remainder = (i_remainder << 1) | (i_dividend >> 31 & 32'h1);
    assign temp_quotient = (temp_remainder < i_divisor) ? (i_quotient << 1) : (i_quotient << 1 | 32'h1);
    
    assign o_dividend = i_dividend << 1;
    assign o_remainder = (temp_remainder < i_divisor) ? (temp_remainder) : (temp_remainder - i_divisor);
    assign o_quotient = temp_quotient;


endmodule
