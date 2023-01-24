#include<stdio.h>
int l=0;
int count(int num){
    int ctr=0,d;
    while (num!=0){
        d=num%10;
        num=num/10;
        ctr++;
    }
    return ctr;
}
int rev(int num){
    int rn=0; 
    for(int i=1;i<=l;i++){
        int d=num%10;
        num=num/10;
        rn=(rn*10)+d;
    }
    return rn;
}
int lshift(int n){
    int x=1;
    for(int i=1;i<l;i++)
        x=x*10;
    int a=((n%10)*x)+(n/10);
    return a;
}
int matrix(int n,int (*p)[l]){
    for(int i=0;i<l;i++){
        int num=n;
        for(int j=0;j<l;j++){
            p[i][j]=num%10;
            num=num/10;
        }
        n=lshift(n);
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    l=count(n);
    int arr[l][l];
    int r=rev(n);
    matrix(r,arr);
    printf("The array : \n");
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
}