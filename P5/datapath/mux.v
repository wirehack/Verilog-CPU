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
	output [4:0] dout
    );
    assign dout=(select==2'b00)? d0 :((select==2'b01) ? d1 : d2);
    
endmodule
module mux_32bit_2(
	input [31:0] d0,
	input [31:0] d1,
	input select,
	output [31:0] dout
    );
    assign dout=(select==0)? d0 :d1;
    
endmodule
module mux_32bit_3(
	input [31:0] d0,
	input [31:0] d1,
	input [31:0] d2,
	input [1:0] select,
	output [31:0] dout
    );
    assign dout=(select==2'b00)? d0 :((select==2'b01) ? d1 : d2);
	
endmodule
module mux_32bit_4(
	input [31:0] d0,
	input [31:0] d1,
	input [31:0] d2,
	input [31:0] d3,
	input [1:0] select,
	output [31:0] dout
    );
	assign dout=(select==2'b00)? d0 :((select==2'b01) ? d1 :((select==2'b10) ? d2 :d3));
	
endmodule

module mux_32bit_5(
	input [31:0] d0,
	input [31:0] d1,
	input [31:0] d2,
	input [31:0] d3,
	input [31:0] d4,
	input [2:0] select,
	output [31:0] dout
    );
	assign dout=(select==3'b000)? d0 :((select==3'b001) ? d1 :((select==3'b010) ? d2 :(select==3'b011) ? d3 : d4));
	
endmodule