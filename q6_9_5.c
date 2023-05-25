#include <stdio.h>
int main(){
    char str[100];
    int ctr=0;
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        ctr++;
    }
    for(int i=ctr;i>=0;i--){
        printf("%c \n",str[i]);
    }
    return 0;
}