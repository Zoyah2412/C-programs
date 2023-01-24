#include <stdio.h>
int main(){
    int i,j,rows1,columns1,rows2,columns2;
    printf("Enter no. of rows of first array : \n");
	scanf("%d",&rows1);
	printf("Enter no. of columns of first array : \n");
	scanf("%d",&columns1);
    printf("Enter no. of rows of second array : \n");
	scanf("%d",&rows2);
	printf("Enter no. of columns of second array : \n");
	scanf("%d",&columns2);
    if(columns1==rows2){
        int arr1[rows1][columns1],arr2[rows2][columns2],product[rows1][columns2];
        printf("Enter elements of first array : \n");
        for(i=0;i<rows1;i++){
            for(j=0;j<columns1;j++)
                scanf("%d",&arr1[i][j]);
        }
        printf("Enter elements of second array : \n");
        for(i=0;i<rows2;i++){
            for(j=0;j<columns2;j++)
                scanf("%d",&arr2[i][j]);
        }
        for(i=0;i<rows1;i++){
            for(j=0;j<columns2;j++){
                product[i][j]=0;
                for(int k=0;k<columns1;k++)
                    product[i][j]=product[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }
        printf("Product of the two arrays = \n");
        for(i=0;i<rows1;i++){
            for(j=0;j<columns2;j++)
            printf("%d \t",product[i][j]);
        printf("\n");
        }
    }
    else{
        printf("Invalid input");
    }
    return 0;
}