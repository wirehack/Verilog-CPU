`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:26:10 11/13/2015 
// Design Name: 
// Module Name:    ctrl 
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
module ctrl(
	input [5:0] op,
	input [5:0] func,
	input [4:0] bOp,
	input [4:0] c0Op,
	output [1:0] RegDst,
	output ALUSrc,
	output [2:0] MemtoReg,
	output RegWrite,
	output MemWrite,
	output Branch,
	output [1:0] ExtOp,
	output [3:0] ALUOp,
	output jr,
	output j,//j and jal and jalr
	output j_branch_type,
	output load,
	output jalr,
	output jal,
	output [2:0] CMPOp,
	output sw,
	output sb,
	output sh,
	output [2:0] load_ext_op,
	output shiftNV,
	output MultDiv,
	output HiLoWe,
	output HiLo,
	output [1:0] MultDivOp,
	output MultDivStart,
	output mflo,
	output mfhi_lo,
	output CP0We,
	output eret,
	output mfc0
    );
    wire addu,subu,ori,lui,add,sub,mult,multu,div,divu,sll,srl,sra,sllv,srlv,srav,andSignal,orSignal,xorSignal,norSignal,addi,addiu;
    wire andi,xori,slt,slti,sltiu,sltu,bne,blez,bgtz,bltz,bgez,mfhi,mthi,mtlo,beq,lb,lbu,lh,lhu,lw,mtc0;
    assign eret=~op[5]*op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*func[3]*~func[2]*~func[1]*~func[0];
    assign mfc0=~op[5]*op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~c0Op[4]*~c0Op[3]*~c0Op[2]*~c0Op[1]*~c0Op[0];
    assign mtc0=~op[5]*op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~c0Op[4]*~c0Op[3]*c0Op[2]*~c0Op[1]*~c0Op[0];
    assign lb=op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0];
    assign lbu=op[5]*~op[4]*~op[3]*op[2]*~op[1]*~op[0];
    assign lh=op[5]*~op[4]*~op[3]*~op[2]*~op[1]*op[0];
    assign lhu=op[5]*~op[4]*~op[3]*op[2]*~op[1]*op[0];
    assign lw=op[5]*~op[4]*~op[3]*~op[2]*op[1]*op[0];
    assign sb=op[5]*~op[4]*op[3]*~op[2]*~op[1]*~op[0];
    assign sh=op[5]*~op[4]*op[3]*~op[2]*~op[1]*op[0];
    assign addu=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*~func[3]*~func[2]*~func[1]*func[0];
    assign subu=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*~func[3]*~func[2]*func[1]*func[0];
    assign ori=~op[5]*~op[4]*op[3]*op[2]*~op[1]*op[0];
    assign sw=op[5]*~op[4]*op[3]*~op[2]*op[1]*op[0];
    assign lui=~op[5]*~op[4]*op[3]*op[2]*op[1]*op[0];
    assign beq=~op[5]*~op[4]*~op[3]*op[2]*~op[1]*~op[0];
    assign add=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*~func[3]*~func[2]*~func[1]*~func[0];
    assign sub=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*~func[3]*~func[2]*func[1]*~func[0];
    assign mult=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*func[3]*~func[2]*~func[1]*~func[0];
    assign multu=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*func[3]*~func[2]*~func[1]*func[0];
    assign div=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*func[3]*~func[2]*func[1]*~func[0];
    assign divu=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*func[3]*~func[2]*func[1]*func[0];
    assign sll=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*~func[4]*~func[3]*~func[2]*~func[1]*~func[0];
    assign srl=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*~func[4]*~func[3]*~func[2]*func[1]*~func[0];
    assign sra=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*~func[4]*~func[3]*~func[2]*func[1]*func[0];
    assign sllv=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*~func[4]*~func[3]*func[2]*~func[1]*~func[0];
    assign srlv=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*~func[4]*~func[3]*func[2]*func[1]*~func[0];
    assign srav=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*~func[4]*~func[3]*func[2]*func[1]*func[0];
    assign andSignal=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*~func[3]*func[2]*~func[1]*~func[0];
    assign orSignal=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*~func[3]*func[2]*~func[1]*func[0];
    assign xorSignal=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*~func[3]*func[2]*func[1]*~func[0];
    assign norSignal=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*~func[3]*func[2]*func[1]*func[0];
    assign addi=~op[5]*~op[4]*op[3]*~op[2]*~op[1]*~op[0];
    assign addiu=~op[5]*~op[4]*op[3]*~op[2]*~op[1]*op[0];
    assign andi=~op[5]*~op[4]*op[3]*op[2]*~op[1]*~op[0];
    assign xori=~op[5]*~op[4]*op[3]*op[2]*op[1]*~op[0];
    assign slt=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*func[3]*~func[2]*func[1]*~func[0];
    assign slti=~op[5]*~op[4]*op[3]*~op[2]*op[1]*~op[0];
    assign sltiu=~op[5]*~op[4]*op[3]*~op[2]*op[1]*op[0];
    assign sltu=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*func[5]*~func[4]*func[3]*~func[2]*func[1]*func[0];
    assign bne=~op[5]*~op[4]*~op[3]*op[2]*~op[1]*op[0];// not equal
    assign blez=~op[5]*~op[4]*~op[3]*op[2]*op[1]*~op[0];// less than or equal to 0
    assign bgtz=~op[5]*~op[4]*~op[3]*op[2]*op[1]*op[0];//greater than 0
    assign bltz=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*op[0]*~bOp[4]*~bOp[3]*~bOp[2]*~bOp[1]*~bOp[0];//less than 0
    assign bgez=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*op[0]*~bOp[4]*~bOp[3]*~bOp[2]*~bOp[1]*bOp[0];//greater than or euqal to 0
    assign mfhi=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*~func[3]*~func[2]*~func[1]*~func[0];
    assign mflo=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*~func[3]*~func[2]*func[1]*~func[0];
    assign mthi=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*~func[3]*~func[2]*~func[1]*func[0];
    assign mtlo=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*func[4]*~func[3]*~func[2]*func[1]*func[0];
    
	assign RegDst[0]=addu+subu+jalr+add+sub+sll+srl+sra+sllv+srlv+srav+andSignal+orSignal+xorSignal+norSignal+slt+sltu+mfhi+mflo;
	assign RegDst[1]=jal;
	assign ALUSrc=ori+lw+sw+lui+addi+addiu+andi+xori+slti+sltiu+lb+lbu+lh+lhu+sb+sh;
	assign MemtoReg[0]=lw+lb+lbu+lh+lhu+mfhi+mflo;
	assign MemtoReg[1]=jal+jalr+mfhi+mflo;
	assign MemtoReg[2]=mfc0;
	assign RegWrite=~(sw+Branch+jr+~op[5]*~op[4]*~op[3]*~op[2]*op[1]*~op[0]+sb+sh+mult+multu+div+divu+mthi+mtlo+mtc0);
	assign MemWrite= sw+sb+sh;
	assign Branch=beq+bne+blez+bgtz+bltz+bgez;
	assign ExtOp[1]=lui;
	assign ExtOp[0]=ori+andi+xori+sltiu;
	assign ALUOp[0]=sll+sra+sllv+srav+orSignal+xorSignal+xori+slt+slti+ori+lui;
	assign ALUOp[1]=addu+subu+lw+sw+add+sub+srl+srlv+xorSignal+addi+addiu+xori+slt+slti+lb+lbu+lh+lhu+sb+sh+mtc0;
	assign ALUOp[2]=subu+sub+sll+srl+sllv+srlv+norSignal+slt+slti;
	assign ALUOp[3]=sll+srl+sra+sllv+srlv+srav+norSignal+sltu+mtc0+sltiu;
	assign jr=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*~func[4]*func[3]*~func[2]*~func[1]*~func[0];
	assign j=~op[5]*~op[4]*~op[3]*~op[2]*op[1]*~op[0]+jal+jalr;
	assign jalr=~op[5]*~op[4]*~op[3]*~op[2]*~op[1]*~op[0]*~func[5]*~func[4]*func[3]*~func[2]*~func[1]*func[0];
	assign jal=~op[5]*~op[4]*~op[3]*~op[2]*op[1]*op[0];
	assign j_branch_type=j+jr+Branch;
	assign CMPOp[0]=bne+bgtz+bgez;
	assign CMPOp[1]=blez+bgtz+beq;
	assign CMPOp[2]=bltz+bgez+beq;
	assign load_ext_op[0]=lbu+lhu;
	assign load_ext_op[1]=lb+lhu;
	assign load_ext_op[2]=lh;
	assign shiftNV=sll+srl+sra;
	assign load=lw+lh+lhu+lb+lbu;
	assign MultDiv=mult+multu+div+divu+mfhi+mflo+mthi+mtlo;
	assign HiLoWe=mthi+mtlo;
	assign HiLo=mthi;
	assign MultDivOp[0]=mult+div;
	assign MultDivOp[1]=divu+div;
	assign MultDivStart=mult+multu+div+divu;
	assign mfhi_lo=mfhi+mflo;
	assign CP0We=mtc0;
endmodule

