#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows :");
	scanf("%d", &n);
	int i,j,mid=n-2;
	if(n%2 != 0)
	{
		for(i=1;i<=n/2+1;i++)
		{
			for(j=1;j<=i;j++)
				printf("%d\t",j);
			for(j=1;j<=mid;j++)
				printf("%d\t",i);
			mid-=2;
			for(j=i;j>=1;j--)
			{
				if(j!=n/2+1)
					printf("%d\t",j);
			}
			printf("\n");
		}
		mid=1;
		for(i=n/2;i>=1;i--)
		{
			for(j=1;j<=i;j++)
				printf("%d\t",j);
			for(j=1;j<=mid;j++)
				printf("%d\t",i);
			mid+=2;
			for(j=i;j>=1;j--)
				printf("%d\t",j);
			printf("\n");
		}
	}
	else
	{
		for(i=1;i<=n/2;i++)
		{
			for(j=1;j<=i;j++)
				printf("%d\t",j);
			for(j=1;j<=mid;j++)
				printf("%d\t",i);
			mid-=2;
			for(j=i;j>=1;j--)
			{
				if(j!=n/2+1)
					printf("%d\t",j);
			}
			printf("\n");
		}
		mid=0;
		for(i=n/2;i>=1;i--)
		{
			for(j=1;j<=i;j++)
				printf("%d\t",j);
			for(j=1;j<=mid;j++)
				printf("%d\t",i);
			mid+=2;
			for(j=i;j>=1;j--)
				printf("%d\t",j);
			printf("\n");
		}
	}
	return 0;
}