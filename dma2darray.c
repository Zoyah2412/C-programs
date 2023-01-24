// Create a NxN matrix and resize it to MxM
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int row, col;
    printf("Enter rows-");
    scanf("%d",&row);
    printf("Enter column- ");
    scanf("%d",&col);
    int *rw=(int *)malloc(row*sizeof(int *));
    int cl=(int *)malloc(col*sizeof(int));
    for(int j=0;j<row;j++)
    {
        scanf("%d",rw+j);
        for(int i=0;i<col;i++)
        {
            scanf("%d",cl+i);
        }
    }
    for(int j=0;j<row;j++)
    {
        printf("%d ",*(rw+j));
        for(int i=0;i<col;i++)
        {
            printf("%d ",*(cl+i));
        }
    }
    return 0;
}