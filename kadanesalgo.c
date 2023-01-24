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
    int cursum=0,maxsum=arr[0];
    for(int i=0;i<n;i++){
        cursum=cursum+arr[i];
        if (cursum<0)
            cursum=0;
        else if(cursum>maxsum)
            maxsum=cursum;
    }
    printf("Maximum sum = %d",maxsum);
}