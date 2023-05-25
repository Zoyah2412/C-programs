#include <stdio.h>
int fibonacci(int num){   
    int a=1,b=1,c;
    printf("%d %d ",a, b);
    for(int i=1;i<=num;i++){  
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
int main (){ 
    int n;
    printf("Enter number of terms to be displayed : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}