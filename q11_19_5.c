#include<stdio.h>
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(char *p,int ctr){  
    static int i=0; 
    if(p[ctr]=='\0')
        return;
    reverse(p,ctr+1);
    if(i<=ctr){
        swap(&p[i++],&p[ctr]);
    }
}
int main(){   
    char str[100];
    printf("Enter the string you want to reverse : ");
    scanf("%[^\n]",str);
    int l=0;
    for(int i=0;str[i]!='\0';i++)
        l++;
    printf("The original string : ");
    for(int i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    reverse(str,0);
    printf("\nReverse of the string : ");
    for(int i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    return 0;
}