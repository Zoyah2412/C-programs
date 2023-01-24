#include<stdio.h>
int main()
{
    float n,d;
    int i;
    printf("\n Enter a number with 2 decimal places : ");
    scanf("%f",&n);
    i=n;
    d=(n-i)*100;
    printf("\n Integer part = %i",i);
    printf("\n Decimal part = %.0f",d);
    return 0;
}