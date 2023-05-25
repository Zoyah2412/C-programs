#include<stdio.h>
void disp(int n){
    if (n==0)
        return;
    else{
        disp(n-1);
        printf("%d ",n);
    }
}
int main(){
    int num;
    printf("Enter the number upto which you want to display : ");
    scanf("%d",&num);
    disp(num);
    return 0;
}