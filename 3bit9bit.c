#include<stdio.h>
int main(){
	long int a = 0x25;
	long int b = a>>2;
	long int c = b&(0x001); //3rd bit
	long int d = a>>8;
	long int e = d&(0x001); //9th bit
	printf("The 3rd bit of the number is: %x \n", c);
	printf("The 9th bit of the number is: %x", e);
	return 0;
}