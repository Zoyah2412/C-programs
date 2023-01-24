#include <stdio.h>
int main(){
    float p,r,w;
    printf("Enter principal amount : ");
    scanf("%f",&p);
    printf("Enter rate of interest : ");
    scanf("%f",&r);
    printf("Enter withdrawal amount : ");
    scanf("%f",&w);
    int i=1;
    while(p>0){
        p=p+((r/100)*p);
        p=p-w;
        if(p>0)
            printf("Principal amount after year %d = %f \n",i,p);
        i++;
    }
    return 0;
}