#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a name having three words : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            printf("Index position of ' ' is : %d \n",i);
    }
    return 0;
}