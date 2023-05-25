#include <stdio.h>
int main(){
    int n;
    printf("Enter a three digit number : ");
    scanf("%d",&n);
    printf("Original number = %d\n",n);
    int r=0,d;
    d=n%10;
    r=(r*10)+d;
    n=n/10;
    d=n%10;
    r=(r*10)+d;
    n=n/10;
    d=n%10;
    r=(r*10)+d;
    printf("Reverse number = %d",r);
    return 0;
}