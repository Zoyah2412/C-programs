#include <stdio.h>
int main(){
    int i=1,n;
    float a=0.0,sum=0.0;
    printf("Enter end of series : ");
    scanf("%d",&n);
    while(i<=n){
        a=i*1.0/(i+2);
        sum+=a;
        i+=4;
    }
    printf("Sum = %f",sum);
    return 0;
}