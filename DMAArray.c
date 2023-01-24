#include <stdio.h>
#include <stdlib.h>
void print(int *p, int n){
    printf("The array is : ");
    for (int i=0;i<n;i++)
        printf("%d ", *(p+i));
}
void scan(int *p, int n){
    printf("Enter elements into the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",p+i);
}
void resize(int *p){
    int n;
    printf("\n Enter new size for the array : ");
    scanf("%d", &n);
    p = (int *)realloc(p,n*sizeof(int));
    scan(p, n);
    print(p, n);
}
int main(){
    int *ptr;
    ptr= (int*)malloc(sizeof(int));
    printf("Enter a number greater than zero : ");
    scanf("%d",ptr);
    int size=*ptr;
    ptr=(int*)realloc(ptr, (*ptr)*sizeof(int));
    scan(ptr,size);
    print(ptr,size);
    resize(ptr);
    return 0;
}