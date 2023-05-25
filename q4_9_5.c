#include <stdio.h>
int main(){
    char str[100],nstr[100];
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        nstr[i]=str[i];
    }
    printf("New array : \n");
    for(int i=0;nstr[i]!='\0';i++){
        printf("%c \n",nstr[i]);
    }
    return 0;
}