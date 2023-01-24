#include<stdio.h>
int c1=0;
int rev(int num){
    int rn=0;
    while (num>0){
        int d=num%10;
        num=num/10;
        rn=(rn*10)+d;
    }
    return rn;
}
int dig(int n){
    int d=n%10;
    return d;
}
int matrix(int n,int (*p)[c1],int r,int c){
    int num=n;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(num>0){
                p[i][j]=dig(num);
                num=num/10;
            }
            else{
                num=rev(n);
                n=num;
                p[i][j]=dig(num);
                num=num/10;
            }
        }
    }
}
int main(){
    int i,j,rows,columns;
    printf("Enter no. of rows : ");
	scanf("%d",&rows);
	printf("Enter no. of columns : ");
	scanf("%d",&columns);
    c1=columns;
    int arr[rows][columns];
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r=rev(n);
    matrix(r,arr,rows,columns);
    printf("The array : \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++)
            printf("%d \t",arr[i][j]);
        printf("\n");
    }
}