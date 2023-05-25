#include <stdio.h>
int main(){
    char str[100];
    printf("Enter your name :");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    return 0;
}