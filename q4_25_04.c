#include <stdio.h>
int main(){
    int l,n;
    printf("Enter length of array : ");
    scanf("%d",&l);
    int arr[l];
    printf("Enter start of array series : ");
    scanf("%d",&n);
    for(int i=0;i<l;i++){
        arr[i]=n;
        n=n-2;
    }
    for(int i=0;i<l;i++)
        printf("%d \n",arr[i]);
}