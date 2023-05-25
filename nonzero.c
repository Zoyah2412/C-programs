#include<stdio.h>
int c=0;
int nonzero(int (*p)[c],int row, int column){
    int nz=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if (p[i][j]!=0)
                nz++;
        }
    }
    return nz;
}  
int main(){
    int i,j,n;
    printf("Enter no. of rows and columns of square matrix : ");
	scanf("%d",&n);
    c=n;
    int arr[n][n];
    printf("Enter elements into the 2D array : ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    int ctr=nonzero(arr,n,n);
    printf("Number of non zero elements = %d",ctr);
    return 0;
}