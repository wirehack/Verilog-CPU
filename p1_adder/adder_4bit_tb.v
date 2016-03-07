`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:09:54 10/27/2015
// Design Name:   adder_4bit
// Module Name:   D:/ISEProject/p1_adder/adder_4bit_tb.v
// Project Name:  p1_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder_4bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder_4bit_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg C0;

	// Outputs
	wire [3:0] SUM;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	adder_4bit uut (
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
        A=4'b1001;
        B=4'b0100;
        C0=1;//no overflow
        #100
        A=4'b1100;
        B=4'b1011;
        C0=0;//overflow
	end
      
endmodule

