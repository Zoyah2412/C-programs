#include<stdio.h>
int fact(int n){
    if (n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter number whose factorial you want to display : ");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial of %d = %d",n,f);
}