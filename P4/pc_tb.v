`timescale 1ns / 1ps
`include"datapath/pc.v"
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:34:02 11/15/2015
// Design Name:   pc
// Module Name:   D:/ISEProject/P4/pc_tb.v
// Project Name:  P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pc
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pc_tb;

	// Inputs
	reg [31:2] NextPC;
	reg Clk;
	reg Reset;

	// Outputs
	wire [31:2] Instr;

	// Instantiate the Unit Under Test (UUT)
	pc uut (
		.NextPC(NextPC), 
		.Clk(Clk), 
		.Reset(Reset), 
		.Instr(Instr)
	);

	initial begin
		NextPC = 32'h00003000;
		Clk = 0;
		Reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
    always #10 Clk=~Clk;
      
endmodule

