`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:25:19 12/10/2015 
// Design Name: 
// Module Name:    microSystem 
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
module microSystem(
    input clk,
    input reset
    );
    wire [31:2] PrAddr;
    //wire [3:0] PrBE;
    wire [31:0] PrRD;
	wire [31:0] PrWD;
	wire PrWe;
	wire [7:2] HWInt;
	wire WeDEV0,WeDEV1;
	wire [31:0] dev0_rd,dev1_rd;
	wire [3:2] dev_addr;
	wire [31:0] dev_wd;
	wire interrupt0,interrupt1;
    mips cpu(.clk(clk),.rst(reset),.PrAddr(PrAddr),.PrRD(PrRD),.PrWD(PrWD),.PrWe(PrWe),.HWInt(HWInt));
    bridge bridge_in(.PrAddr(PrAddr),.PrWD(PrWD),.PrRD(PrRD),.dev_addr(dev_addr),.dev0_rd(dev0_rd),.dev1_rd(dev1_rd),
	.dev_wd(dev_wd),.WeCPU(PrWe),.WeDEV0(WeDEV0),.WeDEV1(WeDEV1),.HWInt(HWInt),.interrupt0(interrupt0),.interrupt1(interrupt1));
	COCOTimer timer0(.CLK_I(clk),.RST_I(reset),.ADD_I(dev_addr),.WE_I(WeDEV0),.DAT_I(dev_wd),.DAT_O(dev0_rd),.IRQ(interrupt0));
	COCOTimer timer1(.CLK_I(clk),.RST_I(reset),.ADD_I(dev_addr),.WE_I(WeDEV1),.DAT_I(dev_wd),.DAT_O(dev1_rd),.IRQ(interrupt1));


endmodule
