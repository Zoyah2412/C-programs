#include <stdio.h>
int main(){
    int n;
    char c;
    float f;
    printf("Enter an integer number, a character and a floating point number : ");
    scanf("%d %c %f",&n,&c,&f);
    int *nptr=&n;  
    char *cptr=&c;
    float *fptr=&f;
    printf("%p %p %p\n",nptr,cptr,fptr);
    printf("%d %c %f",*nptr,*cptr,*fptr);
    return 0;
}