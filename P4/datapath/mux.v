`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:47 11/14/2015 
// Design Name: 
// Module Name:    mux 
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
module mux_5bit_3(
	input [4:0] d0,
	input [4:0] d1,
	input [4:0] d2,
	input [1:0] select,
	output reg [4:0] dout
    );
	always@*
	begin
		case(select)
			2'b00: dout=d0;
			2'b01: dout=d1;
			2'b10: dout=d2;
		endcase
	end
endmodule
module mux_32bit_2(
	input [31:0] d0,
	input [31:0] d1,
	input select,
	output reg [31:0] dout
    );
	always@*
	begin
		if(select==0)
			dout=d0;
		else
			dout=d1;
	end
endmodule
module mux_32bit_3(
	input [31:0] d0,
	input [31:0] d1,
	input [31:0] d2,
	input [1:0] select,
	output reg [31:0] dout
    );
	always@*
	begin
		case(select)
			2'b00: dout=d0;
			2'b01: dout=d1;
			2'b10: dout=d2;
		endcase
	end
endmodule