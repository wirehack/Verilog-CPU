`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:52:22 10/19/2015
// Design Name:   decoder
// Module Name:   D:/ISEProject/Decoder/decoder_tb.v
// Project Name:  Decoder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder_tb;

	// Inputs
	reg x0;
	reg x1;
	reg x2;
	reg x3;

	// Outputs
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;

	// Instantiate the Unit Under Test (UUT)
	decoder uut (
		.x0(x0), 
		.x1(x1), 
		.x2(x2), 
		.x3(x3), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g)
	);

	initial begin
		// Initialize Inputs
		x0 = 0;
		x1 = 0;
		x2 = 0;
		x3 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
        #20 fork
        x0 = 1;
		x1 = 0;
		x2 = 0;
		x3 = 0;
	    join
	    #20 fork
        x0 = 1;
		x1 = 0;
		x2 = 1;
		x3 = 0;
	    join
	    #20 fork
        x0 = 1;
		x1 = 0;
		x2 = 0;
		x3 = 1;
	    join
	    #20 fork
        x0 = 1;
		x1 = 1;
		x2 = 0;
		x3 = 1;
	    join
	end
      
endmodule

