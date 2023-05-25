#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%i",&n);
    a=(n&(0x00ff0000))>>8;
    bit=(n&(0x0000ff00))<<8;
    n=n&(0xff0000ff);
    n=(a|b)|n1;
    printf("0x%x",n);
    return 0;
}