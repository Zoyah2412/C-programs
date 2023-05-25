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
    int ctr=0,flag=0;
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++)
            if(arr[j]>arr[j-1]){
                i=j+1;
                flag=1;
            }
            else
                break;
        if (flag==1)
            ctr++;
    }
    printf("Number of increasing sequences present in the array = %d",ctr);
}