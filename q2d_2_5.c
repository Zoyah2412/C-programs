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
	for(int i=rows-1;i>=0;i--){
		if(i%2==0){
			for(int j=0;j<=rows-1-i;j++){
				arr[i+j][j]=count;
				count++;
			}
		}
        else{
			for(int j=rows-1-i;j>=0;j--){
				arr[i+j][j]=count;
				count++;
			}
		}
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
	return 0;
}
