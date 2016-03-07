`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:48:39 10/24/2015
// Design Name:   adder_8bit
// Module Name:   D:/ISEProject/p1_adder/adder_8bit_tb.v
// Project Name:  p1_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder_8bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder_8bit_tb;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg C0;

	// Outputs
	wire [7:0] SUM;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	adder_8bit uut (
		.A(A), 
		.B(B), 
		.C0(C0), 
		.SUM(SUM), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
         #10
        A=8'b10010011;
        B=8'b00101011;
        C0=1;
        #50
        A=8'b11011101;
        B=8'b10100100;
        C0=0;
	end
      
endmodule

