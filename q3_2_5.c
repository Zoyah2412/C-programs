#include<stdio.h>
int main(){
	int n;
	printf("Enter size for an odd square matrix \n");
	scanf("%d",&n);
	int mid=n/2;
	int arr[n][n];
	printf("Enter the elements of the matrix : ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("\n");
	for(int i=0;i<mid;i++)
	{
		for(int j=mid-i;j>=0;j--)
		    printf(" ");
		for(int k=n-1-i;k<n;k++)
			printf("%d ",arr[i][k]);
		printf("\n");
	}
	for(int i=mid;i<n;i++)
	{
		for(int j=i-mid;j>0;j--)
		    printf(" ");
		for(int k=i;k<n;k++)
			printf("%d ",arr[i][k]);
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<=mid;i++)
	{
		for(int j=mid-i;j<mid;j++)
			printf(" ");
		for(int j=i;j<n-i;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=mid;i<n;i++)
	{
		for(int j=n-1-i;j>0;j--)
			printf(" ");
		for(int j=n-i-1;j<=i;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 0;
}