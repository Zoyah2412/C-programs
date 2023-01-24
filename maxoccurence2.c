#include<stdio.h>
void maxoccurence(int a)
int ctr=1,maxctr=1,max=0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
            ctr++;
        else
            ctr=1;
        if(ctr>maxctr){
            maxctr=ctr;
            max=arr[i-1];
        }
        else if(ctr==maxctr){
            maxctr=1;
            max=0;
        }
    }
    return max;
}
int main (){
    int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers into the array :");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    if (maxctr!=1)
        printf("%d occurs %d times in the array which is the maximum occurence :",max,maxctr);
    else
        printf("No such element exists");
    return 0;
}