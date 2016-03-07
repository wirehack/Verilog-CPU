`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:23:56 10/17/2015
// Design Name:   comparator
// Module Name:   D:/ISEProject/comparator/comparator_tb.v
// Project Name:  comparator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module comparator_tb;

	// Inputs
	reg A0;
	reg A1;
	reg A2;
	reg A3;
	reg A4;
	reg A5;
	reg A6;
	reg A7;
	reg B0;
	reg B1;
	reg B2;
	reg B3;
	reg B4;
	reg B5;
	reg B6;
	reg B7;
	// Outputs
	wire ALBO;
	wire AEBO;
	wire AGBO;

	// Instantiate the Unit Under Test (UUT)
	comparator uut (
		.A0(A0), 
		.A1(A1), 
		.A2(A2), 
		.A3(A3), 
		.A4(A4), 
		.A5(A5), 
		.A6(A6), 
		.A7(A7), 
		.B0(B0), 
		.B1(B1), 
		.B2(B2), 
		.B3(B3), 
		.B4(B4), 
		.B5(B5), 
		.B6(B6), 
		.B7(B7), 
		.ALBO(ALBO), 
		.AEBO(AEBO), 
		.AGBO(AGBO)
	);

	initial begin
		// Initialize Inputs
		A0 = 0;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		A4 = 0;
		A5 = 0;
		A6 = 0;
		A7 = 0;
		B0 = 0;
		B1 = 0;
		B2 = 0;
		B3 = 0;
		B4 = 0;
		B5 = 0;
		B6 = 0;
		B7 = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	    #10 begin A0 = 0;
		A1 = 0;
		A2 = 1;
		A3 = 0;
		A4 = 1;
		A5 = 1;
		A6 = 0;
		A7 = 0;
		B0 = 0;
		B1 = 0;
		B2 = 0;
		B3 = 0;
		B4 = 1;
		B5 = 0;
		B6 = 1;
		B7 = 0;//ALBO=1
	    end
	    #100 begin A0 = 0;
		A1 = 1;
		A2 = 1;
		A3 = 0;
		A4 = 1;
		A5 = 1;
		A6 = 0;
		A7 = 1;
		B0 = 0;
		B1 = 0;
		B2 = 0;
		B3 = 1;
		B4 = 1;
		B5 = 0;
		B6 = 1;
		B7 = 0;//AGBO=1
	    end
	        
	end
endmodule

