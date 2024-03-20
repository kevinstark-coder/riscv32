`timescale 1ns / 1ps

/**
 * @param a first 1-bit input
 * @param b second 1-bit input
 * @param g whether a and b generate a carry
 * @param p whether a and b would propagate an incoming carry
 */
module gp1(input wire a, b,
           output wire g, p);
   assign g = a & b;
   assign p = a | b;
endmodule

/**
 * Computes aggregate generate/propagate signals over a 4-bit window.
 * @param gin incoming generate signals
 * @param pin incoming propagate signals
 * @param cin the incoming carry
 * @param gout whether these 4 bits internally would generate a carry-out (independent of cin)
 * @param pout whether these 4 bits internally would propagate an incoming carry from cin
 * @param cout the carry outs for the low-order 3 bits
 */
module gp4(input wire [3:0] gin, pin,
           input wire cin,
           output wire gout, pout,
           output wire [2:0] cout);
   
   wire G10,P10,G32,P32;
   assign G10 = gin[1]|pin[1]&gin[0];
   assign P10 = pin[0]&pin[1];
   assign cout[0] = gin[0]|pin[0]&cin;
   assign G32 = gin[3]|pin[3]&gin[2];
   assign P32 = pin[3]&pin[2];
   assign cout[1] = G10|P10&cin;
   assign gout = G32|P32&G10;
   assign pout = P32&P10;
   
   //assign cout[2] = gin[2]|pin[2]&cout[1];
   assign cout[2] = gin[2] | (pin[2] & (G10 | (P10 & cin)));

endmodule

/** Same as gp4 but for an 8-bit window instead */
module gp8(input wire [7:0] gin, pin,
           input wire cin,
           output wire gout, pout,
           output wire [6:0] cout);

   // TODO: your code here
           wire gout_3;
           wire pout_3;
           wire gout_7;
           wire pout_7;
           wire cin_1;
           gp4 a3(.gin(gin[3:0]),
                   .pin(pin[3:0]),
                   .cin(cin),
                   .gout(gout_3),
                   .pout(pout_3),
                   .cout(cout[2:0])
                 );

           assign cin_1 = gout_3 | (pout_3 & cin);

           gp4 a7(.gin(gin[7:4]),
                  .pin(pin[7:4]),
                  .cin(cin_1),
                  .gout(gout_7),
                  .pout(pout_7),
                  .cout(cout[6:4]) 
                  );
            
            assign pout = pout_7 & pout_3;
            assign gout = gout_7 | pout_7 & gout_3;
            assign cout[3] = cin_1;

endmodule

module cla
  (input wire [31:0]  a, b,
   input wire         cin,
   output wire [31:0] sum);

   wire [31:0] gin = a & b;
   wire [31:0] pin = a | b;
   wire [31:0] cout;
   wire c_7,c_15,c_23,c_31;
   wire gout1, pout1;
   gp8 m_1(.gin(gin[7:0]), .pin(pin[7:0]),
           .cin(cin),
           .gout(gout1), .pout(pout1),
           .cout(cout[6:0]));
//    assign cout[7] = gout1|pout1 & cin;
   assign c_7 = gout1|pout1 & cin;
   wire gout2, pout2;
   gp8 m_2(.gin(gin[15:8]), .pin(pin[15:8]),
           .cin(c_7),
           .gout(gout2), .pout(pout2),
           .cout(cout[14:8]));
//    assign cout[15] = gout2|pout2 & cout[7];
   assign c_15 = gout2|pout2 & c_7;

   wire gout3, pout3;
   gp8 m_3(.gin(gin[23:16]), .pin(pin[23:16]),
           .cin(c_15),
           .gout(gout3), .pout(pout3),
           .cout(cout[22:16]));
   assign c_23 = gout3|pout3 & c_15;
   
   wire gout4, pout4;
   gp8 m_4(.gin(gin[31:24]), .pin(pin[31:24]),
           .cin(c_23),
           .gout(gout4), .pout(pout4),
           .cout(cout[30:24]));
   assign c_31= gout4|pout4 & c_23;
   assign cout[31] = c_31;
   assign cout[23] = c_23;
   assign cout[15] = c_15;
   assign cout[7] = c_7;
   assign sum[31:0] = a ^ b ^ {cout[30:0],cin};

endmodule
