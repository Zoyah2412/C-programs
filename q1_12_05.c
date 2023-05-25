#include <stdio.h>
int main(){
    char str[100];
    int ctr=1;
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1]!=' ')
            ctr++;
    }
    printf("Number of words present in the string : %d",ctr);
    return 0;
}