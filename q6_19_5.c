#include<stdio.h>
int fib(int n){
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    if(n>2)
        return fib(n-1)+fib(n-2);
}
int main(){
    int num;
    printf("Enter which fibonacci you want to find : ");
    scanf("%d",&num);
    int f=fib(num);
    printf("Fibonacci term no.%d = %d",num,f);
    return 0;
}