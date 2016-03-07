`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:26:00 11/20/2015 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
	input clk,
	input rst,
	input en,
	input IntBeq,
	input [1:0] RegDst_in,
	input ALUSrc_in,
	input [2:0] MemtoReg_in,
	input RegWrite_in,
	input MemWrite_in,
	input [3:0] ALUOp_in,
	input [31:0] RData1_in,
	input [31:0] RData2_in,
	input [31:0] imm32_in,
	input [4:0] rs_in,
	input [4:0] rt_in,
	input [4:0] rd_in,
	input [4:0] shamt_in,
	input [31:0] pc8_in,
	input load_in,
	input jalr_in,
	input jal_in,
	input sb_in,
	input sh_in,
	input sw_in,
	input shiftNV_in,
	input [2:0] load_ext_op_in,
	input HiLoWe_in,
	input HiLo_in,
	input [1:0] MultDivOp_in,
	input MultDivStart_in,
	input mflo_in,
	input mfhi_lo_in,
	input CP0We_in,
	input j_branch_type_in,
	input mfc0_in,
	output reg mfc0_out,
	output reg j_branch_type_out,
	output reg CP0We_out,
	output reg mfhi_lo_out,
	output reg [1:0] MultDivOp_out,
	output reg MultDivStart_out,
	output reg mflo_out,
	output reg HiLoWe_out,
	output reg HiLo_out,
	output reg shiftNV_out,
	output reg [2:0] load_ext_op_out,
	output reg sb_out,
	output reg sh_out,
	output reg sw_out,
	output reg [1:0] RegDst_out,
	output reg ALUSrc_out,
	output reg [2:0] MemtoReg_out,
	output reg RegWrite_out,
	output reg MemWrite_out,
	output reg [3:0] ALUOp_out,
	output reg [31:0] RData1_out,
	output reg [31:0] RData2_out,
	output reg [31:0] imm32_out,
	output reg [4:0] rs_out,
	output reg [4:0] rt_out,
	output reg [4:0] rd_out,
	output reg [4:0] shamt_out,
	output reg [31:0] pc8_out,
	output reg load_out,
	output reg jalr_out,
	output reg jal_out
    );
    initial
    	begin
			RegDst_out=0;
			ALUSrc_out=0;
			MemtoReg_out=0;
			RegWrite_out=0;
			MemWrite_out=0;
			ALUOp_out=0;
			RData1_out=0;
			RData2_out=0;
			imm32_out=0;
			rs_out=0;
			rt_out=0;
			rd_out=0;
			pc8_out=0;
			load_out=0;
			jalr_out=0;
			jal_out=0;
			sb_out=0;
			sh_out=0;
			sw_out=0;
			load_ext_op_out=0;
			shamt_out=0;
			shiftNV_out=0;
			MultDivOp_out=0;
			MultDivStart_out=0;
			mflo_out=0;
			HiLoWe_out=0;
			HiLo_out=0;
			mfhi_lo_out=0;
			CP0We_out=0;
			j_branch_type_out=0;
			mfc0_out=0;
		end
	always@(posedge clk /*or posedge rst*/)
	begin
		if(rst)
    	begin
			RegDst_out=0;
			ALUSrc_out=0;
			MemtoReg_out=0;
			RegWrite_out=0;
			MemWrite_out=0;
			ALUOp_out=0;
			RData1_out=0;
			RData2_out=0;
			imm32_out=0;
			rs_out=0;
			rt_out=0;
			rd_out=0;
			pc8_out=0;
			load_out=0;
			jalr_out=0;
			jal_out=0;
			sb_out=0;
			sh_out=0;
			sw_out=0;
			load_ext_op_out=0;
			shamt_out=0;
			shiftNV_out=0;
			MultDivOp_out=0;
			MultDivStart_out=0;
			mflo_out=0;
			HiLoWe_out=0;
			HiLo_out=0;
			mfhi_lo_out=0;
			CP0We_out=0;
			j_branch_type_out=0;
			mfc0_out=0;
		end
		else if(en==0||IntBeq)
		begin
			RegDst_out=0;
			ALUSrc_out=0;
			MemtoReg_out=0;
			RegWrite_out=0;
			MemWrite_out=0;
			ALUOp_out=0;
			RData1_out=0;
			RData2_out=0;
			imm32_out=0;
			rs_out=0;
			rt_out=0;
			rd_out=0;
			pc8_out=pc8_in;//!!!
			load_out=0;
			jalr_out=0;
			jal_out=0;
			sb_out=0;
			sh_out=0;
			sw_out=0;
			load_ext_op_out=0;
			shamt_out=0;
			shiftNV_out=0;
			MultDivOp_out=0;
			MultDivStart_out=0;
			mflo_out=0;
			HiLoWe_out=0;
			HiLo_out=0;
			mfhi_lo_out=0;
			CP0We_out=0;
			j_branch_type_out=0;
			mfc0_out=0;
		end
		else
		begin
			RegDst_out=RegDst_in;
			ALUSrc_out=ALUSrc_in;
			MemtoReg_out=MemtoReg_in;
			RegWrite_out=RegWrite_in;
			MemWrite_out=MemWrite_in;
			ALUOp_out=ALUOp_in;
			RData1_out=RData1_in;
			RData2_out=RData2_in;
			imm32_out=imm32_in;
			rs_out=rs_in;
			rt_out=rt_in;
			rd_out=rd_in;
			pc8_out=pc8_in;
			load_out=load_in;
			jalr_out=jalr_in;
			jal_out=jal_in;
			sb_out=sb_in;
			sh_out=sh_in;
			sw_out=sw_in;
			load_ext_op_out=load_ext_op_in;
			shamt_out=shamt_in;
			shiftNV_out=shiftNV_in;
			MultDivOp_out=MultDivOp_in;
			MultDivStart_out=MultDivStart_in;
			mflo_out=mflo_in;
			HiLoWe_out=HiLoWe_in;
			HiLo_out=HiLo_in;
			mfhi_lo_out=mfhi_lo_in;
			CP0We_out=CP0We_in;
			j_branch_type_out=j_branch_type_in;
			mfc0_out=mfc0_in;
		end
			
	end

endmodule
