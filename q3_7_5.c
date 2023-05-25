#include <stdio.h>
int main(){
	int n;
	printf("Enter length of array :\n");
	scanf("%d",&n);
	int arr[n],i,count=1;
	for(i=0;i<n;i++){
		*(arr+i)=count;
		count++;
	}
	printf("Array in forward direction : ");
	for(i=0;i<n;i++)
		printf("%d ",*(arr+i));
	count=1;
	for(i=n-1;i>=0;i--){
		*(arr+i)=count;
		count++;
	}
	printf("\nArray in backward direction : ");
	for(i=0;i<n;i++)
		printf("%d ",*(arr+i));
	return 0;
}
