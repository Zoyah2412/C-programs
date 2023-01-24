//WAP to sort an array of n elements with even elements at the start
#include<stdio.h>
int main (){
    int n,temp=0,ctr=0;  
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
        ctr++;
        for(int j=0;j<(n-i-1);j++){
            ctr++;
            if(arr[j+1]%2==0 && arr[j]%2!=0){  
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray sorted with even elements at first : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nTotal number of steps : %d",ctr);
}