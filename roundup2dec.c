#include<stdio.h>
int main(){
    float a,c;
    int b,d,e;
    printf("Enter real number : ");
    scanf("%f",&a);
    b=a;
    c=(a-b);
    d=c*10000;
    e=d/100;
    d=d%100;
    if(d>=50){
        e=e+1;
        printf("Number after rounding it upto 2 digit is %d.%d",b,e);
    }
    else{
        printf("Number after rounding it upto 2 digit is %d.%d",b,e);
    }
    return 0;
}