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
    input sys_clk,
	input sys_rstn,
    input UART_RxD0,//uart
	output UART_TxD0,
    input [4:1] user_pb,
	input [7:0] user0_dipsw,
	input [7:0] user1_dipsw,
	input [7:0] user2_dipsw,
	input [7:0] user3_dipsw,
   output seg4x7_1_a,//segment display
	output seg4x7_1_b,
	output seg4x7_1_c,
	output seg4x7_1_d,
	output seg4x7_1_e,
	output seg4x7_1_f,
	output seg4x7_1_g,
	output seg4x7_1_dp,
	output [4:1] seg4x7_1_sel,
	output seg4x7_2_a,
	output seg4x7_2_b,
	output seg4x7_2_c,
	output seg4x7_2_d,
	output seg4x7_2_e,
	output seg4x7_2_f,
	output seg4x7_2_g,
	output seg4x7_2_dp,
	output [4:1] seg4x7_2_sel,
	output [15:0] user_led//led

    );
    wire clk,clk2;
	 wire reset;
    wire [31:2] PrAddr;
    //wire [3:0] PrBE;
    wire [31:0] PrRD;
	wire [31:0] PrWD;
	wire PrWe;
	wire [7:2] HWInt;
	wire timer_we,uart_we,led_we,segmentDis_we;
	wire [31:0] timer_rd,switch_rd,led_rd,uart_rd;
	wire [15:0] segmentDis_rd1,segmentDis_rd2;
	wire [4:2] dev_addr;
	wire [31:0] dev_wd;
	wire interrupt0;
	assign switch_rd={~user3_dipsw,~user2_dipsw,~user1_dipsw,~user0_dipsw};
	assign led_rd={16'b0,user_led};
	assign reset=~sys_rstn;
	clk_ip_core clock(.CLK_OUT1(clk),.CLK_OUT2(clk2),.CLK_IN1(sys_clk));
    mips cpu(.clk(clk),.clk2(clk2),.rst(reset),.PrAddr(PrAddr),.PrRD(PrRD),.PrWD(PrWD),.PrWe(PrWe),.HWInt(HWInt));
    bridge bridge_in(.PrAddr(PrAddr),.PrWD(PrWD),.PrRD(PrRD),.dev_addr(dev_addr),.timer_rd(timer_rd),.uart_rd(uart_rd),
	.switch_rd(switch_rd),.led_rd(led_rd),.segmentDis_rd({segmentDis_rd2,segmentDis_rd1}/*???*/),.dev_wd(dev_wd),.WeCPU(PrWe),.timer_we(timer_we),
	.uart_we(uart_we),.led_we(led_we),.segmentDis_we(segmentDis_we),.HWInt(HWInt),.interrupt0(interrupt0));
	COCOTimer timer(.CLK_I(clk),.RST_I(reset),.ADD_I(dev_addr[3:2]),.WE_I(timer_we),.DAT_I(dev_wd),.DAT_O(timer_rd),.IRQ(interrupt0));
	MiniUART MiniUART(.DAT_O(uart_rd),.TxD(UART_TxD0),.CLK_I(clk),.DAT_I(dev_wd),.RST_I(reset),.ADD_I(dev_addr),.STB_I(1'b1),
	.WE_I(uart_we),.RxD(UART_RxD0));
	SegmentDisplay SegmentDis1(.DAT_O(segmentDis_rd1),.seg4x7_a(seg4x7_1_a),.seg4x7_b(seg4x7_1_b),.seg4x7_c(seg4x7_1_c),.seg4x7_d(seg4x7_1_d),
	.seg4x7_e(seg4x7_1_e),.seg4x7_f(seg4x7_1_f),.seg4x7_g(seg4x7_1_g),.seg4x7_dp(seg4x7_1_dp),.seg4x7_sel(seg4x7_1_sel),.clk(clk),
	.rst(reset),.WE_I(segmentDis_we),.DAT_I(dev_wd[15:0])/*???*/);
	SegmentDisplay SegmentDis2(.DAT_O(segmentDis_rd2),.seg4x7_a(seg4x7_2_a),.seg4x7_b(seg4x7_2_b),.seg4x7_c(seg4x7_2_c),.seg4x7_d(seg4x7_2_d),
	.seg4x7_e(seg4x7_2_e),.seg4x7_f(seg4x7_2_f),.seg4x7_g(seg4x7_2_g),.seg4x7_dp(seg4x7_2_dp),.seg4x7_sel(seg4x7_2_sel),.clk(clk),
	.rst(reset),.WE_I(segmentDis_we),.DAT_I(dev_wd[31:16])/*???*/);
	LED led(.clk(clk),.rst(reset),.Din(dev_wd[15:0]),.We(led_we),.user_led(user_led));
	

endmodule
