#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(int j=10-1;j>=0;j--)
        printf("%d \n",arr[j]);
    return 0;
}