#include <stdio.h>
int main(){
    int n,d1,d2,d3,d4;
    printf("Enter a 4 digit number : ");
    scanf("%d",&n);
    d1=n%10;
    printf("%d\n",d1);
    d2=(n%100)/10;
    printf("%d\n",d2);
    d3=(n%1000)/100;
    printf("%d\n",d3);
    d4=n/1000;
    printf("%d\n",d4);
    return 0;
}