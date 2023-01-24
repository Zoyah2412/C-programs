#include<stdio.h>
void add(int *a,int *b,int l1,int l2){
	int l=(l1>l2)?l1:l2,i;
	int sum[l+1];
	for(i=0;i<=l;i++){
		if((i==l1+1) || (i==l2+1)){
			break;
		}
		sum[i]=a[i]+b[i];
	}
	if(i==l2+1){
		while(i<=l){
			sum[i]=a[i];
			i++;
		}
	}else{
		while(i<=l){
			sum[i]=b[i];
			i++;
		}
	}
	printf("\n The result of addition of the given two polynomial is : \n");
	for(i=0;i<=l;i++){
		printf("The coefficient whose power of variable is %d is %d\n",i,sum[i]);
	}
}
void multiply(int *a,int *b,int l1,int l2){
	int l=l1+l2+1,i,j;
	int result[l];
	for(i=0;i<=l1;i++){
		for(j=0;j<=l2;j++){
			result[i+j]=a[i]*b[j];
		}
	}
	printf("\nThe result of multiplication of the given two polynomial is:\n");
	for(i=0;i<l;i++){
		printf("The coefficient whose power of variable is %d is %d\n",i,result[i]);
	}
}
int main(){
	int n1,n2,i;
	printf("Enter the highest power for the first polynomial : ");
	scanf("%d",&n1);
	int a[n1+1];
	for(i=0;i<=n1;i++){
		printf("Enter the coefficient whose power is %d :",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the highest power for second polynomial : ");
	scanf("%d",&n2);
	int b[n2+1];
	for(i=0;i<=n2;i++){
		printf("Enter the coefficient whose power is : %d",i);
		scanf("%d",&b[i]);
	}
	add(a,b,n1,n2);
	multiply(a,b,n1,n2);
	return 0;
}