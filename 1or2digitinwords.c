#include <stdio.h>
int main(){
    int n,d1,d2;
    printf("Enter a number between 1 to 99: ");
    scanf("%d",&n);
    if(n<=9){
        switch(n){
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
    }
    else if(n>9 && n<100){
        d1=n/10;
        switch(d1)
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
        d2=n%10;
        switch(d2)
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
    }
    else{
        printf("Invalid number");
    }
}