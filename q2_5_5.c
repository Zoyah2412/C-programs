#include<stdio.h>
int main(){
	int n,mid,count=1;
	printf("Enter size of a 2 to the power n matrix:\n");
	scanf("%d",&n);
	int arr[n][n];
	mid=n/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=count;
			count++;
		}
	}
	printf("Original matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("New matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<mid && j<mid){
				int temp=a[i][j];
				arr[i][j]=arr[i+mid][j+mid];
				arr[i+mid][j+mid]=temp;
			}else if((j>=mid && j<n) && i<mid){
				int temp=arr[i][j];
				arr[i][j]=arr[i+mid][j-mid];
				arr[i+mid][j-mid]=temp;
			}
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}