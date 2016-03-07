`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:37 11/20/2015 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
	input clk,
	input rst,
	input IntBeq,
	input [2:0] MemtoReg_in,
	input RegWrite_in,
	input MemWrite_in,
	input [31:0] ALUS_in,
	input [31:0] DMSaveData_in,//careful
	input [4:0] WReg_in,
	input [31:0] pc8_in,
	input load_in,
	input jalr_in,
	input jal_in,
	input sb_in,
	input sh_in,
	input sw_in,
	input [2:0] load_ext_op_in,
	input [31:0] HILO_in,
	input mfhi_lo_in,
	input [4:0] rd_in,
	input CP0We_in,
	input j_branch_type_in,
	input eret_in,
	input mfc0_in,
	output reg mfc0_out,
	output reg eret_out,
	output reg j_branch_type_out,
	output reg CP0We_out,
	output reg [4:0] rd_out,
	output reg mfhi_lo_out,
	output reg [31:0] HILO_out,
	output reg [2:0] load_ext_op_out,
	output reg sb_out,
	output reg sh_out,
	output reg sw_out,
	output reg [2:0] MemtoReg_out,
	output reg RegWrite_out,
	output reg MemWrite_out,
	output reg [31:0] ALUS_out,
	output reg [31:0] DMSaveData_out,//careful
	output reg [4:0] WReg_out,
	output reg [31:0] pc8_out,
	output reg load_out,
	output reg jalr_out,
	output reg jal_out
    );
    initial
    begin
	MemtoReg_out=0;
	RegWrite_out=0;
	MemWrite_out=0;
	ALUS_out=0;
	DMSaveData_out=0;
	WReg_out=0;
	pc8_out=0;
	load_out=0;
	jalr_out=0;
	jal_out=0;
	sb_out=0;
	sh_out=0;
	sw_out=0;
	load_ext_op_out=0;
	HILO_out=0;
	mfhi_lo_out=0;
	rd_out=0;
	CP0We_out=0;
	j_branch_type_out=0;
	eret_out=0;
	mfc0_out=0;
	end
	always@(posedge clk or posedge rst)
	begin
	if(rst)
	begin
	MemtoReg_out=0;
	RegWrite_out=0;
	MemWrite_out=0;
	ALUS_out=0;
	DMSaveData_out=0;
	WReg_out=0;
	pc8_out=0;
	load_out=0;
	jalr_out=0;
	jal_out=0;
	sb_out=0;
	sh_out=0;
	sw_out=0;
	load_ext_op_out=0;
	HILO_out=0;
	mfhi_lo_out=0;
	rd_out=0;
	CP0We_out=0;
	j_branch_type_out=0;
	eret_out=0;
	mfc0_out=0;
	end
	else if(IntBeq)
	begin
	MemtoReg_out=0;
	RegWrite_out=0;
	MemWrite_out=0;
	ALUS_out=0;
	DMSaveData_out=0;
	WReg_out=0;
	pc8_out=pc8_in;
	load_out=0;
	jalr_out=0;
	jal_out=0;
	sb_out=0;
	sh_out=0;
	sw_out=0;
	load_ext_op_out=0;
	HILO_out=0;
	mfhi_lo_out=0;
	rd_out=0;
	CP0We_out=0;
	j_branch_type_out=0;
	eret_out=0;
	mfc0_out=0;
	end
	else
	begin
	MemtoReg_out=MemtoReg_in;
	RegWrite_out=RegWrite_in;
	MemWrite_out=MemWrite_in;
	ALUS_out=ALUS_in;
	DMSaveData_out=DMSaveData_in;
	WReg_out=WReg_in;
	pc8_out=pc8_in;
	load_out=load_in;
	jalr_out=jalr_in;
	jal_out=jal_in;
	sb_out=sb_in;
	sh_out=sh_in;
	sw_out=sw_in;
	load_ext_op_out=load_ext_op_in;
	HILO_out=HILO_in;
	mfhi_lo_out=mfhi_lo_in;
	rd_out=rd_in;
	CP0We_out=CP0We_in;
	j_branch_type_out=j_branch_type_in;
	eret_out=eret_in;
	mfc0_out=mfc0_in;
	end
end
endmodule
