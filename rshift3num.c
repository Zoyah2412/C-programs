#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d %d",&a,&b,&c);
    a=a+c;
    c=a-c;
    a=a-c;
    b=b+c;
    c=b-c;
    b=b-c;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    return 0;
}