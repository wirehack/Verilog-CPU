`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:56:32 11/28/2015 
// Design Name: 
// Module Name:    Load_ext 
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
module Load_ext(
	input [1:0] A,
	input [31:0] Din,
	input [2:0] Op,
	output reg [31:0] Dout
    );
	always@*
	begin
		case(Op)
			3'b000:	Dout=Din;
			3'b001:	Dout=$unsigned(A==2'b00 ? Din[7:0] :(A==2'b01 ? Din[15:8]:(A==2'b10)? Din[23:16]:Din[31:24]));
			3'b010:	Dout=$signed(A==2'b00 ? Din[7:0] :(A==2'b01 ? Din[15:8]:(A==2'b10)? Din[23:16]:Din[31:24]));
			3'b011:	Dout=$unsigned(A[1]==0 ? Din[15:0] : Din[31:16]);
			3'b100:	Dout=$signed(A[1]==0 ? Din[15:0] : Din[31:16]);
		endcase
	end
endmodule
