#include <stdio.h>
int main(){
    char str[100];
    int ctr=0;
    printf("Enter a  having three words : ");
    scanf("%[^\n]",str);
    printf("Original string : ");
    for(int i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    for(int i=0;str[i]!='\0';i++){
        ctr++;
        if(str[i]!=' '){
            if(ctr==1){
                if(str[i]>='A' && str[i]<='Z')
                    continue;
                else
                    str[i]=str[i]-32;
            }
            else{
                if(str[i]>='a' && str[i]<='z')
                    continue;
                else 
                    str[i]=str[i]+32;
            }
        }
        else
            ctr=0;
    }
        printf("\nNew string : ");
        for(int i=0;str[i]!='\0';i++)
            printf("%c",str[i]);
    return 0;
}