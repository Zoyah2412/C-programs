#include<stdio.h>
int main (){
    int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers into the array :");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int maxctr=0,max=0;
    for(int i=0;i<(n-1);i++){
        int ctr=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                ctr++;
            }
        if (ctr>maxctr){
            maxctr=ctr;
            max=arr[i];
        }
        else if(ctr==maxctr){
            maxctr=0;
            max=0;
        }
    }
    if (maxctr!=0)
        printf("%d occurs %d times in the array which is the maximum occurence :",max,maxctr);
    else
        printf("No such element exists");
    return 0;
}