#include<stdio.h>
int power(int x,int y){
	int pow=1;
	for(int i=1;i<=y;i++)
		pow=pow*x; 
    return pow;
}
int main(){
	int b,p;
	printf("Enter the base number : ");
	scanf("%d", &b);
	printf("Enter the power : ");
	scanf("%d", &p);
	int ans = power(b,p);
	printf("The final value is: %d", ans);
}