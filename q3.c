#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int num=n;
    for(int i=1;i<=n;i++){
        printf("%d%d",i,num);
        num--;
    }
    return 0;
}