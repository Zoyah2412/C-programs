#include<stdio.h>
int digsum(int n){
    if (n==0)
        return 0;
    else
        return (n%10)+digsum(n/10);
}
int main(){
    int num;
    printf("Enter the number whose sum of digits you want to display : ");
    scanf("%d",&num);
    int s= digsum(num);
    printf("Sum of digits in %d = %d ",num,s);
    return 0;
}