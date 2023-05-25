#include <stdio.h>
struct date{
    int d,m,y;
};
int main(){
    char arr[50];
    struct date dt;
    printf("Enter date in the format dd/mm/yyyy: ");
    scanf("%[^\n]s",arr);
    getchar();
    int i=0,j=0,k=0,len=0,a,b,c,d;
    char word[4];
    while (arr[len]!=0)
        len++;
    arr[len]='/';
    while(arr[i]!='\0'){
        if(arr[i]=='/'){
            k+=1;
            if (k==1||k==2){
                a=word[0]-'0';
                if (word[1]!='\0')
                    b=word[1]-'0';
                if (k==1){
                    if (word[1]!='\0')
                        dt.d=a*10+b;
                    else
                        dt.d=a;
                }
                else{
                    if (word[1] != '\0')
                        dt.m=a*10+b;
                    else
                        dt.m=a;
                    }
                }
        else{
            a=word[0]-'0';
            b=word[1]-'0';
            c=word[2]-'0';
            d=word[3]-'0';
            dt.y=a*1000+b*100+c*10+d;
        }
        for(int x=0;x<j;x++)
            word[x] = '\0';
        j=0;
        }
        else{
            word[k]=arr[i];
            j++;
        }
        i++;
    }
    printf("Date: %d/%d/%d", dt.d, dt.m, dt.y);
}