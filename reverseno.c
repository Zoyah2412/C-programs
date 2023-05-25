#include <stdio.h>
int main ()
{   
    int num,a,d=1,i=1,r=0,n=0;
    printf("Enter a number :");
    scanf("%d",&num);
    int n1=num;
    printf("Enter number of digits to be reversed : ");
    scanf("%d",&a);
    while(i<=a)
        {
        d=d*10;
        i=i+1;
        }
    i=1;
    while(n1>0)
    { 
      if(n1%d>(d/10))
        {
            n=n1%d; 
            r=r*d+n;
        }
    else
        {
            int b=n1,c=1;
            while(n1>0)
            {   
                c=c*10;
                n1=n1/10;
            }
            r=r*c+b;
            break;
        }
     n1=n1/d;
    }
    printf("Reverse is- %d",r);
    return 0;
}