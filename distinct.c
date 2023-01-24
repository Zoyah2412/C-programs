#include <stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    int de=0;
    int j=0;
    int k=0;
    for(j=0;j<5;j++){
        for(k=0;k<j;k++){
            if(arr[j]==arr[k]){
                break;
            }
        }
        if(j==k)
            de++;
    }
    printf("Number of distinct elements = %d",de);
    return 0;
}