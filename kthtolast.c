// WAP to find kth to last element of a linked list
#include <stdio.h>
#include <stdlib.h>
struct linklist{
    int no;
    struct linklist *next;
};
typedef struct linklist node;
void disp(node *lst){
    while(lst != NULL){
	    printf("%d  ",lst->no);
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
node *ktolast(node *ptr){
    node *lst=ptr;
    int k,ctr=1;
    printf("Enter from what node to last you want to print : ");
    scanf("%d",&k);
    while(lst!=NULL){
        if(ctr==k)
            break;
        ctr++;
        lst=lst->next;
        }
    disp(lst);
}
void main(){
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Elements before delete- ");
    disp(head);
    ktolast(head);
}