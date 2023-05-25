#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
	scanf("%d",&n);
	int i=1,j=n,count=1;
	here:
		if(i%2==1){
		    int k=j;
			pattern1:
				printf("%d\t",count);
				count++;
				k--;
			if(k>=1)
	            goto pattern1;
		}
        else{
			count=(count+j)-1;
			int k=j;
			pattern2:
				printf("%d\t",count);
				count--;
				k--;
			if(k>=1)
			goto pattern2;
			count=count+j+1;
		}
		printf("\n");
		i++;
		j--;
	if(i<=n)
        goto here;
	return 0;			
}