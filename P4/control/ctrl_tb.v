`timescale 1ns / 1ps
`include "ctrl.v"
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:08:20 11/15/2015
// Design Name:   ctrl
// Module Name:   D:/ISEProject/P4/control/ctrl_tb.v
// Project Name:  P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ctrl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ctrl_tb;

	// Inputs
	reg [5:0] op;
	reg [5:0] func;

	// Outputs
	wire [1:0] RegDst;
	wire ALUSrc;
	wire [1:0] MemtoReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire IfBeq;
	wire [1:0] ExtOp;
	wire [1:0] ALUOp;
	wire jr;
	// Instantiate the Unit Under Test (UUT)
	ctrl uut (
		.op(op), 
		.func(func), 
		.RegDst(RegDst), 
		.ALUSrc(ALUSrc), 
		.MemtoReg(MemtoReg), 
		.RegWrite(RegWrite), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.IfBeq(IfBeq), 
		.ExtOp(ExtOp), 
		.ALUOp(ALUOp),
		.jr(jr)
	);

	initial begin
		// Initialize Inputs
		op = 0;
		func = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

