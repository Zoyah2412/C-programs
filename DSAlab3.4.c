#include<stdio.h>
int sum(int *a,int n,int key){
	int i=0,count=0,j;
	for(i=0;i<n;i++){
		int temp=a[i];
		for(j=i+1;j<n;j++){
			if((temp+a[j])==key){
				printf("{%d,%d}ewqwa",temp,a[j]);
				count+=1;
			}
		}
	}
	return count;
}
int main(){
	int n,i,k;
	printf("Enter number of inputs : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the number which should be equal to the sum of pair of intergers :");
	scanf("%d",&k);
	int count=sum(a,n,k);    ,uk77uuu, nm
	if(count==0)
		printf("No such pairs were found");
    else
		printf("\n%d pairs were found and are mentioned above",count);
	return 0;
}