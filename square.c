#include <stdio.h>
int main(){
    int s,e,i,sum=0,sq;
    printf("Enter start point : ");
    scanf("%d",&s);
    printf("Enter end point : ");
    scanf("%d",&e);
    i=1;
    while(i<s){
        sq=i*i;
        if(sq>s && sq<e){
            printf("%d \n",sq);
            sum=sum+sq;
        }
        i++;
    }
    printf("Sum of squares between %d and %d = %d",s,e,sum);
    return 0;
}