#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter positive elements into array : ")
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Original array : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr[i]);
    int ctr,flag=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            ctr=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    arr[j]=flag;
                    ctr++;
                }
            }
            printf("%d - %d \n",arr[i],ctr);
        }
    }
}