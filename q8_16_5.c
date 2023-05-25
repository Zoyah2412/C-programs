#include <stdio.h>
void space(char *p,char *n){
    int a=0,ctr=0;
    for(int i=0;p[i]!='\0';i++){
        if(p[i]!=' '){
            n[a]=p[i];
            a++;
            ctr=0;
        }
        else{
            ctr++;
            if(ctr==1){
                n[a]=' ';
                a++;
            }
        }
    }
}
int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    printf("Original array : ");
    for(int i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    char nstr[100];
    space(str,nstr);
    printf("\nNew array : ");
    for(int i=0;nstr[i]!='\0';i++)
        printf("%c",nstr[i]);
    return 0;
}