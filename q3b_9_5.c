#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string in uppercase : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='P' && str[i]<='Z')
            printf("%c \n",str[i]);
    }
    return 0;
}