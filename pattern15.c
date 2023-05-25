#include <stdio.h>
void main()
{
    int a=1,space,i,j;
    for(i=0;i<5;i++)
    {
        for(space=1;space<=5-i;space++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                a=1;
            else
               a=a*(i-j+1)/j;
            printf("% 4d",a);
        }
        printf("\n");
    }
}