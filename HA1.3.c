#include<stdio.h>
int max(int n1, int n2){
    int m=n1>n2 ? n1:n2;
    return m;
}
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    max(a,b);
    printf("Max:%d",max(a,b));
    return 0;
    }