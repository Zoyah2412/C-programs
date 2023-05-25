#include <stdio.h>
int main(){
    int i,j,rows,columns;
    printf("Enter no. of rows : \n");
	scanf("%d",&rows);
	printf("\nEnter no. of columns : \n");
	scanf("%d",&columns);
    int arr1[rows][columns],arr2[rows][columns],dif[rows][columns];
    printf("Enter elements of first array : \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            scanf("%d",&arr1[i][j]);
    }
    printf("Enter elements of second array : \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            scanf("%d",&arr2[i][j]);
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            dif[i][j]=arr1[i][j]-arr2[i][j];
    }
    printf("Difference between the two arrays = \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            printf("%d \t",dif[i][j]);
        printf("\n");
    }
}