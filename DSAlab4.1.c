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
void traversal(node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->no);
        ptr=ptr->next;
    }
}
void emptycheck(node *ptr){
    if(ptr!=NUll)
        printf("Not empty");
    else
        printf("Empty linked list");
}
node *insert(node *ptr,int pos,){
    node *head=ptr;
    if(pos==1){
        struct node *nw=(struct node *)malloc(sizeof(struct node));
		int n;
		printf("Enter the number to be inserted : ");
		scanf("%d",&n);
		nw->no=n;
		nw->next=head;
		head=nw;
	}
    else{

    }
}
void main(){
    printf("Zoyah Afsheen Sayeed \n21052990\n");
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
}