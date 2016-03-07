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
	inout [7:2] HWInt,
	input interrupt1,
	input interrupt0,
	//input [3:0] PrBE,?
	output [31:0] PrRD,
	output [3:2] dev_addr,
	input [31:0] dev0_rd,
	input [31:0] dev1_rd,
	output [31:0] dev_wd,
	input WeCPU,
	output WeDEV0,
	output WeDEV1
    );
	wire HitDEV0,HitDEV1;
	assign HitDEV0=PrAddr[31:4]==28'h0000_7f0 ? 1 : 0;
	assign HitDEV1=PrAddr[31:4]==28'h0000_7f1 ? 1 : 0;
	assign PrRD=(HitDEV0) ? dev0_rd : dev1_rd;
	assign WeDEV0=WeCPU&HitDEV0;
	assign WeDEV1=WeCPU&HitDEV1;
	assign dev_wd=PrWD;//?
	assign dev_addr=PrAddr[3:2];
	assign HWInt={4'b0,interrupt1,interrupt0};
	

endmodule
