#include <stdio.h>
int main()
{
  int a=1, b=2, c=3;
  float d=12.96, e=132.63, f=1792.68;
  float g=1.20, h=20.230, i=323.136;
  printf("Sl. no.\t\t      Amt.  \t Discount\t\n");
  printf("%-10d\t   $%5.2f\t $%-10.2f\n",a,d,g);
  printf("%-10d\t  $%6.2f\t $%-10.2f\n",b,e,h);
  printf("%-10d\t $%7.2f\t $%-10.2f\n",c,f,i);
  return 0;
}