#include <stdio.h>
int main(){
    int i,j,rows,columns,flag=0;
    printf("Enter no. of rows : ");
	scanf("%d",&rows);
	printf("Enter no. of columns : ");
	scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter elements of array : \n");
    for(i=0;i<rows;i++){
        if (flag==0){
            for(j=0;j<columns;j++)
                scanf("%d",&arr[i][j]);
            flag=1;
        }
        else{
            for(j=columns-1;j>=0;j--)
                scanf("%d",&arr[i][j]);
            flag=0;
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
    return 0;
}