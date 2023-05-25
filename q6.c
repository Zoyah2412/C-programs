#include<stdio.h>

int main(){
	unsigned char n1 = 0x35;
	unsigned char n2 = 0x64;
	unsigned char a = n1&(0xf0);
	unsigned char b = n1&(0x0f);
	unsigned char c = b<<4;
	unsigned char d = n2&(0xf0);
	unsigned char d1 = d>>4;
	unsigned char e = n2&(0x0f);
	unsigned char a1 = (a|d1);
	unsigned char a2 = (c|e);
	printf("The new hexadecimal number 1 is: %x \n", a1);
	printf("The new hexadecimal number 2 is: %x", a2);
	return 0;
}