//WAP to store numbers in DMA then print maximum and minimum.
#include <stdio.h>
#include <stdlib.h>
int main (){
    int *p,n,l,min,max;
    printf("Enter length of array : ");
    scanf("%d", &l);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter numbers into the array :");
    for(int i=0;i<l;i++){
        scanf("%d",&n);
        *(p+i)=n;
    }
    min=*p;
    max=*p;
    for(int i=0;i<l;i++){
        if(*(p+i)>max)
            max=*(p+i);
        else if(*(p+i)<min)
            min=*(p+i);
    }
    printf("The maximum number is %d \n:",max);
    printf("The minimum number is %d \n:",min);
    return 0;
}