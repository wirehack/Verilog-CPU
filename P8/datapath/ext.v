`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:05:47 11/13/2015 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] imm16,
    output reg [31:0] imm32,
    input [1:0] ExtOp
    );
	always@*
	case(ExtOp)
		2'b00:	imm32=$signed(imm16);
		2'b01:	imm32={16'b0000_0000_0000_0000,imm16};
		2'b10:	imm32={imm16,16'b0000_0000_0000_0000};
		default:imm32=$signed(imm16);
	endcase
endmodule
