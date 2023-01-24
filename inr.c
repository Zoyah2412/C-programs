#include <stdio.h>
#include <math.h>   
int main(){
    int num,n=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int a;
    int y=num;
    while(y>0)
    {
        y=y/10;
        n++;
    }
    printf("Rs.");
    int b=n/3;
    int d=1;
    int p=b;
    int m,o;
    while(d<=p+1)
    {
        m=pow(10,b*3);
        o=num/m;
        printf("%d,",o);
        num=num%m;
        b--;
        d++;
    }
    printf("\b.00");
    return 0;
}
