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
	input rst,
	output [31:2] PrAddr,
	//output [3:0] PrBE,
	input [31:0] PrRD,
	output [31:0] PrWD,
	output PrWe,
	input [7:2] HWInt
    );
    wire[31:0] pcAddr;//pc address
    wire[31:0] Instr,Instr_if_id;//instruction
   	wire [1:0] RegDst,RegDst_id_ex;
	wire ALUSrc,ALUSrc_id_ex;
	wire [2:0] MemtoReg,MemtoReg_id_ex,MemtoReg_ex_mem,MemtoReg_mem_wb;
	wire RegWrite,RegWrite_id_ex,RegWrite_ex_mem,RegWrite_mem_wb;
	wire MemWrite,MemWrite_id_ex,MemWrite_ex_mem;
	wire Branch,BranchSuccess;
	wire [2:0] CMPOp;
	wire jr;
	wire j;
	wire load,load_id_ex,load_ex_mem;
	wire Over;
	wire [1:0] ExtOp;
	wire [3:0] ALUOp,ALUOp_id_ex;
	wire [4:0] WReg,WReg_ex_mem,WReg_mem_wb;//which reg to write
	wire [31:0] RData1,RData1_id_ex;
	wire [31:0] RData2,RData2_id_ex;
	wire [31:0] imm32,imm32_id_ex;
	wire [31:0] ALUData1,ALUData2;//alu b
	wire [31:0] ALUS,ALUS_ex_mem,ALUS_mem_wb;//alu result
	wire [31:0] dmOut,dmOut_mem_wb;//dm data out
	wire [31:0] pc8,pc8_if_id,pc8_id_ex,pc8_ex_mem,pc8_mem_wb;//pc+8
	wire [31:0] pc4,pc4_if_id;
	wire [31:0] NextPC;//NextPC address
	wire [31:0] WRegData;
	wire [4:0] rs_if_id,rt_if_id,rd_if_id,rs_id_ex,rt_id_ex,rd_id_ex,rd_ex_mem,shamt_if_id,shamt_id_ex;
	wire [5:0] InstrOp;
	wire [5:0] func;
	wire [31:0] din_ex_mem;
	wire [2:0] forwardA,forwardB,forwardD,forwardE;
	wire forwardC;
	wire [31:0] fwAOut,fwBOut,fwDout,fwEout;
	wire [31:0] din_fwC;
	wire [31:0] npc_compute;
	wire [2:0] pc_select;
	wire [31:0] jrRegAddr;//jr register address
	wire en;//if_id reg and pc en
	wire jalr,jalr_id_ex,jalr_ex_mem;
	wire jal,jal_id_ex,jal_ex_mem;
	wire sw,sw_id_ex,sw_ex_mem,sh,sh_id_ex,sh_ex_mem,sb,sb_id_ex,sb_ex_mem;
	wire [2:0] load_ext_op,load_ext_op_id_ex,load_ext_op_ex_mem,load_ext_op_mem_wb;
	wire [3:0] BE;
	wire [31:0] ldOut;
	wire shiftNV,shiftNV_id_ex;
	wire MultDiv;
	wire HiLoWe,HiLoWe_id_ex;
	wire HiLo,HiLo_id_ex;//control
	wire Busy;
	wire [31:0] HI,HILOOut,HILO_ex_mem,HILO_mem_wb,LO;//data
	wire [1:0] MultDivOp,MultDivOp_id_ex;
	wire MultDivStart,MultDivStart_id_ex;
	wire mflo,mflo_id_ex;
	wire mfhi_lo,mfhi_lo_id_ex,mfhi_lo_ex_mem;
	wire CP0We,CP0We_id_ex,CP0We_ex_mem;
	wire [31:0] CP0Out,CP0Out_mem_wb;
	wire [31:2] EPC;
	wire IntBeq;
	wire eret,eret_id_ex,eret_ex_mem,eret_mem_wb;
	wire [31:0] dm_8k_out;
	wire dm_select;
	wire j_branch_type,j_branch_type_id_ex,j_branch_type_ex_mem,j_branch_type_mem_wb;
	wire [31:0] PCCP0;
	wire [31:0] imAddr;
	//wire wb_intBeq;
	wire mfc0,mfc0_id_ex,mfc0_ex_mem,mfc0_mem_wb;
	wire MultDivStart_id_ex_true;
	wire HiLoWe_id_ex_true;
	
	//IF stage
    pc pc_in(.NextPC(NextPC),.Clk(clk),.Reset(rst),.pcAddr(pcAddr),.en(en),.IntBeq(IntBeq));
    assign imAddr=pcAddr-32'h0000_3000;
    im_8k im(.addr(imAddr[12:2]),.dout(Instr));
    assign pc8=pcAddr+8;//if stage
    assign pc4=pcAddr+4;
    mux_32bit_6 pc_mux(.d0(pc4),.d1(npc_compute),.d2(jrRegAddr),.d3(32'h0000_4180),.d4({EPC,2'b0}),.d5(ALUData2),.select(pc_select),.dout(NextPC));//pc4!!!
    //ID stage
    IF_ID if_id_reg(.clk(clk),.rst(rst),.Instr_in(Instr),.pc8_in(pc8),.pc4_in(pc4),.en(en),.Instr_out(Instr_if_id),
    .pc8_out(pc8_if_id),.pc4_out(pc4_if_id),.IntBeq(IntBeq));
    assign InstrOp=Instr_if_id[31:26];//op
	assign func=Instr_if_id[5:0];//func
    assign rs_if_id=Instr_if_id[25:21];
	assign rt_if_id=Instr_if_id[20:16];
	assign rd_if_id=Instr_if_id[15:11];
	assign shamt_if_id=Instr_if_id[10:6];
    ctrl control(.op(InstrOp),.func(func),.bOp(rt_if_id),.c0Op(rs_if_id),.RegDst(RegDst),.ALUSrc(ALUSrc),.MemtoReg(MemtoReg),.RegWrite(RegWrite),
    .MemWrite(MemWrite),.Branch(Branch),.ExtOp(ExtOp),.ALUOp(ALUOp),.jr(jr),.j(j),.load(load),.jalr(jalr),.jal(jal),.CMPOp(CMPOp),.sw(sw),
    .sh(sh),.sb(sb),.load_ext_op(load_ext_op),.shiftNV(shiftNV),.MultDiv(MultDiv),.HiLoWe(HiLoWe),.HiLo(HiLo),.MultDivOp(MultDivOp),
	.MultDivStart(MultDivStart),.mflo(mflo),.mfhi_lo(mfhi_lo),.CP0We(CP0We),.eret(eret),.j_branch_type(j_branch_type),.mfc0(mfc0));
    
    hazard hazard_unit(.rt_id_ex(rt_id_ex),.rs_if_id(rs_if_id),.rt_if_id(rt_if_id),.load_id_ex(load_id_ex),.rs_id_ex(rs_id_ex),
    .WReg_ex_mem(WReg_ex_mem),.WReg(WReg),.load_ex_mem(load_ex_mem),.Branch(Branch),.RegWrite_id_ex(RegWrite_id_ex),.en(en),
    .MemWrite(MemWrite),.jr(jr),.jalr(jalr),.Busy(Busy),.MultDiv(MultDiv),.Start(MultDivStart_id_ex_true),.mfc0_id_ex(mfc0_id_ex),
	.mtc0(CP0We),.mfc0_ex_mem(mfc0_ex_mem));
    	
    npc nextPC(.pc4(pc4_if_id),.imm26(Instr_if_id[25:0]),.npc(npc_compute),.j(j),.Branch(Branch));
	ext extender(.imm16(Instr_if_id[15:0]),.imm32(imm32),.ExtOp(ExtOp));
	GPR gpr(.Clk(clk),.Rst(rst),.A1(rs_if_id),.A2(rt_if_id),.A3(WReg_mem_wb),.We(RegWrite_mem_wb),.WD(WRegData),.RD1(RData1),.RD2(RData2));
	mux_32bit_5 fwD(.d0(RData1),.d1(WRegData),.d2(ALUS_ex_mem),.d3(pc8_ex_mem),.d4(HILO_ex_mem),.select(forwardD),.dout(fwDout));
	mux_32bit_5 fwE(.d0(RData2),.d1(WRegData),.d2(ALUS_ex_mem),.d3(pc8_ex_mem),.d4(HILO_ex_mem),.select(forwardE),.dout(fwEout));
	CMP cmparator(.A(fwDout),.B(fwEout),.Op(CMPOp),.Br(BranchSuccess));
	assign pc_select=IntBeq ? 3'b011 :
					(j==1&&jalr==0||BranchSuccess==1) ? 3'b001:
					(jr==1||jalr==1) ? 3'b010 :
					(eret&&CP0We_id_ex&&rd_id_ex==5'b01110) ? 3'b101 :
					eret ? 3'b100:
					3'b000;
	assign jrRegAddr=fwDout;

	//EX stage
	ID_EX id_ex_reg(.clk(clk),.en(en),.rst(rst),.IntBeq(IntBeq),.RegDst_in(RegDst),.ALUSrc_in(ALUSrc),.MemtoReg_in(MemtoReg),
	.RegWrite_in(RegWrite),.MemWrite_in(MemWrite),.ALUOp_in(ALUOp),.RData1_in(fwDout),.RData2_in(fwEout),.imm32_in(imm32),.rs_in(rs_if_id),
	.rt_in(rt_if_id),.rd_in(rd_if_id),.pc8_in(pc8_if_id),.load_in(load),.jalr_in(jalr),.jal_in(jal),.RegDst_out(RegDst_id_ex),
	.ALUSrc_out(ALUSrc_id_ex),.MemtoReg_out(MemtoReg_id_ex),.RegWrite_out(RegWrite_id_ex),.MemWrite_out(MemWrite_id_ex),
	.ALUOp_out(ALUOp_id_ex),.RData1_out(RData1_id_ex),.RData2_out(RData2_id_ex),.imm32_out(imm32_id_ex),.rs_out(rs_id_ex),
	.rt_out(rt_id_ex),.rd_out(rd_id_ex),.pc8_out(pc8_id_ex),.load_out(load_id_ex),.jalr_out(jalr_id_ex),.jal_out(jal_id_ex),
	.sw_in(sw),.sb_in(sb),.sh_in(sh),.sw_out(sw_id_ex),.sb_out(sb_id_ex),.sh_out(sh_id_ex),.load_ext_op_in(load_ext_op),
	.load_ext_op_out(load_ext_op_id_ex),.shamt_in(shamt_if_id),.shamt_out(shamt_id_ex),.shiftNV_in(shiftNV),.shiftNV_out(shiftNV_id_ex),
	.HiLoWe_in(HiLoWe),.HiLo_in(HiLo),.HiLoWe_out(HiLoWe_id_ex),.HiLo_out(HiLo_id_ex),.MultDivOp_in(MultDivOp),
	.MultDivStart_in(MultDivStart),.mflo_in(mflo),.MultDivOp_out(MultDivOp_id_ex),.MultDivStart_out(MultDivStart_id_ex),
	.mflo_out(mflo_id_ex),.mfhi_lo_in(mfhi_lo),.mfhi_lo_out(mfhi_lo_id_ex),.CP0We_in(CP0We),.CP0We_out(CP0We_id_ex),
	.j_branch_type_in(j_branch_type),.j_branch_type_out(j_branch_type_id_ex),.eret_in(eret),.eret_out(eret_id_ex),.mfc0_in(mfc0),
	.mfc0_out(mfc0_id_ex));
	
	forwarding forwarding_unit(.rs_id_ex(rs_id_ex),.RegWrite_ex_mem(RegWrite_ex_mem),.RegWrite_mem_wb(RegWrite_mem_wb),
	.WReg_ex_mem(WReg_ex_mem),.WReg_mem_wb(WReg_mem_wb),.rt_id_ex(rt_id_ex),.forwardA(forwardA),.forwardB(forwardB),
	.forwardC(forwardC),.MemWrite_ex_mem(MemWrite_ex_mem),.rs_if_id(rs_if_id),.rt_if_id(rt_if_id),.forwardD(forwardD),
	.forwardE(forwardE),.jr(jr),.Branch(Branch),.jalr_ex_mem(jalr_ex_mem),.jal_ex_mem(jal_ex_mem),.jalr(jalr),.mfhi_lo_ex_mem(mfhi_lo_ex_mem),
	.mfc0_ex_mem(mfc0_ex_mem),.mfc0_mem_wb(mfc0_mem_wb),.CP0We_id_ex(CP0We_id_ex));
	
	mux_32bit_5 fwA(.d0(RData1_id_ex),.d1(WRegData),.d2(ALUS_ex_mem),.d3(pc8_ex_mem),.d4(HILO_ex_mem),.select(forwardA),.dout(fwAOut));
	mux_32bit_7 fwB(.d0(RData2_id_ex),.d1(WRegData),.d2(ALUS_ex_mem),.d3(pc8_ex_mem),.d4(HILO_ex_mem),.select(forwardB),.dout(fwBOut));
	mux_32bit_2 mux_shamt(.d0(fwAOut),.d1({27'b0,shamt_id_ex}),.select(shiftNV_id_ex),.dout(ALUData1));
	mux_32bit_2 mux_alu(.d0(fwBOut),.d1(imm32_id_ex),.select(ALUSrc_id_ex),.dout(ALUData2));
	mux_5bit_3 mux_wreg(.d0(rt_id_ex),.d1(rd_id_ex),.d2(5'b11111),.select(RegDst_id_ex),.dout(WReg));
	assign MultDivStart_id_ex_true= IntBeq==1 ? 0 : MultDivStart_id_ex;
	assign HiLoWe_id_ex_true = IntBeq==1 ? 0 : HiLoWe_id_ex;
	multDiv multDiv_in(.Clk(clk),.Rst(rst),.D1(ALUData1),.D2(ALUData2),.HiLo(HiLo_id_ex),.Op(MultDivOp_id_ex),.Start(MultDivStart_id_ex_true),
	.We(HiLoWe_id_ex_true),.Busy(Busy),.HI(HI),.LO(LO),.IntBeq(IntBeq));
	mux_32bit_2 mux_hilo(.d0(HI),.d1(LO),.select(mflo_id_ex),.dout(HILOOut));
	ALU alu(.A(ALUData1),.B(ALUData2),.C(ALUS),.Op(ALUOp_id_ex),.Over(Over));
	//MEM stage
	EX_MEM ex_mem_reg(.clk(clk),.rst(rst),.IntBeq(IntBeq),.MemtoReg_in(MemtoReg_id_ex),.RegWrite_in(RegWrite_id_ex),.MemWrite_in(MemWrite_id_ex),
	.ALUS_in(ALUS),.DMSaveData_in(fwBOut),.WReg_in(WReg),.pc8_in(pc8_id_ex),.load_in(load_id_ex),.jalr_in(jalr_id_ex),
	.jal_in(jal_id_ex),.MemtoReg_out(MemtoReg_ex_mem),.RegWrite_out(RegWrite_ex_mem),.MemWrite_out(MemWrite_ex_mem),
	.ALUS_out(ALUS_ex_mem),.DMSaveData_out(din_ex_mem),.WReg_out(WReg_ex_mem),.pc8_out(pc8_ex_mem),.load_out(load_ex_mem),
	.jalr_out(jalr_ex_mem),.jal_out(jal_ex_mem),.sw_in(sw_id_ex),.sb_in(sb_id_ex),.sh_in(sh_id_ex),.sw_out(sw_ex_mem),
	.sb_out(sb_ex_mem),.sh_out(sh_ex_mem),.load_ext_op_in(load_ext_op_id_ex),.load_ext_op_out(load_ext_op_ex_mem),.HILO_in(HILOOut),
	.HILO_out(HILO_ex_mem),.mfhi_lo_in(mfhi_lo_id_ex),.mfhi_lo_out(mfhi_lo_ex_mem),.rd_in(rd_id_ex),.rd_out(rd_ex_mem),
	.CP0We_in(CP0We_id_ex),.CP0We_out(CP0We_ex_mem),.j_branch_type_in(j_branch_type_id_ex),.j_branch_type_out(j_branch_type_ex_mem),
	.eret_in(eret_id_ex),.eret_out(eret_ex_mem),.mfc0_in(mfc0_id_ex),.mfc0_out(mfc0_ex_mem));
	
	BE_EN be_in(.A(ALUS_ex_mem[1:0]),.sb_ex_mem(sb_ex_mem),.sh_ex_mem(sh_ex_mem),.sw_ex_mem(sw_ex_mem),.BE(BE));
	mux_32bit_2 fwC(.d0(din_ex_mem),.d1(WRegData),.select(forwardC),.dout(din_fwC));
	dm_8k dm(.A(ALUS_ex_mem[12:2]),.WD(din_fwC),.We(MemWrite_ex_mem),.Clk(clk),.RD(dm_8k_out),.BE(BE));
	CP0 CP0_reg(.clk(clk),.rst(rst),.A1(rd_ex_mem),.A2(rd_ex_mem),.DIn(ALUS_ex_mem),.PC(PCCP0[31:2]),.HWInt(HWInt),.We(CP0We_ex_mem),
	.EXLClr(eret),.IntBeq(IntBeq),.EPCOut(EPC),.DOut(CP0Out));
	assign dm_select=(ALUS_ex_mem<=32'h0000_2fff) ? 0 : 1;
	assign PrAddr=ALUS_ex_mem[31:2];
	//assign PrBE=BE;
	assign PrWD=din_fwC;
	assign PrWe= IntBeq==1 ? 0 : MemWrite_ex_mem;
	assign PCCP0= j_branch_type_mem_wb==1 ? pc8_mem_wb-8 : pc8_ex_mem-8;
	mux_32bit_2 dm_mux(.d0(dm_8k_out),.d1(PrRD),.select(dm_select),.dout(dmOut));
	//WB stage
	//assign wb_intBeq=eret_id_ex ? 0 : IntBeq;
	MEM_WB mem_wb_reg(.clk(clk),.rst(rst),.IntBeq(intBeq),.MemtoReg_in(MemtoReg_ex_mem),.RegWrite_in(RegWrite_ex_mem),.dmOut_in(dmOut),
	.ALUS_in(ALUS_ex_mem),.WReg_in(WReg_ex_mem),.pc8_in(pc8_ex_mem),.MemtoReg_out(MemtoReg_mem_wb),.RegWrite_out(RegWrite_mem_wb),
	.dmOut_out(dmOut_mem_wb),.ALUS_out(ALUS_mem_wb),.WReg_out(WReg_mem_wb),.pc8_out(pc8_mem_wb),.load_ext_op_in(load_ext_op_ex_mem),
	.load_ext_op_out(load_ext_op_mem_wb),.HILO_in(HILO_ex_mem),.HILO_out(HILO_mem_wb),.CP0Out_in(CP0Out),.CP0Out_out(CP0Out_mem_wb),
	.j_branch_type_in(j_branch_type_ex_mem),.j_branch_type_out(j_branch_type_mem_wb),.eret_in(eret_ex_mem),.eret_out(eret_mem_wb),
	.mfc0_in(mfc0_ex_mem),.mfc0_out(mfc0_mem_wb));
	
	Load_ext load_extender(.A(ALUS_mem_wb[1:0]),.Din(dmOut_mem_wb),.Op(load_ext_op_mem_wb),.Dout(ldOut));
	mux_32bit_5 mux_wregdata(.d0(ALUS_mem_wb),.d1(ldOut),.d2(pc8_mem_wb),.d3(HILO_mem_wb),.d4(CP0Out_mem_wb),.select(MemtoReg_mem_wb),
	.dout(WRegData));
	
endmodule
