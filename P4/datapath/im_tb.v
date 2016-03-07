`timescale 1ns / 1ps
`include "im.v"
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:52:08 11/15/2015
// Design Name:   im_4k
// Module Name:   D:/ISEProject/P4/datapath/im_tb.v
// Project Name:  P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: im_4k
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module im_tb;

	// Inputs
	reg [11:2] addr;

	// Outputs
	wire [31:0] dout;

	// Instantiate the Unit Under Test (UUT)
	im_4k uut (
		.addr(addr), 
		.dout(dout)
	);

	initial begin
		// Initialize Inputs
		addr = 32'h00003000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

