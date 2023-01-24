#include <stdio.h>
int main(){
    float la,r,d;
    printf("Enter loan amount : ");
    scanf("%f",&la);
    printf("Enter rate of interest : ");
    scanf("%f",&r);
    printf("Enter deposit amount : ");
    scanf("%f",&d);
    int i=1;
    while(la>0){
        la=la+((r/100)*la);
        la=la-d;
        if(la>0)
            printf("Loan amount after year %d = %f \n",i,la);
        i++;
    }
    return 0;
}