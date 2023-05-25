#include<stdio.h>
void multiplication_table(int n,int i){
    if(i>=1){
        printf("%d*%d=%d \n",n,i,(n*i));
        i--;
        multiplication_table(n,i);
    }
    else
        return;
}
int main(){
    int num;
    printf("Enter the number whose multiplication table you want : ");
    scanf("%d",&num);
    printf("Multiplication table of %d \n",num);
    multiplication_table(num,10);
    return 0;
}