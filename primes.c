#include <stdio.h>
int main(){
    int s,e,i;
    printf("Enter start point : ");
    scanf("%d",&s);
    printf("Enter end point : ");
    scanf("%d",&e);
    i=s+1;
    while(i<e){
        int j=1,f=0;
        while(j<=i){
            if(i%j==0)
                f++;
            j++;
        }
        if(f==2)
            printf("%d \n",i);
        i++;
    }
    return 0;
}
    