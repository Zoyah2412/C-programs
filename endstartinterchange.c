#include <stdio.h>
int main(){
    int n;
    printf("Enter a 5 digit number : ");
    scanf("%d",&n);
    printf("Original number = %d\n",n);
    int end=n/1000;
    int strt=n%100;
    int m=(n/100)%10;
    int nn=((strt*1000)+m*100)+end;
    printf("Number with interchanged start and end digits = %d",nn);
    return 0;
}