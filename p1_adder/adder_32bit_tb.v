`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:23:25 10/27/2015
// Design Name:   adder_32bit
// Module Name:   D:/ISEProject/p1_adder/adder_32bit_tb.v
// Project Name:  p1_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder_32bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder_32bit_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg C0;

	// Outputs
	wire [31:0] SUM;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	adder_32bit uut (
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
        A=32'b10010011100110111001010110010011;
        B=32'b01010011110101001001011101010101;
        C0=1;
        #100
        A=32'b10010011100110111001000111010011;
        B=32'b11010011100101001110011011100101;
        C0=0;//overflow
	end
      
endmodule

