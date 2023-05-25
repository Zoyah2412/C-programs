#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr[i]);
    int temp=0,start=0,end=1;
    for(int i=0;i<n-1;i+=2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("New array : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr[i]);
}