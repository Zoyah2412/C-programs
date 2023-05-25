#include <stdio.h>
int arraysum(int *p,int l){
    if (l<0)
        return 0;
    return *p+arraysum(p+1,l-1);
}
int main(){
    int n;
    printf("Enter length of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements into the array : ");
    int *a=&arr[0];
    for(int i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Original array : ");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\nThe sum of the elements of the array is : %d", arraysum(arr,n-1));
}