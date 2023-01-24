#include <stdio.h>
int main(){
    int n1,n2,n3,n4,lrg,slrg,tlrg,min;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    printf("Enter third number : ");
    scanf("%d",&n3);
    printf("Enter fourth number : ");
    scanf("%d",&n4);
    if(n1>n2 && n1>n3 && n1>n4)
        lrg=n1;
    else{
        if(n2>n3 && n2>n1 && n2>n4)
            lrg=n2;
        else{
            if(n3>n1 && n3>n2 && n3>n4)
                lrg=n3;
            else
                lrg=n4;
            }
        }
    if(n1<lrg && (n1>n2 && n1>n3) || (n1>n2 && n1>n4) || (n1>n3 && n1>n4))
        slrg=n1;
    else{
        if(n2<lrg && (n2>n1 && n2>n3) || (n2>n1 && n2>n4) || (n2>n3 && n2>n4))
            slrg=n2;
        else{
            if(n3<lrg && (n3>n1 && n3>n2) || (n3>n1 && n3>n4) || (n3>n2 && n3>n4))
                slrg=n3;
            else
                slrg=n4;
        }
    }
    if(n1<n2 && n1<n3 && n1<n4)
        min=n1;
    else{
        if(n2<n3 && n2<n1 && n2<n4)
            min=n2;
        else{
            if(n3<n1 && n3<n2 && n3<n4)
                min=n3;
            else
                min=n4;
            }
        }
    if(n1>min && n1<slrg)
        tlrg=n1;
    else{
        if(n2>min && n2<slrg)
            tlrg=n2;
        else{
            if(n3>min && n3<slrg)
                tlrg=n3;
            else
                tlrg=n4;
        }
    }
    printf ("Second largest number = %d \n",slrg);
    printf ("Third largest number = %d",tlrg);
    return 0;
}
