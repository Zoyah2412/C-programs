#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    int min=n1<n2?n1:n2;
    printf("Minimum number : %d",min);
    return 0;
}