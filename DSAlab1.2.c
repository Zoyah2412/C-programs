//WAP to reverse the contents of an array of n elements
#include<stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers into the array :");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : ");
    for(int i=0;i<n;i++)   
        printf("%d ",arr[i]);
    int s=0, e=n-1, temp=0;
    while(s<e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    printf("\n Reverse array : ");
    for(int j=0;j<n;j++)
        printf("%d ",arr[j]);
}