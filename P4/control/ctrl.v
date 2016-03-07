`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:26:10 11/13/2015 
// Design Name: 
// Module Name:    ctrl 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ctrl(
	input [5:0] op,
	input [5:0] func,
	output [1:0] RegDst,
	output ALUSrc,
	output [1:0] MemtoReg,
	output RegWrite,
	output MemRead,
	output MemWrite,
	output IfBeq,
	output [1:0] ExtOp,
	output [1:0] ALUOp,
	output jr,
	output jal
    );
	assign RegDst[0]=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0];
	assign RegDst[1]=~op[5]*~op[4]*~op[3]*~op[2]*op[1]*op[0];
	assign ALUSrc=~op[5]*~op[4]*op[3]*op[2]*~op[1]*op[0]+op[5]*~op[4]*~op[3]*~op[2]*op[1]*op[0]+op[5]*~op[4]*op[3]*~op[2]*op[1]*op[0]+~op[5]*~op[4]*op[3]*op[2]*op[1]*op[0];
	assign MemtoReg[0]=op[5]*~op[4]*~op[3]*~op[2]*op[1]*op[0];
	assign MemtoReg[1]=~op[5]*~op[4]*~op[3]*~op[2]*op[1]*op[0];
	assign RegWrite=~(op[5]*~op[4]*op[3]*~op[2]*op[1]*op[0]+~op[5]*~op[4]*~op[3]*op[2]*~op[1]*~op[0]+~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[3]);
	assign MemRead= op[5]*~op[4]*~op[3]*~op[2]*op[1]*op[0];
	assign MemWrite= op[5]*~op[4]*op[3]*~op[2]*op[1]*op[0];
	assign IfBeq =~op[5]*~op[4]*~op[3]*op[2]*~op[1]*~op[0];
	assign ExtOp[1]=~op[5]*~op[4]*op[3]*op[2]*op[1]*op[0];
	assign ExtOp[0]=~op[5]*~op[4]*op[3]*op[2]*~op[1]*op[0];
	assign ALUOp[1]=~(~op[5]*~op[4]*op[3]*op[2]*~op[1]*op[0]+~op[5]*~op[4]*op[3]*op[2]*op[1]*op[0]);
	assign ALUOp[0]=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[1]+~op[5]*~op[4]*op[3]*op[2]*~op[1]*op[0]+~op[5]*~op[4]*~op[3]*op[2]*~op[1]*~op[0]+~op[5]*~op[4]*op[3]*op[2]*op[1]*op[0];
	assign jr=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[3];
	assign jal=~op[5]*~op[4]*~op[3]*~op[2]*op[1]*op[0];
endmodule
