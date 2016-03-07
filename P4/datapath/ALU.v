`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:30 11/13/2015 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [1:0] ALUOp,
    output reg [31:0] S,
    output reg Zero
    );
    always@*
    begin
    case(ALUOp)
	2'b10:	S=A+B;
	2'b11:	S=A-B;
	2'b01:	S=A|B;
	endcase
	if(S==0)
		Zero=1;
	else
		Zero=0;
	end
endmodule
