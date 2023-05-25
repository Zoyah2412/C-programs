#include<stdio.h>
int main(){
    int i;
    short int s;
    long int l;
    float f;
    double d;
    long double ld;
    char c;
    scanf("%d %hd %ld %f %lf %Lf %c",&i,&s,&l,&f,&d,&ld,&c);
    printf("%d %hd %ld %f %lf %Lf %c",i,s,l,f,d,ld,c);
    return 0;
}