#include<stdio.h>
int c1=0;
void sum(int (*p)[c1],int r, int c){
    int s;
    for(int i=0;i<r;i++){
        s=0;
        for(int j=0;j<c;j++)
            s=s+p[i][j];
        printf("Sum of elements of row %d : %d\n",(i+1),s);
    }
}
int main(){
    int i,j,rows,columns;
    printf("Enter no. of rows : ");
	scanf("%d",&rows);
	printf("Enter no. of columns : ");
	scanf("%d",&columns);
    c1=columns;
    int arr[rows][columns];
    printf("Enter elements into the 2D array : ");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
    sum(arr,rows,columns);
    return 0;
}
