#include <stdio.h>
int main(){
    int n,ed,r,rn;
    printf("Enter a number having 3 digits or more : ");
    scanf("%d",&n);
    r=n/100;
    ed=n%100;
    if(ed>=50){
        r=r+1;
        rn=r*100;
    }
    else
        rn=r*100;
    printf("Original number : %d \n",n);
    printf("Number after rounding up to 2 digits : %d",rn);
    return 0;
}