`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:10:08 10/19/2015
// Design Name:   counter
// Module Name:   D:/ISEProject/counter/counter_tb.v
// Project Name:  counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

	// Inputs
	reg clk;
	reg reset;
    reg[3:0] set;
	// Outputs
	wire[3:0] counter;
	wire carry_out;
	// Instantiate the Unit Under Test (UUT)
	counter uut (
	    .set(set),
		.clk(clk), 
		.reset(reset), 
		.counter(counter), 
		.carry_out(carry_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
        set=0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100 reset=1;
		#30 reset=0;
		#150 set=4'b1101;
		#180 set=0;
	end
    always #10 clk=~clk;
endmodule

