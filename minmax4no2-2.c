#include <stdio.h>
int main(){
    int n1,n2,n3,n4;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    printf("Enter third number : ");
    scanf("%d",&n3);
    printf("Enter fourth number : ");
    scanf("%d",&n4);
    int min,max,min1,max1,min2,max2;
    min1=n1<n2?n1:n2;
    max1=n1>n2?n1:n2;
    min2=n3<n4?n3:n4;
    max2=n3>n4?n3:n4;
    min=min1<min2?min1:min2;
    max=max1>max2?max1:max2;
    printf("Minimum number : %d \n",min);
    printf("Maximum number : %d",max);
    return 0;
}