`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:02 12/09/2015 
// Design Name: 
// Module Name:    COCOTimer 
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
module COCOTimer(
	input CLK_I,
	input RST_I,
	input [3:2] ADD_I,
	input WE_I,
	input [31:0] DAT_I,
	output [31:0] DAT_O,
	output IRQ
    );
    parameter IDLE=2'b00;
    parameter LOAD=2'b01;
    parameter CNTING=2'b10;
    parameter INT=2'b11;
    reg [1:0] state;
    reg interrupt;
    //reg control
    reg im;
    reg[2:1] mode;
    reg enable;
    //
    reg[31:0] preset;
    reg[31:0] count;
    assign IRQ=(im&&interrupt&&mode==2'b00) ? 1 : 0;
    assign DAT_O=	ADD_I==2'b00 ? {28'b0,im,mode,enable} :
    				ADD_I==2'b01 ? preset :
    				count;
    initial
    begin
    	mode=0;
    	preset=100;
    	enable=1;
    	count=preset;
    	im=1;
    	interrupt=0;
    end
    always@(posedge CLK_I or posedge RST_I)
    begin
		if(RST_I)
		begin
			im=0;
			mode=0;
			enable=0;
			preset=0;
			count=0;
			state=IDLE;
			interrupt=0;
		end
		else
		begin
			if(WE_I&&ADD_I==2'b00)
				begin 
					im=DAT_I[3]; 
					mode=DAT_I[2:1]; 
					enable=DAT_I[0]; 
				end	
			case(state)
				IDLE: begin
					interrupt=0;
					if (WE_I&&ADD_I==2'b01)
                  		begin 
                  			state = LOAD;
                  			preset=DAT_I;
                  		end
               		if(enable)
                  		state=LOAD;
            		end
            	LOAD : begin
               		if (enable==0)
                  		state = IDLE;
               		 else if (enable==1)
              		 begin
                 		state = CNTING;
                  		//interrupt=0;
                  		count=preset;
              			end
            		end
            	CNTING : begin
               		if (enable==0)
                  		state = IDLE;
               		else if (count==1)
               		begin
               			if(mode==2'b01)
               				state=LOAD;
                  		state = INT;
                  		interrupt=1;
               		end
               		else
           				count=count-1;
            		end
            INT : begin 
            		if(enable==0)
            			state=IDLE;
            		else if (WE_I&&ADD_I==2'b01)
                  		begin 
                  			state = IDLE;
                  			preset=DAT_I;
                  		end
                  end
         endcase
        end
	end
	/*always@(posedge CLK_I or posedge RST_I)
	begin
		if(RST_I)
		begin
			im=0;
			mode=0;
			enable=0;
			preset=0;
			count=0;
		end
		else if(WE_I)
		begin
			case(ADD_I)
				2'b00: begin im=DAT_I[3]; mode=DAT_I[2:1]; enable=DAT_I[0]; end
				2'b01: begin preset=DAT_I; count=preset; enable=1; end//im=1?
			endcase
		end
		else if(count==0)
		begin
			if(mode==2'b01)
				count=preset;
		end
		else if(enable)
			count=count-1;
	end*/

endmodule
