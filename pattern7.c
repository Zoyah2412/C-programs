#include<stdio.h>
int main ()
{
	for (int i=1;i<=4;i++)
    {
		int a=4-i;
		for(int j=1;j<=a;j++)
        {
		printf(" ");
		}
		for(int j=a;j<4;j++)
        {
			printf("1 ");
		}
		printf("\n");
	}
    for (int i=3;i>=1;i--)
    {
		int a=4-i;
		for(int j=3;j>=i;j--)
        {
		printf(" ");
		}
		for(int j=1;j<=i;j++)
        {
			printf("1 ");
		}
		printf("\n");
	}
	return 0;
}