#include <stdio.h>
int count(char *p, char c){
    int ctr=0;
    for(int i=0;p[i]!='\0';i++){
        if(p[i]==c){
            ctr++;
            p[i]=' ';
        }
    }
    return ctr;
}
int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    char ch;
    printf("Enter character whose occurrences you want to know : ");
    scanf("%s",&ch);
    printf("Original array : ");
    for(int i=0;str[i]!='\0';i++)
        printf("%c ",str[i]);
    int ctr=count(str,ch);
    printf("\nNew array with %c replaced : ",ch);
    for(int i=0;str[i]!='\0';i++)
        printf("%c ",str[i]);
    printf("\nNumber of occurences of %c : %d",ch,ctr);
    return 0;
}