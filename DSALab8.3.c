#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void create_cq(struct node **f,struct node **b){
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
	(*b)->next=(*f);
}
void display(struct node *s){
	struct node *nw=s;
	while(nw->next!=s){
		printf("%d ",nw->data);
		nw=nw->next;
	}
	printf("%d",nw->data);
}
void enqueue(struct node **b,struct node *f){
	int key;
	printf("enter the value to be inserted:");
	scanf("%d",&key);
	struct node *nw=(struct node *)malloc(sizeof(struct node));
	nw->data=key;
	nw->next=f;
	(*b)->next=nw;
	*b=nw;
	
}
void dequeue(struct node **f,struct node *b){
	struct node *nw=(*f);
	(*f)=(*f)->next;
	free(nw);
	b->next=(*f);
}
void peek(struct node *f){
	printf("%d",f->data);
}
void isempty(struct node *f){
	if(f==NULL){
		printf("circular queue is empty");
	}
	else{
		printf("circular queue is not empty");
	}
}
int main(){
	struct node *front=NULL,*rear=NULL;
	int x;
	create_cq(&front,&rear);
	again:
		printf("\n1 to display\n2 to enqueue\n3 to dequeue\n4 to peek\n5 to check if queue is empty");
		printf("\n6 to exit the program\nenter your choice:");
		scanf("%d",&x);
	switch(x){
		case 1:display(front);
				goto again;
		case 2:enqueue(&rear,front);
				goto again;
		case 3:dequeue(&front,rear);
				goto again;
		case 4:peek(front);
				goto again;
		case 5:isempty(front);
				goto again;
		case 6:break;
	}
	return 0;
}