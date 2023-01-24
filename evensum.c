#include <stdio.h>
int main(){
    int s,e,i,sum=0;
    printf("Enter start point : ");
    scanf("%d",&s);
    printf("Enter end point : ");
    scanf("%d",&e);
    i=s+1;
    while(i<e){
        if(i%2==0)
            sum=sum+i;
        i++;
    }
    printf("Sum of even numbers between %d and %d = %d",s,e,sum);
    return 0;
}