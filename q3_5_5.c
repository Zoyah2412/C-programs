#include<stdio.h>
int main(){
	printf("Enter values into a 4x4 matrix\n");
    int arr[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int arr1[3][3],arr2[3][3];
	printf("\nFirst 3x3 matrix is :\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr1[i][j]=arr[i][j];
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("Second 3x3 matrix is :\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr2[i][j]=arr[i+1][j+1];
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	long int arr3[3][3];
	printf("New matrix is : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr3[i][j]=0;
			for(int k=0;k<3;k++){
				arr3[i][j]+=(arr1[i][k]*arr2[k][j]);
			}
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}