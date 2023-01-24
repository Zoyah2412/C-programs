// transpose then reverse for clockwise rotation
#include <stdio.h>
int main(){
    int i,j;
    int rows=3,columns=3;
    int arr[rows][columns];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            scanf("%d",&arr[i][j]);
    }
    int temp=0;
    for(i=0;i<rows;i++){
        for(j=i;j<columns;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    int x;
    for(i=0;i<rows;i++){    
        for(int j=0;j<(columns-1)/2;j++){
            x=arr[i][j];
            arr[i][j]=arr[i][columns-j-1];
            arr[i][columns-j-1]=x;
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}