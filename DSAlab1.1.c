//WAP to find out the smallest and largest element stored in an array of n integers
#include<stdio.h>
int main (){
    int n,sml,lrg;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter numbers into the array :");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sml=arr[0];
    lrg=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>lrg)
            lrg=arr[i];
        else if(arr[i]<sml)
            sml=arr[i];
    }
    printf("The largest number is : %d \n",lrg);
    printf("The smallest number is : %d \n",sml);
    return 0;
}