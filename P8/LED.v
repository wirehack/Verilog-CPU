`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:08:17 12/23/2015 
// Design Name: 
// Module Name:    LED 
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
module LED(
	input clk,
	input rst,
	input [15:0] Din,
	input We,
	output reg [15:0] user_led
    );
	
	always @(posedge clk /*or posedge rst*/)
	begin
		if(rst)
			user_led=0;
		else if(We)
			user_led=~Din;
	end
endmodule
