`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:42:26 12/24/2015
// Design Name:   microSystem
// Module Name:   D:/ISEProject/P8/microSystem_tb.v
// Project Name:  P8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: microSystem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module microSystem_tb;

	// Inputs
	reg sys_clk;
	reg sys_rstn;
	reg UART_RxD;
	reg [3:0] user_pb;
	reg [7:0] user0_dipsw;
	reg [7:0] user1_dipsw;
	reg [7:0] user2_dipsw;
	reg [7:0] user3_dipsw;

	// Outputs
	wire UART_TxD;
	wire seg4x7_1_a;
	wire seg4x7_1_b;
	wire seg4x7_1_c;
	wire seg4x7_1_d;
	wire seg4x7_1_e;
	wire seg4x7_1_f;
	wire seg4x7_1_g;
	wire seg4x7_1_dp;
	wire [3:0] seg4x7_1_sel;
	wire seg4x7_2_a;
	wire seg4x7_2_b;
	wire seg4x7_2_c;
	wire seg4x7_2_d;
	wire seg4x7_2_e;
	wire seg4x7_2_f;
	wire seg4x7_2_g;
	wire seg4x7_2_dp;
	wire [3:0] seg4x7_2_sel;
	wire [15:0] user_led;

	// Instantiate the Unit Under Test (UUT)
	microSystem uut (
		.sys_clk(sys_clk), 
		.sys_rstn(sys_rstn), 
		.UART_RxD0(UART_RxD), 
		.UART_TxD0(UART_TxD), 
		.user_pb(user_pb), 
		.user0_dipsw(user0_dipsw), 
		.user1_dipsw(user1_dipsw), 
		.user2_dipsw(user2_dipsw), 
		.user3_dipsw(user3_dipsw), 
		.seg4x7_1_a(seg4x7_1_a), 
		.seg4x7_1_b(seg4x7_1_b), 
		.seg4x7_1_c(seg4x7_1_c), 
		.seg4x7_1_d(seg4x7_1_d), 
		.seg4x7_1_e(seg4x7_1_e), 
		.seg4x7_1_f(seg4x7_1_f), 
		.seg4x7_1_g(seg4x7_1_g), 
		.seg4x7_1_dp(seg4x7_1_dp), 
		.seg4x7_1_sel(seg4x7_1_sel), 
		.seg4x7_2_a(seg4x7_2_a), 
		.seg4x7_2_b(seg4x7_2_b), 
		.seg4x7_2_c(seg4x7_2_c), 
		.seg4x7_2_d(seg4x7_2_d), 
		.seg4x7_2_e(seg4x7_2_e), 
		.seg4x7_2_f(seg4x7_2_f), 
		.seg4x7_2_g(seg4x7_2_g), 
		.seg4x7_2_dp(seg4x7_2_dp), 
		.seg4x7_2_sel(seg4x7_2_sel), 
		.user_led(user_led)
	);

	initial begin
		// Initialize Inputs
		sys_clk = 0;
		sys_rstn = 0;
		UART_RxD = 0;
		user_pb = 0;
		user0_dipsw = 8'b1;
		user1_dipsw = 8'b0001_1110;
		user2_dipsw = 0;
		user3_dipsw = 0;

		// Wait 100 ns for global reset to finish
		#155;
        sys_rstn = 1;
		// Add stimulus here

	end
	always #5 sys_clk=~sys_clk;
      
endmodule

