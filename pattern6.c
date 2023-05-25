#include<stdio.h>
int main(){
	int s;
	for (int i=1;i<=7;i++){
		s=7-i;
		for(int j=1;j<=s;j++){
		printf(" ");
		}
		for(int j=s;j<7;j++){
			printf("1 ");
		}
		printf("\n");
	}
	return 0;
}