#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a name having three words : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            int j;
            for(j=i+1;str[j]!=' ';j++)
                printf("%c",str[j]);
            i=j+1;
        }
    }
    return 0;
}
