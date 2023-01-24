// WAP to delete middle node from a linked list
#include <stdio.h>
#include <stdlib.h>
int l;
struct linklist{
    int no;
    struct linklist *next;
};
typedef struct linklist node;
void disp(node *lst){
    while(lst!=NULL){
	    printf("%d ",lst->no);
	    lst=lst->next;
   }
}
void create_list(node *lst){
    int n;
    printf("Enter the number of nodes you want to create : ");  
    scanf("%d",&n);
    l=n;
    printf("Enter numbers into the linked list : ");         
    while(n!=0){
	    scanf("%d",&lst->no);
	    n--;
	    if(n==0)
	       break;
	    lst->next=(node *)malloc(sizeof(node));
	    lst=lst->next;
	}
	lst->next=NULL;
}
node *delmid(node *ptr,int n){
    node *slow=ptr,*fast,*temp;
    if(n%2==0)
        fast=ptr->next;
    else
        fast=ptr;
    int f=0;
    while(fast!=NULL && fast->next!=NULL){
        temp=slow;
        fast=fast->next->next;
        slow=slow->next;
    }
    if(n%2==0){
        temp->next=slow->next->next;
        free(slow);
        free(slow->next);
    }
    else{
        temp->next=slow->next;
        free(slow);
        }
    printf("Elements after delete : ");
    disp(ptr);
}
void main(){
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Elements before delete : ");
    disp(head);
    head=delmid(head,l);
}