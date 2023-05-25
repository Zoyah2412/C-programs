#include<stdio.h>
double decimal(double f,int *d){
	int a=f/1;
	*d=a;
	double n=f-(1.0*a);
	return n;
}
int main(){
    double num;
    printf("Enter a float number : ");
    scanf("%lf",&num);
    int r;
    float dec=decimal(num,&r);
    printf("The real part of %lf is : %d \n",num,r);
    printf("The decimal  part of %lf is : %lf",num,dec);
    return 0;
}