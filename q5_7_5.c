#include<stdio.h>
int main(){
	int n;
	printf("Enter length of array : ");
	scanf("%d",&n);
	int arr[n];
	int *ptr=&arr[0];
	printf("Enter elements into the array : ");
	for(int i=0;i<n;i++)
		scanf("%d",(ptr+i));
    printf("Original array : ");
	for(int i=0;i<n;i++)
		printf("%d ",*(ptr+i));
	for(int i=0;i<n/2;i+=2){
		int temp=*(ptr+i);
		*(ptr+i)=*(ptr+n-1-i);
		*(ptr+n-1-i)=temp;
	}
	for(int i=1;i<=n/2;i+=2){
		int temp=*(ptr+i);
		*(ptr+i)=*(ptr+n-1-i);
		*(ptr+n-1-i)=temp;
	}
    printf("New array : ");
	for(int i=0;i<n;i++)
		printf("%d ",*(ptr+i));
	return 0;
}