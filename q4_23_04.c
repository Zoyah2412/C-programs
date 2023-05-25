#include <stdio.h>
int main (){   
    float a,s=0,fact=1,i=1;
    int n,j=2;
    printf("Enter end of series : ");
    scanf("%d",&n);
    if(n%2==0)
        a=2;
    else
        a=1;
    series1:
        printf("1/%.1f! + ",a);
    series2:
        fact*=i;
        i++;
        if(i<=a)
            goto series2;
        s=s+(1/fact);
                int k=a;
                a=a+j;
                j=k;
    if(a<=n)
        goto series1;
    printf("= %f",s);
    return 0;
}
