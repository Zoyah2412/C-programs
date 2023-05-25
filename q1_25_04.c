#include <stdio.h>
int main(){
    int arr[5];
    printf("Enter elements into array");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    printf("Original array : \n");
    for(int i=0;i<5;i++)
        printf("%d \n",arr[i]);
    printf("Array in reverse : \n");
    for(int j=4;j>=0;j--)
        printf("%d \n",arr[j]);
    return 0;
}