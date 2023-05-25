#include<stdio.h>
void reverse(char*p,int i){    
    if(i<0)
        return;
    printf("%c",p[i]);
    reverse(p,i-1);
}
int main(){   
    char str[100];
    printf("Enter the string you want to reverse : ");
    scanf("%[^\n]",str);
    int l;
    for(int i=0;str[i]!='\0';i++)
        l++;
    printf("The string in reverse order is : ");
    reverse(str,l);
    return 0;
}