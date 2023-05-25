#include <stdio.h>
int main()
{
   int i,space,j=0;
   for (i=1;i<=3;i++)
   {  
      j=0;
      for(space=1;space<=3-i;space++) 
      {
         printf("  ");
      }
      while (j!=2*i-1)
      {
         printf("* ");
         j++;
      }
      printf("\n");
   }
   return 0;
}