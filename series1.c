#include <stdio.h>
int main(){
    float n,i=3,sum;
    printf("Enter end of series : ");
    scanf("%f",&n);
    while(i<=n){
        sum=sum+(1/(i));
        i+=2;
    }
    printf("Sum = %f",sum);
    return 0;
}