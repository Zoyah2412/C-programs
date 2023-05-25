#include<stdio.h>
int main (){
    int n,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Increasing sequence from 1 to %d :",n);
    increasing:
        printf("%d ",i);
        i++;
    if(i<=n)
        goto increasing;
    printf("\nDecreasing sequence from %d to 1 :",n);
    decreasing:
        printf("%d ",n);
        n--;
    if(n>0)
        goto decreasing;
    return 0;
}