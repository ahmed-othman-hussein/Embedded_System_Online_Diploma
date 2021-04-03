#include "uart.h"
unsigned char string_buffer[100]="learn-in-depth:Ahmed ELtaweel";
unsigned char const string_buffer2[100]="learn-in-depth:Ahmed";

void main(void)
{
	
	uart_Send_string(string_buffer);
}