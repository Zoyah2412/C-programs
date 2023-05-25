#include<stdio.h>
int nfib(int n){
	int a=0,b=1,c=1,i;
	for(i=1;i<=n-1;i++){
		c=a+b;
		a=b;
		b=c;
	}
    return c;
}
void main(){
	int num;
	printf("Enter value of n :");
	scanf("%d", &num);
    int ans=nfib(n);
	printf("\n%dth value of Fibonacci series : %d",num,ans);
}