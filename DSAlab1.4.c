//WAP to sort an array of n elements
#include<stdio.h>
int main (){
    int n,temp=0;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers into the array :");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n Array sorted in ascending order : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}