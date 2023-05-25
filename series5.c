#include <stdio.h>
int main(){
    int n,i=1;
    float sum=0.0;
    printf("Enter end of series : ");
    scanf("%d",&n);
    while((i+2)<=n){
        sum=sum+(i*1.0/((i*1.0)+2));
        i+=2;
    }
    printf("Sum of series : %f ",sum);
    return 0;
}