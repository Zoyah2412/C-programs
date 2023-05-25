#include<stdio.h>
int c1=0;
void display(int (*p)[c1],int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d \t",p[i][j]);
        printf("\n");
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
    display(arr,rows,columns);
    return 0;
}
