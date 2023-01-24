#include <stdio.h>
int main(){
    int l;
    printf("Enter length of array : \n");
    scanf("%d",&l);
    int arr[l];
    printf("Enter elements into the array : \n");
    for(int i=0;i<l;i++)
        scanf("%d",&arr[i]);
    int sum,maxsum=0;
    for (int i=0;i<l;i++){
        sum=arr[i];
        for(int j=i+1;j<l;j++){
            sum=sum+arr[j];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    printf("Maximum sum = %d",maxsum);
    return 0;  
}