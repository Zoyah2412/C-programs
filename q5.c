#include <stdio.h>
int main(){
    unsigned int a,b,c,d;
    scanf("%i %i",&a,&b);
    b=b<<8;
    c=a|b;
    printf("0x%x\n",c);
    d=(a&(0xf0))>>4;
    a=(a&(0x0f));
    d=d<<12;
    b=b>>4;
    c=(a|b)|d;
    printf("0x%x",c);
}