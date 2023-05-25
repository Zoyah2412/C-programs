#include <stdio.h>
int main(){
    char str[100];
    int start=0,ctr=0;
    printf("Enter a name having three words : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        ctr++;
        if(str[i]==' '){
            for(int j=i-1;j>=start;j--)
                printf("%c",str[j]);
            printf("\n");
            start=i+1;
        }
    }
    for(int i=ctr;i>=start;i--)
        printf("%c",str[i]);
    return 0;
}