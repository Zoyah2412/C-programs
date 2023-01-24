#include<stdio.h>
void display(int *a,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n,i,steps;
	printf("enter number of elements you enter in the array:");
	scanf("%d",&n);
	int arr[n]; 
	for(i=0;i<n;i++){
		printf("enter element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("original array:\n");
	display(arr,n);
	int i,f=0,count=0;
	for(i=0;i<size;i++){
		count++;
		if(a[i]%2!=0){
			int j=i;
			while(a[j]%2!=0 && j<size-1){
				j++;  
				count++;
			}
			if(a[j]%2!=0){
				f=1;
				break;
			}
			else{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			count++;
		}if(f==1){
			break;
		}
	}
	printf("\nmodified array:\n");
	display(arr,n);
	printf("\nno of steps it took %d",steps);
	return 0;
}