#include <stdio.h>
int main()
{   int a,b;
    printf("Enter two numbers to interchange their values : ");
    scanf("%d %d",&a,&b);
    printf("First number = %d \nSecond number = %d \n",a,b);
    int n1=a,n2=b,temp;
    int *n1ptr=&n1;
    int *n2ptr=&n2;
    int *tptr=&temp;
    *tptr=*n1ptr;
    *n1ptr=*n2ptr;
    *n2ptr=*tptr;
    printf("Numbers after interchanging :\nFirst number = %d\nSecond number %d",*n1ptr,*n2ptr);
    return 0;
}
