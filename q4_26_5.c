#include<stdio.h>
union data{
	float no;
	char c[3];
};
int main(){
	union data d1,d2;
	printf("Enter first float number : ");
	scanf("%f",&d1.no);
	printf("Enter second float number : ");
	scanf("%f",&d2.no);
	char c=d1.c[1];
	d1.c[1]=d2.c[2];
	d2.c[2]=c;
	char d=d1.c[2];
	d1.c[2]=d2.c[1];
	d2.c[1]=d;
	printf("%f %f",d1.no,d2.no);
	return 0;
}