#include<stdio.h>
int main(){
	int n,key,a=1,flag=0;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements into the array :" );
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched for :");
	scanf("%d",&key);
	while(a==1){
		for(int i=0;i<n;i++){
			if(arr[i]==key){
				flag=1;
				key=key*3;
			}
		}
		if(flag==0){
			printf("%d",key);
			a=0;
		}
		flag=0;
	}
	return 0;
}