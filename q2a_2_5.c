#include <stdio.h>
int main(){
    int i,j,rows,columns,flag=0;
    printf("Enter no. of rows : \n");
	scanf("%d",&rows);
	printf("\nenter no. of columns : \n");
	scanf("%d",&columns);
    int arr[rows][columns];
    for(i=0;i<columns;i++){
        if (flag==0){
            for(j=0;j<rows;j++)
                scanf("%d",&arr[j][i]);
            flag=1;
        }
        else{
            for(j=rows-1;j>=0;j--)
                scanf("%d",&arr[j][i]);
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