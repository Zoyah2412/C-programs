#include<stdio.h>
int main(){
    int s;
	for (int i=1;i<=4;i++){
		s=5-i;
		for(int j=1;j<=s-1;j++){
		printf(" ");
		}
		for(int j=s;j<=4;j++){
			printf("%d",j);
		}
        printf("\n");
    }
	return 0;
}