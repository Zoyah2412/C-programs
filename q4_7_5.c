#include<stdio.h>
//To reverse the array using pointer.
int main(){
	int n;
	printf("Enter the array upper limit:\n");
	scanf("%d", &n);
	int arr[n];
	int i,j,temp,count=1;
	for(i=0;i<n;i++)
	{
		*(arr+i)=count;
		count++;
	}
	printf("Original array : ");
	for(i=0;i<n;i++)
		printf("%d ",*(arr+i));
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=*(arr+i);
		*(arr+i)=*(arr+j);
        *(arr+j)=temp;
	}
	printf("\nArray in reverse :");
	for(i=0;i<n;i++)
		printf("%d ",*(arr+i));
	return 0;
}