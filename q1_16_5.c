#include<stdio.h>
int cbv(int a,int b){
    int s=a+b;
    return s;
}
void cbr(int*p){
    for(int i=0;i<5;i++)
        p[i]++;
    return;
}
int main(){
    int n1,n2,sum;
    printf("Enter two numbers to find their sum : ");
    scanf("%d %d",&n1,&n2);
    sum=cbv(n1,n2);
    printf("Sum of %d and %d = %d using call by value \n",n1,n2,sum);
    int arr[]={1,2,6,4,3};
    printf("Original array : ");
    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
    cbr(arr);
    printf("\nNew array using call by reference : ");
    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
    return 0;
}
   