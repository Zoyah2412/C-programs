#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        for(int j=i;str[j]!='\0';j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}