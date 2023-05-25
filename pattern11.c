#include <stdio.h>
int main() {
   for (int i=3;i>=1;i--) {
      for (int j=0;j<3-i;j++)
         printf(" ");
      for (int j= i;j<=2*i-1;j++)
         printf("*");
      for (int j=0;j<i-1;j++)
         printf("*");
      printf("\n");
   }
   return 0;
}