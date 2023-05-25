#include<stdio.h>
int main(){
	int a=1,s;
	for (int i=1;i<=5;i++){
		if(i%2==0){
			s=(5-i);
			a+=s;
			for(int j=5;j>=i;j--){
				printf("%d \t",a);
				a--;
			}
			a=a+(s+1);
			a++;
		}else{
			for(int j=1;j<=(5-i+1);j++){
				printf("%d \t",a);
				a++;
			}
		}
		printf("\n");
	}
	return 0;
}