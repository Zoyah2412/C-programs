#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter 2^n no. of rows and columns for first array : \n");
	scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements of first array : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Original array : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
    int a=n/2,temp=0;
    for(i=0;i<n;i++){
        temp=0;
        for(j=0;j<a;j++){
            temp=arr[i][j];
            arr[i][j]=arr[i+a][j+a];
            arr[i+a][j+a]=temp;
        }
    }
    printf("New array : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
}

