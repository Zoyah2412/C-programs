#include <stdio.h>
int main(){
    printf("Prime numbers between 1 to 100 : \n");
    for(int i=1;i<=100;i++){
        int f=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
                f++;
        }
        if(f==2)
            printf("%d \n",i);
    }
    return 0;
}