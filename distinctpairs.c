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
        printf("Distinct pairs of indexes : \n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
            printf("(%d,%d)\n",i,j);
    }
    printf("Distinct pairs of elements : \n");
    for(int i=0;i<n;i++){
        int ctr=1;
        for(int j=i+1;j<n;j++)
        {
            printf("(%d,%d)\n",arr[i],arr[j]);
        }
    }
}