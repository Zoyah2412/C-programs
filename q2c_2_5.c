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
	int mid;
	if(columns%2==0)
		mid=columns/2;
    else
		mid=(columns-1)/2;
	for(int i=1;i<=mid;i++){
		for(int j=(i-1);j<i;j++){
			for(int k=0;k<rows;k++){
				arr[k][j]=count;
				count++;
			}
		}
		for(int j=columns-i;j>columns-i-1;j--){
			for(int k=rows-1;k>=0;k--){
				arr[k][j]=count;
				count++;
			}
		}
	}
	if(columns%2!=0){
		int j=(columns+1)/2;
		for(int i=0;i<rows;i++){
			arr[i][j]=count;
			count++;
		}
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}