#include <stdio.h>
int main(){
    int n,ed,md,sd,sq1,sq2;
    printf("Enter a four digit number :");
    scanf("%d",&n);
    ed=n%10;
    md=(n%1000)/10;
    md=md*md;
    sd=n/1000;
    sq1=(sd*10)+ed;
    sq2=(ed*10)+sd;
    printf(md==sq1||md==sq2?"valid" :"not valid");
    return 0;
}