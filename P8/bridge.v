`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:56 12/06/2015 
// Design Name: 
// Module Name:    bridge 
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
module bridge(
	input [31:2] PrAddr,
	input [31:0] PrWD,
	output [7:2] HWInt,
	input interrupt0,
	output [31:0] PrRD,
	output [4:2] dev_addr,
	input [31:0] timer_rd,
	input [31:0] uart_rd,
	input [31:0] switch_rd,
	input [31:0] led_rd,
	input [31:0] segmentDis_rd,
	output [31:0] dev_wd,
	input WeCPU,
	output timer_we,
	output uart_we,
	output led_we,
	output segmentDis_we
    );
	
	wire HitTimer,HitUart,HitSwitch,HitLED,HitSegmentDis;
	assign HitTimer=({PrAddr,2'b00}>=32'h0000_7f00&&{PrAddr,2'b00}<=32'h0000_7f0b) ? 1'b1 : 1'b0;
	assign HitUart=({PrAddr,2'b00}>=32'h0000_7f40&&{PrAddr,2'b00}<=32'h0000_7f5f) ? 1'b1 : 1'b0;
	assign HitSwitch=({PrAddr,2'b00}>=32'h0000_7f20&&{PrAddr,2'b00}<=32'h0000_7f23) ? 1'b1 : 1'b0;
	assign HitLED=({PrAddr,2'b00}>=32'h0000_7f24&&{PrAddr,2'b00}<=32'h0000_7f27) ? 1'b1 : 1'b0;
	assign HitSegmentDis=({PrAddr,2'b00}>=32'h0000_7f28&&{PrAddr,2'b00}<=32'h0000_7f2B) ? 1'b1 : 1'b0;
	assign PrRD=HitTimer ? timer_rd :
				HitUart ? uart_rd :
				HitSwitch ? switch_rd :
				HitLED ? led_rd :
				HitSegmentDis ? segmentDis_rd :
				32'b0;
	assign timer_we=WeCPU&&HitTimer;
	assign uart_we=WeCPU&&HitUart;
	assign led_we=WeCPU&&HitLED;
	assign segmentDis_we=WeCPU&&HitSegmentDis;
	assign dev_wd=PrWD;//?
	assign dev_addr=PrAddr[4:2];
	assign HWInt={5'b0,interrupt0};
	

endmodule
