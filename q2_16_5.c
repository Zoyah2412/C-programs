#include<stdio.h>
void reverse(int*p,int l){
    printf("Original array : ");
    for(int i=0;i<l;i++)
        printf("%d ",p[i]);
    int temp=0,end=l-1;
    for(int i=0;i<l/2;i++){
        temp=p[i];
        p[i]=p[end];
        p[end]=temp;
        end--;
    }
    return;
}
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements into the array : ")
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    reverse(arr,n);
    printf("\nReversed array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}