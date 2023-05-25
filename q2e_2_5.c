#include<stdio.h>
int main(){
	int count=1,rows,columns;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	printf("Enter number of columns : ");
	scanf("%d",&columns);
	int arr[rows][columns];
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++)
			arr[i][j]=0;
	}
	for(int i=0;i<rows;i++){
		int j=i;
		int k=rows-1;
		while(j>=0){
			arr[j][k]=count;
			count++;
			j--;
			k--;
		}
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
	return 0;
}