#include<stdio.h>
 int main ()
 {
    int l,mid,n,dif=0;
    printf("Enter an odd number as length of array :");
    scanf("%d",&l);
    mid=(l-1)/2;
    int arr[l];
    printf("Enter the number whose sequence you want : ");
    scanf("%d",&n);
    for(int i=mid;i>=0;i--)
    {
        if(i!=(l-i-1))
        {
            arr[i]=n-dif;
            n=arr[i];
            dif++;
            arr[l-i-1]=n-dif;
            n=arr[l-1-i];
            dif++;
        }
        else
        {
            arr[i]=n;
            dif++;
        }
    }
    printf("Array sequence is : \n");
    for(int i=0;i<l;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
 }