`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:26:59 11/13/2015 
// Design Name: 
// Module Name:    mips 
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
module mips(
	input clk,
	input rst
    );
    wire[31:2] pcAddr;//pc address
    wire[31:0] Instr;//instruction
   	wire [1:0] RegDst;
	wire ALUSrc;
	wire [1:0] MemtoReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire IfBeq;
	wire jr;
	wire jal;
	wire [1:0] ExtOp;
	wire [1:0] ALUOp;
	wire [4:0] WReg;//which reg to write
	wire [31:0] RData1;
	wire [31:0] RData2;
	wire [31:0] imm32;
	wire [31:0] ALUData2;//alu b
	wire [31:0] ALUS;//alu result
	wire zero;//alu zero
	wire [31:0] dmOut;//dm data out
	wire [31:0] pc4;//pc+4
	wire [31:2] NextPC;//NextPC address
	wire [31:0] WRegData;
    pc pc_in(.NextPC(NextPC),.Clk(clk),.Reset(rst),.Instr(pcAddr));
    im_4k im(.addr(pcAddr[11:2]),.dout(Instr));
    ctrl control(.op(Instr[31:26]),.func(Instr[5:0]),.RegDst(RegDst),.ALUSrc(ALUSrc),.MemtoReg(MemtoReg),.RegWrite(RegWrite),.MemRead(MemRead),.MemWrite(MemWrite),.IfBeq(IfBeq),.ExtOp(ExtOp),.ALUOp(ALUOp),.jr(jr),.jal(jal));
	mux_5bit_3 mux_wreg(.d0(Instr[20:16]),.d1(Instr[15:11]),.d2(5'b11111),.select(RegDst),.dout(WReg));
	ext extender(.imm16(Instr[15:0]),.imm32(imm32),.ExtOp(ExtOp));
	GPR gpr(.Clk(clk),.Reset(rst),.RReg1(Instr[25:21]),.RReg2(Instr[20:16]),.WReg(WReg),.RegWrite(RegWrite),.WData(WRegData),.RData1(RData1),.RData2(RData2));
	mux_32bit_2 mux_alu(.d0(RData2),.d1(imm32),.select(ALUSrc),.dout(ALUData2));
	ALU alu(.A(RData1),.B(ALUData2),.S(ALUS),.ALUOp(ALUOp),.Zero(zero));
	npc nextPC(.pcAddr(pcAddr),.imm26(Instr[25:0]),.regAddr(ALUS),.IfBeq(IfBeq),.Zero(zero),.jr(jr),.npc(NextPC),.pc4(pc4),.jal(jal),.imm32(imm32));
	dm_4k dm(.addr(ALUS[11:2]),.din(RData2),.we(MemWrite),.clk(clk),.dout(dmOut));
	mux_32bit_3 mux_wregdata(.d0(ALUS),.d1(dmOut),.d2(pc4),.select(MemtoReg),.dout(WRegData));
	
endmodule