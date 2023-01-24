#include<stdio.h>
int main(){
	int i1,i2,i3,t;
    printf("Enter price of 3 items :");
	scanf("%d %d %d",&i1,&i2,&i3);
	if(i1>=5000){
		i1=i1-((i1*40)/100);
	}else if(i1>3000){
		i1=i1-((i1*20)/100);
	}else if(i1>1000){
		i1=i1-((i1*5)/100);
	}
	if(i2>=5000){
		i2=i2-((i2*40)/100);
	}else if(i2>3000){
		i2=i2-((i2*20)/100);
	}else if(i2>1000){
		i2=i2-((i2*5)/100);
	}
	if(i3>=5000){
		i3=i3-((i3*40)/100);
	}else if(i3>3000){
		i3=i3-((i3*20)/100);
	}else if(i3>1000){
		i3=i3-((i3*5)/100);
	}
	t=i1+i2+i3;
	if(t>=10000){
		t=t-((t*5)/100);
		printf("Total amount = %d",t);
	}else{
		printf("Total amount = %d",t);
	}
}