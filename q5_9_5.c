#include <stdio.h>
int main(){
    char str[100];
    int ctr=-1;
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        ctr++;
    }
    ctr++;
    printf("Index position is %d ",ctr);
    return 0;
}