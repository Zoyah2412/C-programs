#include <stdio.h>
int main(){
    int s,e,y,sum=0;
    printf("Enter start year : ");
    scanf("%d",&s);
    printf("Enter end year : ");
    scanf("%d",&e);
    y=s+1;
    while(y<e){
        if (y%100==0){
            if(y%400==0)
                printf("%d \n",y);
        }
        else{
            if(y%4==0)
                printf("%d \n",y);
        }   
        y++;
    }
    return 0;
}