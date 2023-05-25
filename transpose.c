#include <stdio.h>
int main(){
    int i,j,rows,columns;
    printf("Enter no. of rows : ");
	scanf("%d",&rows);
	printf("Enter no. of columns : ");
	scanf("%d",&columns);
    int arr[rows][columns];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Original array : \n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
    int transpose[columns][rows];
    for(i=0;i<rows;i++){
        for(j=i;j<columns;j++){
            transpose[j][i]=arr[i][j]   ;
        }
    }
    printf("New array : \n");
    for(i=0;i<columns;i++){
        for(j=0;j<rows;j++)
            printf("%d \t",transpose[i][j]);
        printf("\n");
    }
    return 0;
}   