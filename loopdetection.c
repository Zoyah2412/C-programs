
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
node *loopdetection(node *ptr){
    node *slow=ptr,*fast=ptr,*temp;
    int f=0;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        temp=slow;
        slow=slow->next;
            if(slow==fast){
                temp->next=NULL; 
                flag=1;
                break;
        }

 

    }
    if(flag==1)
        printf("Loop found")
    else
        printf("Loop not found")
}
void main(){
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Elements before delete : ");
    disp(head);
    loopdetection(head);
}