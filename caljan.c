#include <stdio.h>
int main(){
    int f,n;
    printf("Enter number of days : ");
    scanf("%d",&n);
    printf("Enter first day of the month : ");
    scanf("%d",&f);
    printf("\t\tJANUARY \n");
    printf("S\tM\tT\tW\tT\tF\tS\t\n");
    for(int i=1;i<f;i++)
        printf("  \t");
    for(int i=1;i<=n;i++){
        printf("%d\t",i);
        if((f+i-1)%7==0)
            printf("\n");
    }
    return 0;
}

