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
    printf("Subarrays : \n");
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
                printf("%d ",arr[k]);
            printf("\n");
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<=j;k++)
                s=s+arr[k];
            printf("Sum = %d",s);
            printf("\n");
            if(s>max)
                max=s;
        }
    }
    printf("Maximum sum = %d",max);
}