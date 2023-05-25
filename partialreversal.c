#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    int x=0;
    for(int j=0;j<(5-1)/2;j++){
        x=arr[j];
        arr[j]=arr[5-j-1];
        arr[5-j-1]=x;
    }
    for(int k=0;k<10;k++)
        printf("%d\n",arr[k]);
    return 0;
}