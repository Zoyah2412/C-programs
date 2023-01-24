#include<stdio.h>
int main(){
	int n,b1,b2,b3,b4;
    printf("Enter a number : ");
	scanf("%i",&n);
	b1=n&(0xff);
	b2=(n&(0x0000ff00))>>8;
	b3=(n&(0x00ff0000))>>16;
	b4=(n&(0xff000000))>>24;
	printf("%d %d %d %d",b1,b2,b3,b4);
	return 0;
}