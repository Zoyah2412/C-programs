#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    printf("Enter third number : ");
    scanf("%d",&n3);
    int max;
    if(n1>n2 && n1>n3)
        max=n1;
    else{
        if(n2>n3 && n2>1)
            max=n2;
        else
            max=n3;
    }
    printf("Maximum number = %d",max);
    return 0;
}
