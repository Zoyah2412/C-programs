#include<stdio.h>
#include<stdlib.h>
void create_dq(int *q,int n,int **f,int **b,int size){
	int i;
	for(i=0;i<n;i++){
		if(i>=size){
			printf("sorry queue is full cannot take more inputs");
			break;
		}
		printf("enter the element:");
		scanf("%d",(q+i));
	}
	*b=(q+size-1);
}
void display(int *s,int n){
	int i=0;
	while(i<n && s[i]!=0){
		printf("%d ",*(s+i));
		i++;
	}
}
void enqueue_back(int *a,int *size,int n){
	if((*size)>=n){
		printf("sorry deque is full cannot take more inputs");
		return;
	}
	else{
		(*size)++;
		int key;
		printf("enter the value to be inserted:");
		scanf("%d",&key);
		a[(*size)-1]=key;
	}
}
void enqueue_front(int *a,int *size,int n){
	if((*size)>=n){
		printf("sorry deque is full cannot take more inputs");
		return;
	}
	else{
		(*size)++;
		int key,i;
		printf("enter the value to be inserted:");
		scanf("%d",&key);
		int len=*size;
		for(i=len-1;i>=1;i--){
			a[i]=a[i-1];
		}
		a[0]=key;
	}
}
void dequeue_front(int *a,int n){
	int i;
	for(i=0;i<n-1;i++){
		a[i]=a[i+1];
	}
}
void dequeue_back(int *a,int n){
	a[n-1]=0;
}
void peek(int *f){
	printf("element present at the first is %d",f[0]);
}
void isempty(int *a,int n){
	int i,flag=0;
	for(i=0;i<n;i++){
		if(a[i]!=0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("deque is empty");
	}
	else{
		printf("deque is not empty");
	}
}
void isfull(int n,int size){
	if(n>=size){
		printf("deque is full");
	}
	else{
		printf("deque is not full");
	}
}
int main(){
	int n,size,x;
	printf("enter the size of the deque:");
	scanf("%d",&size);
	int deque[size];
    for(int i=0;i<size;i++)
        deque[i]=0;
	printf("how many inputs you want to take:");
	scanf("%d",&n);
	int *front=deque,*rear=deque;
	create_dq(deque,n,&front,&rear,size);
	again:
		printf("\n1 to display\n2 to enqueue from back\n3 to enqueue from front\n4 to dequeue from front\n5 to dequeue from back");
		printf("\n6 to peek\n7 to check if deque is empty\n8 to check deque is full\n9 to exit the program\nenter your choice:");
		scanf("%d",&x);
	switch(x){
		case 1:display(front,n);
				goto again;
		case 2:enqueue_back(deque,&n,size);
				rear= (deque+n-1);
				goto again;
		case 3:enqueue_front(deque,&n,size);
				goto again;
		case 4:dequeue_front(deque,n);
				n--;
				goto again;
		case 5:dequeue_back(deque,n);
				n--;
				rear= (deque+n-1);
				goto again;
		case 6:peek(deque);
				goto again;
		case 7:isempty(deque,n);
				goto again;
		case 8:isfull(n,size);
				goto again;
		case 9:break;
	}
	return 0;
}