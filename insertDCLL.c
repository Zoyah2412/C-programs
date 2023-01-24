// inserting in CDBLL
#include <stdio.h>
#include <stdlib.h>
struct dlink
{
    struct dlink *prev;
    int data;
    struct dlink *next;
};
typedef struct dlink node;
node* create(){
    node *nw=(node *)malloc(sizeof(node));
    int d;
    printf("Enter element 1 : "); 
    scanf("%d",&d);
    nw->prev=nw;
    nw->next=nw;
    nw->data=d;
    return nw;
}
void display(node *p)
{
    node *temp=p->next;
    do{
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp!=p->next);
}
node* insertend(node *p, int d){
    node *nw = (node *)malloc(sizeof(node));
    nw->data=d;
    node *temp=p->next;
    nw->next=temp;
    nw->prev=p;
    p->next=nw;
    temp->prev=nw;
    p=nw;
    return p;
}
void insertbeg(node *p, int d){
    node *nw = (node *)malloc(sizeof(node));
    nw->data=d;
    node *temp=p->next;
    nw->next=temp;
    temp->prev=nw;
    nw->prev=p;
    p->next=nw;
}
void insertkey(node *p, int d, int pos){
    node *nw = (node *)malloc(sizeof(node));
    nw->data=d;
    node *temp=p->next;
    while(pos>1){
        temp=temp->next;
        pos--;
    }
    node *temp2=temp->next;
    nw->next=temp2;
    nw->prev=temp;
    temp2->prev=nw;
    temp->next=nw;
}
int main()
{
    int l,d,pos;
    printf("Enter size of linked list you want to create : ");
    scanf("%d",&l);
    node *tail=create();
    for(int i=1;i<l;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&d);
        tail=insertend(tail,d);
    }
    display(tail);
    printf("Enter element to be inserted at the beginning : ");
    scanf("%d",&d);
    insertbeg(tail,d);
    display(tail);
    printf("Enter element to be inserted at the end : ");
    scanf("%d",&d);
    tail=insertend(tail,d);
    display(tail);
    printf("Enter position where you want to insert new node : ");
    scanf("%d",&pos);
    printf("Enter element to be inserted at given position : ");
    scanf("%d",&d);
    insertkey(tail,d,pos);
    display(tail);
    return 0;
}