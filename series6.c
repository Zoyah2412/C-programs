#include <stdio.h>
int main(){
    int n,i=1;
    float sum=0.0;
    printf("Enter start of series : ");
    scanf("%d",&n);
    while(n>0){
        if(i%2!=0)
            sum=sum+(n/(i*1.0));
        else
            sum=sum+((i*1.0)/n);
        n=n-2;
        i++;
    }
    printf("Sum of series : %f ",sum);
    return 0;
}