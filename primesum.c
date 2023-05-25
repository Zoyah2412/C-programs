//WAP to store numbers in DMA then print sum of prime numbers.
#include <stdio.h>
#include <stdlib.h>
int main (){
    int *p,n,l,sum=0;
    printf("Enter length of array : ");
    scanf("%d", &l);
    p=(int*)malloc(l*sizeof(int));
    printf("Enter numbers into the array :");
    for(int i=0;i<l;i++){
        scanf("%d",&n);
        *(p+i)=n;
    }
    for(int i=0;i<l;i++){
        int ctr=0;
        for(int j=1;j<=*(p+i);j++){
            if(*(p+i)%j==0)
                ctr++;
        }
        if(ctr==2)
            sum=sum+(*(p+i));
    }
    printf("Sum of prime numbers present in the array = %d",sum);
    return 0;
}