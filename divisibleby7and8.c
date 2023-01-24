#include <stdio.h>
int main(){
    int s,e,i;
    printf("Enter start point : ");
    scanf("%d",&s);
    printf("Enter end point : ");
    scanf("%d",&e);
    i=s+1;
    while(i<e){
        if(i%7==0 && i%8==0)
            printf("%d",i);
            i++;
    }
    return 0;
}