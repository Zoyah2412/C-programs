#include<stdio.h>
void pattern1(int n,char c){
	int i,j;
	for(i=n;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	
}
void pattern2(){
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=0;j<i;j++)
			printf("-");
		printf("\n");
	}
}
int main(){
	pattern1(4,'*');
	printf("AB\n");
	pattern1(3,'=');
	printf("CD\n");
	pattern2();
	printf("EX\n");
	pattern1(2,'#');
	return 0;
}