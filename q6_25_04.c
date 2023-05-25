#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr[i]);
    int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
        arr1[i]=s;
    }
    printf("New array 1 : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr1[i]);
    s=arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr2[i]=s;
        s=s-arr[i-1];
    }
    printf("New array 2 : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr2[i]);
}
