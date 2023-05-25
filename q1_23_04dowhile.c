#include<stdio.h>
int main (){
    int n,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Increasing sequence from 1 to %d :",n);
    do{
        printf("%d ",i);
        i++;
    }while(i<=n);
    printf("\nDecreasing sequence from %d to 1 :",n);
    do{
        printf("%d ",n);
        n--;
    }while(n>0);
    return 0;
}