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
    int temp=0,s1=0,s2=0;
    if(n%2==0)
        s2=n/2;
    else
        s2=(n/2)+1;
    while(s2<n){
        temp=arr[s1];
        arr[s1]=arr[s2];
        arr[s2]=temp;
        s1++;
        s2++;
    }
    printf("New array : \n");
    for(int i=0;i<n;i++)
        printf("%d \n",arr[i]);
}