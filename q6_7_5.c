#include<stdio.h>
int main(){
	int n;
	printf("Enter length of array : ");
	scanf("%d",&n);
	int arr[n];
	int *ptr=&arr[0];
    printf("Enter elements into array : ")
	for(int i=0;i<n;i++)
		scanf("%d",ptr+i);
    printf("Original array : ");
	for(int i=0;i<n;i++)
		printf("%d ",*(ptr+i));
	int a=n/2;
	int b=a/2;
	int *c=&arr[a];
	for(int i=0;i<b;i++){
		int temp=*(ptr+i);
		*(ptr+i)=*(c-1-i);
		*(c-1-i)=temp;
	}
	for(int i=0;i<a;i++){
		int temp=*(ptr+i);
		*(ptr+i)=*(c+i);
		*(c+i)=temp;
	}
	printf("New array : \n");
	for(int i=0;i<n;i++)
		printf("%d ",*(ptr+i));
	return 0;
}