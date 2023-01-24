//WAP to store numbers in DMA then print sum of numbers whose first digit is even.
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
        int a=1,num=*(p+i);
        while(num>0){
            a=a*10;
            num=num/10;
        }
        int fd=*(p+i)/(a/10);
        if(fd%2==0)
            sum=sum+(*(p+i));
    }
    printf("Sum of numbers present in the array whose first digit is even = %d",sum);
    return 0;
}