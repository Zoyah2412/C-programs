#include<stdio.h>
int main(){
    int s;
	for (int i=1;i<=4;i++){
		s=4-i;
		for(int j=1;j<=s;j++){
		printf(" ");
		}
		for(int j=s;j<4;j++){
			printf("*");
		}
		printf("\n");
	}
}