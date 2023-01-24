#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void create_q(struct node **f,struct node **b){
	int n;
	struct node *nw,*q;
	printf("how many inputs:");
	scanf("%d",&n);
	if(*f==NULL){
		nw=(struct node *)malloc(sizeof(struct node));
		printf("enter number:");
		scanf("%d",&nw->data);
		nw->next=NULL;
		*f=nw;
		n--;
	}
	while(n!=0){
		q=(struct node *)malloc(sizeof(struct node));
		printf("enter number:");
		scanf("%d",&q->data);
		q->next=NULL;
		nw->next=q;
		nw=q;
		n--;
	}
	*b=nw;
}
void display(node *s){
	node *nw=s;
	while(nw!=NULL){
		printf("%d ",nw->data);
		nw=nw->next;
	}
}
void enqueue(struct node **b){
	int key;
	printf("enter the value to be inserted:");
	scanf("%d",&key);
	struct node *nw=(struct node *)malloc(sizeof(struct node));
	nw->data=key;
	nw->next=NULL;
	(*b)->next=nw;
	*b=nw;
}
void dequeue(struct node **f){
	struct node *nw=(*f);
	(*f)=(*f)->next;
	free(nw);
}
int peek(struct node *f){
	return f->data;
}
void isempty(struct node *f){
	if(f==NULL){
		printf("queue is empty");
	}
	else{
		printf("queue is not empty");
	}
}
int main(){
	node *front=NULL,*rear=NULL;
	int x;
	create_q(&front,&rear);
	again:
		printf("\n1 to display\n2 to enqueue\n3 to dequeue\n4 to peek\n5 to check if queue is empty");
		printf("\n6 to exit the program\nenter your choice:");
		scanf("%d",&x);
	switch(x){
		case 1:display(front);
				goto again;
		case 2:enqueue(&rear);
				goto again;
		case 3:dequeue(&front);
				goto again;
		case 4:peek(front);
				goto again;
		case 5:isempty(front);
				goto again;
		case 6:break;
	}
	return 0;
}