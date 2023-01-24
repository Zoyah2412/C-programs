//WAP to search an element in a linked list and delete that node and insert at beginning
#include <stdio.h>
#include <stdlib.h>
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
node *update(node *ptr,int num){
    node *nw,*head=ptr,*prev=ptr;
    ptr=ptr->next;
    while(ptr!=NULL){
        if(ptr->no==num){
            prev->next=ptr->next;
            free(ptr);
            nw=(node *)malloc(sizeof(node));
            nw->no=num;
            nw->next=head;
            head=nw;
            break;
        }
        prev=prev->next;
        ptr=ptr->next;
    }
    printf("Elements after update : ");
    disp(ptr);
}
void main(){
    printf("Zoyah Afsheen Sayeed \n21052990\n");
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Original linked list : ");
    disp(head);
    int n;
    printf("\nEnter element to be searched for : ");
    scanf("%d",&n);
    update(head,n);
}