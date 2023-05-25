#include <stdio.h>
int main(){   
    int l,n,dif=0;
    printf("Enter length of array : ");
    scanf("%d",&l);
    int arr[l];
    printf("Enter start of array : ");
    scanf("%d",&n);
    int mid=l/2 ,a=mid,e=l-1;
    for(int i=0;i<mid;i++){  
        arr[i]=n-dif; 
        dif++;
        n=arr[i];
        arr[e]=n-dif; 
        dif++;
        n=arr[e];
        e--;
    }
    if(l%2!=0)
        arr[mid]=n-dif;
    printf("Array sequence is : \n");
    for(int i=0;i<l;i++)
        printf("%d \n",arr[i]);
    return 0;
}