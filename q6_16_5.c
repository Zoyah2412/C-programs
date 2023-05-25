#include <stdio.h>
void reverse(char*p,int l){
    char temp=0,end=l-1;
    for(int i=0;i<l/2;i++){
        temp=p[i];
        p[i]=p[end];
        p[end]=temp;
        end--;
    }
    return;
}
int main(){
    char str[100];
    int l=0;
    printf("Enter a string : ");
    scanf("(%[^\n])",str);
    for(int i=0;str[i]!='\0';i++)
        l++;
    l++;
    printf("Original array : ");
    for(int i=0;i<l;i++)
        printf("%c ",str[i]);
    reverse(str,l);
    printf("\nReversed array : ");
    for(int i=0;i<l;i++)
        printf("%c ",str[i]);
    return 0;
}