`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:46:41 12/22/2015 
// Design Name: 
// Module Name:    SegmentDisplay 
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
module SegmentDisplay(
	output reg [15:0] DAT_O,
	output seg4x7_a,
	output seg4x7_b,
	output seg4x7_c,
	output seg4x7_d,
	output seg4x7_e,
	output seg4x7_f,
	output seg4x7_g,
	output seg4x7_dp,
	output reg [3:0] seg4x7_sel,
	input clk,
	input rst,
	input WE_I,
	input [15:0] DAT_I
    );
	reg [3:0] num;
	reg [6:0] SEVEN_SEG0_AG;
	reg [15:0] count;
	assign seg4x7_dp=1'b0;
	initial
	begin
		count=0;
		num=0;
		DAT_O=0;
	end
	assign {seg4x7_a,seg4x7_b,seg4x7_c,seg4x7_d,seg4x7_e,seg4x7_f,seg4x7_g}=SEVEN_SEG0_AG;
	always @(posedge clk /*or posedge Reset*/)
	begin
		if(rst)
		begin
			DAT_O=0;
			num=0;
			count=0;
		end
		else if(WE_I)
		begin
			DAT_O=DAT_I;
			count=5000;
			seg4x7_sel=4'b0001;
		end
		else if(count!=0)
			count=count-1;
		else
			begin
				count=5000;
				case(seg4x7_sel)
					4'b0001:	begin num=DAT_O[11:8];  seg4x7_sel=4'b0010; end//left 4 to left 3
					4'b0010:	begin num=DAT_O[7:4];   seg4x7_sel=4'b0100; end//left 3 to left 2
					4'b0100:	begin num=DAT_O[3:0];   seg4x7_sel=4'b1000; end//left 2 to left 1
					4'b1000:	begin num=DAT_O[15:12]; seg4x7_sel=4'b0001; end//left 1 to left 4
					default:	begin end
				endcase
			end
	end
	always@*
	begin
		case(num)
			4'b0000: SEVEN_SEG0_AG=7'b0000_001;
			4'b0001: SEVEN_SEG0_AG=7'b1001_111;
			4'b0010: SEVEN_SEG0_AG=7'b0010_010;
			4'b0011: SEVEN_SEG0_AG=7'b0000_110;
			4'b0100: SEVEN_SEG0_AG=7'b1001_100;
			4'b0101: SEVEN_SEG0_AG=7'b0100_100;
			4'b0110: SEVEN_SEG0_AG=7'b0100_000;
			4'b0111: SEVEN_SEG0_AG=7'b0001_111;
			4'b1000: SEVEN_SEG0_AG=7'b0000_000;
			4'b1001: SEVEN_SEG0_AG=7'b0000_100;
			4'b1010: SEVEN_SEG0_AG=7'b0001_000;
			4'b1011: SEVEN_SEG0_AG=7'b1100_000;
			4'b1100: SEVEN_SEG0_AG=7'b0110_001;
			4'b1101: SEVEN_SEG0_AG=7'b1000_010;
			4'b1110: SEVEN_SEG0_AG=7'b0110_000;
			4'b1111: SEVEN_SEG0_AG=7'b0111_000;
		endcase	
	end
endmodule
