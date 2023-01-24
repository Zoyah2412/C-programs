//WAP to test whether a number n entered is prime or not for at least 10 inputs
#include<math.h>
#include<stdio.h>
int main (){
    int l,n,flag=0,ctr=0;
    printf("Enter how many inputs you want(>=10) : ");
    scanf("%d", &l);
    for(int i=0;i<l;i++){
        ctr++;
        printf("Enter the number : ");
        scanf("%d",&n);
        flag=0;
        int ctr2=0;
        if(n%2==0 && n!=2)
            ctr++,flag=1;
        else{
            for(int j=2;j<=sqrt(n);j++){
                ctr++,ctr2++;
                if(n%j==0){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            printf("%d is a prime number\n",n);
        else
            printf("%d is not a prime number\n",n);
        printf("number of steps : %d \n",ctr2);
    }
    printf("Total number of steps : %d",ctr);
}