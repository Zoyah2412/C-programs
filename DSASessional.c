#include <stdio.h>
#include <stdlib.h>
int l;
struct linklist{
    int no;
    struct linklist *next;
};
typedef struct linklist node;
void create_list(node *lst){
    int n;
    printf("Enter the number of nodes you want to create(multiple of 3) : ");  
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
void display(node *lst){
    while(lst!=NULL){
	    printf("%d ",lst->no);
	    lst=lst->next;
   }
   printf("\n");
}
void split_reverse(node *nw){
    while(nw->next!=NULL){
        node *n1=nw;
        node *n2=nw->next;
        node *h=n2->next;
        if(h->next!=NULL)
            nw=h->next;
        h->next=n2;
        n2->next=n1;
        n1->next=NULL;
        display(h);
    }
}
void main(){
    printf("Zoyah Afsheen Sayeed \n21052990\n");
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Original linked list : ");
    display(head);
    split_reverse(head);
}