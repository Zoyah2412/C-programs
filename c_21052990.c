#include <stdio.h>
int main(){
    int ctr=0;
    char str[100], nstr[100];
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    printf("Original string : ");
    printf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==str[i+1]){
            int j;
            char c=str[i];
            for(j=i+1;str[j]!=c;j++)
            nstr[ctr]=c;
            i=j;
            ctr++;
        }
        else{
            nstr[ctr]=str[i];
            ctr++;
        }
        if(str[i+1]=='\0')
            break;
    }
    printf("\nNew string : ");
    printf("%s",nstr);
    return 0;
}

