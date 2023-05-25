#include <stdio.h>
int main(){
    int n,i=1;
    float f=1.0,sum=0.0;
    printf("Enter end of series : ");
    scanf("%d",&n);
    while(i<=n-1){
        sum=sum+((f*i)/(f*i*(i+1)));
        f=f*i*(i+1);
        i+=2;
    }
    printf("Sum of series : %f ",sum);
    return 0;
}