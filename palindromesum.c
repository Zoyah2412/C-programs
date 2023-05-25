//WAP to store numbers in DMA then print sum of palindrome numbers.
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
        int r=0,num=*(p+i);
        while(num>0){
            int d=num%10;
            num=num/10;
            r=(r*10)+d;
        }
        if(r==*(p+i))
            sum=sum+(*(p+i));
    }
    printf("Sum of palindrome numbers present in the array = %d",sum);
    return 0;
}