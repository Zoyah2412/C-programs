#include <stdio.h>
int main(){
    int n1,n2,n3,n4,n5,n6,n7,n8;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    printf("Enter third number : ");
    scanf("%d",&n3);
    printf("Enter fourth number : ");
    scanf("%d",&n4);
    printf("Enter fifth number : ");
    scanf("%d",&n5);
    printf("Enter sixth number : ");
    scanf("%d",&n6);
    printf("Enter seventh number : ");
    scanf("%d",&n7);
    printf("Enter eighth number : ");
    scanf("%d",&n8);
    int min,max,min1,max1,min2,max2;
    min1=n1<n2 && n1<n3 && n1<n4?n1:(n2<n1 && n2<n3 && n2<n4?n2:(n3<n1 && n3<n2 && n3<n4?n3:n4));
    max1=n1>n2 && n1>n3 && n1<n4?n1:(n2>n1 && n2>n3 && n2>n4?n2:(n3>n1 && n3>n2 && n3>n4?n3:n4));
    min2=n5<n6 && n5<n7 && n5<n8?n5:(n6<n5 && n6<n7 && n6<n8?n6:(n7<n5 && n7<n6 && n7<n8?n7:n8));
    max2=n5>n6 && n5>n7 && n5<n8?n5:(n6>n5 && n6>n7 && n6>n8?n6:(n7>n5 && n7>n6 && n7>n8?n7:n8));
    min=min1<min2?min1:min2;
    max=max1>max2?max1:max2;
    printf("Minimum number : %d \n",min);
    printf("Maximum number : %d",max);
    return 0;
}