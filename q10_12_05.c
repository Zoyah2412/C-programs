#include<stdio.h>
void calc(int n1, int n2, char c){
	float ans;
	switch(c)
	{
		case '+' : ans=n1+n2;
				   break;
		case '-' : ans=n1-n2;
				   break;
		case '*' : ans=n1*n2;
				   break;
		case '/' : ans=(n1/(1.0*n2));
				   break;
	}
	printf("\n%d %c %d = %d", n1,c,n2,ans);
	return;
}
int main(){
	int  a,b;
	char o;
	printf("Enter the first number : ");
	scanf("%d", &a);
    printf("Enter operation to be performed : ");
	scanf("%c", &o);
	printf("Enter the second number : ");
    scanf("%d", &b);
	calc(a,b,c);
	return 0;
}