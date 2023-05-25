#include<stdio.h>
struct dates{
    int d;
	int m;
	int y;
};
int main(){
	struct dates d1,d2;
	int ydif=0;
	printf("Enter the first date in format dd/mm/yyyy : ");
	scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
	printf("Enter the second date in format dd/mm/yyyy : ");
	scanf("%d/%d/%d",&d2.d,&d2.m,&d2.y);
	if(d2.y>=d1.y)
        ydif=d2.y-d1.y;
    else
        ydif=d1.y-d2.y;
	printf("Difference between the two dates is %d years",ydif);
	return 0;
}