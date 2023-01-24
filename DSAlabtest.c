#include <stdio.h>
#include <stdlib.h>
struct node{
	struct node *prev;
    int data;
    struct node* next;
};
void swap(struct node **nw){
    int n=1,i;
    struct node *p=*nw;
    while(p->next!=NULL){
        n++;
        p=p->next;
    }
    struct node* temp[n];
    p=*nw;
    for(i=0;i<n;i++){
        temp[i]=p;
        p=p->next;
    }
    for(i=0;i<(n/2);i++){
    	struct node *t=temp[i];
    	temp[i]=temp[n-1-i];
    	temp[n-1-i]=t;
    }
    for(i=0;i<n;i++){
        temp[i]->next=temp[i+1];
        temp[i+1]->prev=temp[i];
    }
    *nw=temp[0];
    temp[0]->prev=NULL;
    temp[n-1]->next=NULL;
}
void create_dlink(struct node **p){
	int n;
	struct node *nw,*q;
	printf("Enter even number of nodes :");
	scanf("%d",&n);
	if(*p==NULL){
		nw=(struct node *)malloc(sizeof(struct node));
		printf("Enter a number : ");
		scanf("%d",&nw->data);
		nw->prev=NULL;
		nw->next=NULL;
		*p=nw;
		n--;
	}
	while(n!=0){
		q=(struct node *)malloc(sizeof(struct node));
		printf("Enter a number :");
		scanf("%d",&q->data);
		q->next=NULL;
		nw->next=q;
		q->prev=nw;
		nw=q;
		n--;
	}
}
void display(struct node *p){
	while(p->next!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
}
int main(){
    struct node* list=NULL;
	create_dlink(&list);
    display(list);
    swap(&list);
    display(list);
    return 0;
}