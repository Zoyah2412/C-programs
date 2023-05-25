#include<stdio.h>
int main(){
	int n;
	printf("Enter number of terms to be displayed : ");
	scanf("%d", &n);
	int i=2,a=2,b=7,c;
	printf("%d %d ", a,b);
	series:
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
	if(i<=n)
		goto series;
	return 0;
}