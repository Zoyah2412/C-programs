#include <stdio.h>
int main(){
    int n,i=2;
    float f=1.0,sum=0.0;
    printf("Enter end of series : ");
    scanf("%d",&n);
    while(i<=n){
        f=f*(i*1.0);
        sum=sum+(1.0/f);
        i++;
    }
    printf("Sum of series : %f ",sum);
    return 0;
}