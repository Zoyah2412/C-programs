#include<stdio.h>
void subset(int *a,int *b,int l,int m){
	int i,j,flag=0;
	for(i=0;i<m;i++){
		int check=b[i];
		flag=1;
		for(j=0;j<l;j++){
			if(check==a[j]){
				flag=0;
			}
		}
		if(flag==1){
			break;
		}
	}
	if(flag==0){
		printf("\nThe given array is the subset of the first array");
	}else{
		printf("\nThe given array is not the subset of the first array");
	}
}
int main(){
	int n,m,i;
	printf("How many inputs for sample array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("How many inputs for other array :");
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++){
		printf("Enter element %d:",i+1);
		scanf("%d",&b[i]);
	}
	if(m>n){
		printf("The given array is not a subset of the 1st array");
	}
	else{
		subset(a,b,n,m);
	}
	return 0;
}