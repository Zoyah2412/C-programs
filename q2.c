#include <stdio.h>
int main(){
    int i=1,j=10;
    printf ("Numbers from 1 to 10 : \n");
    while(i<=10){
        printf("%d \n",i);
        i++;
    }
    printf ("Numbers from 10 to 1 : \n");
    while(j>=1){
        printf("%d \n",j);
        j--;
    }
    printf ("Even numbers between 1 to 10 : \n");
    i=1;
    while(i<=10){
        if(i%2==0)
            printf("%d \n",i);
        i++;
    }
    printf ("Even numbers between 10 to 1 : \n");
    j=10;
    while(j>=1){
        if(j%2==0)
            printf("%d \n",j);
        j--;
    }
    return 0;
}