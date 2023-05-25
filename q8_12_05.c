#include<stdio.h>
int fact(int n){
	int f=1;
	for(int i=1;i<=n;i++)
		f*=i;
	return f;
}
int fib(int n){
	int a=1,b=1,c;
	for(int i=1;i<n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
void series(int n){
	int i=1,j=1;
	float s=0.0;
	while(i<=n){
		s+=(1.0*fib(i))/(1.0*fact(j));
		printf("%d/%d!+ ",fib(i),j);
		j+=2;
		i++;
	}
	printf("= %f",s);
}
int main(){
	int num;
	printf("Enter the number upto which you want the sum of the series : ");
	scanf("%d",&num);
	printf("\n Sum of the series ");
	series(num);
	return 0;
}