#include<stdio.h>
int main(){
	int a=1;
	for (int i=1;i<=5;i++){
		for(int j=5;j>=i;j--){
			printf("%d \t",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}