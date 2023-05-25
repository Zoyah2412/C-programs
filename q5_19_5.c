#include<stdio.h>
int reverse(int n){
    static int d=0,r=0;
    if (n==0){
        return r;
    }
    else{
        d=n%10;
        r=(r*10)+d;
        n=n/10;
        reverse(n);
    }
}
int main(){
    int num;
    printf("Enter the number you want to reverse :");
    scanf("%d",&num);
    int rn=reverse(num);
    printf("Reverse of %d = %d",num,rn);
    return 0;
}