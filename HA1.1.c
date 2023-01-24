//WAP in C to using function input 10 numbers in an array and display it.
#include <stdio.h>
void create(int *p){
    printf("Enter 10 numbers into the array ");
    for(int i=0;i<10;i++)
        scanf ("%d",(p+i));
}
void display(int *p){
    printf("The array is : ");
    for (int i=0;i<10;i++)
        printf ("%d ",*(p+i));
}
int main ()
{
    int arr[10];
    create(arr);
    display(arr);
}