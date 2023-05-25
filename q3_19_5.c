#include<stdio.h>
void disp(int n){
    if (n==0){
        printf("\n Number in forward direction is : ");
        return;
    }
    else{
        printf("%d",(n%10));
        disp(n/10);
        printf("%d",(n%10));
    }
}
int main(){
    int num;
    printf("Enter the number whose digits you want to display : ");
    scanf("%d",&num);
    printf("Number in backward direction is : ");
    disp(num);
    return 0;
}