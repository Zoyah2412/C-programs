#include<stdio.h>
void series(int x,int y,int i,int j,int n, int ctr){
    if (ctr<n){
        ctr++;
        if(ctr==1)
            printf("%d ",x);
        if(ctr==2)
            printf("%d ",y);
        if(ctr>2){
            int s=(i*x)+(y*j);
            int temp=i;
            i=j;
            j=temp+i;
            printf("%d ",s);
        }
        series(x,y,i,j,n,ctr);
    }
}
int main(){
    int a,b,num;
    printf("Enter two numbers whose series you want to display : ");
    scanf("%d %d",&a,&b);
    printf("Enter number of terms of the series that you want to display : ");
    scanf("%d",&num);
    series(a,b,1,1,num,0);
    return 0;
}