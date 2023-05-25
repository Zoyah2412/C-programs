#include<stdio.h>
int factorial(int n){
	int f=1;
	for(int i=1;i<=n;i++)
        f=f*i;
	return f;
}
int main(){
	int num,ans;
	printf("Enter a number to find its factorial : \n");
	scanf("%d", &num);
	ans=factorial(num); 
	printf("\nThe final value is : %d ", ans);	
	return 0;
}