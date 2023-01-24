#include <stdio.h>
int factorial(int num){
    int i=1,f=1;
    while(i<=num){
        f=f*i;
        i++;
    }
    return f;
}
int main(){
    int n,fact;
    printf("Enter number whose factorial is to be found : ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d = %d",n,fact);
    return 0;
}