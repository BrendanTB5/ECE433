`timescale 1ns / 1ps
//one read port and one write port
//both read and write are synchronized by clock
//WriteOrRead=1 to write and 0 to read

module RAM60x7bits(address, din, dout, writeOrread, reset, clock);
parameter DataWidth=7;
parameter MemorySize=60;
input [5:0] address;
input [DataWidth-1:0] din;
input reset, clock, writeOrread;
output [DataWidth-1:0] dout;

reg[DataWidth-1:0] memory [MemorySize-1:0]; 
parameter LineFeed=8'h0A, CarriageReturn=8'h0D, NUL=8'h00;
always@(posedge clock)
	if(reset==1) begin
	memory[0]<=LineFeed;	memory[1]<=CarriageReturn;	memory[2]<="E";	memory[3]<="C";
	memory[4]<="E";	memory[5]<="4";	memory[6]<="3";	memory[7]<="3";
	memory[8]<=" ";	memory[9]<="F";	memory[10]<="a";	memory[11]<="l";
	memory[12]<="l";	memory[13]<=" ";	memory[14]<="2";	memory[15]<="0";
	memory[16]<="1";	memory[17]<="9";	memory[18]<=" ";	memory[19]<=" ";
	memory[20]<=" ";	memory[21]<="D";	memory[22]<="i";	memory[23]<="g";
	memory[24]<="i";	memory[25]<="t";	memory[26]<="a";	memory[27]<="l";
	memory[28]<=" ";
	memory[29]<="S";	memory[30]<="y";	memory[31]<="s";	memory[32]<="t";
	memory[33]<="e";	memory[34]<="m";	memory[35]<="s";	memory[36]<=" ";
	memory[37]<="w";	memory[38]<="i";	memory[39]<="t";	memory[40]<="h";
	memory[41]<="V";	memory[42]<="e";	memory[43]<="r";	memory[44]<="i";
	memory[45]<="l";	memory[46]<="o";	memory[47]<="g";	memory[48]<=" ";
	memory[49]<="H";	memory[50]<="D";	memory[51]<="L";

	memory[52]<=CarriageReturn;
	memory[53]<=LineFeed;	//line feed
	memory[54]<=NUL; memory[55]<=NUL; memory[56]<=NUL; memory[57]<=NUL; memory[58]<=NUL; memory[59]<=NUL;
	end 
	else
		if (writeOrread==1) memory[address] <= din; 
		else  memory[address]<= memory[address];
assign dout = memory[address];
endmodule
