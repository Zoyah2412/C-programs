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
    int s=1,temp=0,e;
    if((n-1)%2==0)
        e=n-2;
    else
        e=n-1;
    while(s<e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s=s+2;
        e=e-2;
    }
    printf("Array with odd index elements reversed : \n");
    for(int j=0;j<n;j++)
        printf("%d \n",arr[j]);
}