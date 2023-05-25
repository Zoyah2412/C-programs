#include <stdio.h>
int main(){
    int i=1,n,f=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0)
            f++;
        i++;
    }
    if(f==2)
        printf("%d is a prime number", n);
    else
        printf("%d is a composite number",n);
    return 0;
}    