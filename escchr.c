#include <stdio.h>
int main()
{
    char vt='\v';
    char t='\t';
    char b='\b';
    char nl='\n';
    char cr='\r';
    char db='\\';
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",vt,t,b,nl,cr,db);
    return 0;
}