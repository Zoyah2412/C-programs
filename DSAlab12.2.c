#include<stdio.h>
void sort(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int binarySearch(int arr[], int s, int e, int x)
{
    while (s<=e) {
        int mid=s+(e-s)/2;
        if (arr[mid] == x)
            return mid;
        if (x>arr[mid])
            s=mid+1;
        else
            e=mid-1;
    }
    return -1;
}
int main(){
    int x, n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements into the array :");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    sort(arr,n);
    printf("Sorted array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("Enter element to be searched for : ");
    scanf("%d",&x);
    int result = binarySearch(arr,0,n-1,x);
    if(result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d",result);
    return 0;
}