#include <stdio.h>
int main(){
    int n,d,n1;
    printf("Enter a number : ");
    scanf("%d",&n);
    d=n/1000;
    n1=n%1000;
    switch(d)
    {
        case 0: printf("Zero ");
                break;
        case 1: printf("One ");
                break;
        case 2: printf("Two ");
                break;
        case 3: printf("Three ");
                break;
        case 4: printf("Four ");
                break;
        case 5: printf("Five ");
                break;
        case 6: printf("Six ");
                break;
        case 7: printf("Seven ");
                break;
        case 8: printf("Eight ");
                break;
        case 9: printf("Nine ");
                break;
    }
    d=n1/100;
    n1=n1%100;
    switch(d)
    {
        case 0: printf("Zero ");
                break;
        case 1: printf("One ");
                break;
        case 2: printf("Two ");
                break;
        case 3: printf("Three ");
                break;
        case 4: printf("Four ");
                break;
        case 5: printf("Five ");
                break;
        case 6: printf("Six ");
                break;
        case 7: printf("Seven ");
                break;
        case 8: printf("Eight ");
                break;
        case 9: printf("Nine ");
                break;
    }
    d=n1/10;
    n1=n1%10;
    switch(d)
    {
        case 0: printf("Zero ");
                break;
        case 1: printf("One ");
                break;
        case 2: printf("Two ");
                break;
        case 3: printf("Three ");
                break;
        case 4: printf("Four ");
                break;
        case 5: printf("Five ");
                break;
        case 6: printf("Six ");
                break;
        case 7: printf("Seven ");
                break;
        case 8: printf("Eight ");
                break;
        case 9: printf("Nine ");
                break;
    }
    d=n1;
    switch(d)
    {
        case 0: printf("Zero ");
                break;
        case 1: printf("One ");
                break;
        case 2: printf("Two ");
                break;
        case 3: printf("Three ");
                break;
        case 4: printf("Four ");
                break;
        case 5: printf("Five ");
                break;
        case 6: printf("Six ");
                break;
        case 7: printf("Seven ");
                break;
        case 8: printf("Eight ");
                break;
        case 9: printf("Nine ");
                break;
    }
    return 0;
}