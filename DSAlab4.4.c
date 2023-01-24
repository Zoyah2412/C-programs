// WAP to delete duplicate numbers from a linked list
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
node *rmvduplicate(node *ptr){
    node *lst=ptr,*dup,*temp;
    int f=0;
    while(lst!=NULL){
        node *l2=lst;
        while(l2!=NULL){
            if(l2->next!=NULL && lst->no==l2->next->no){
                f=1;
                dup=l2->next;
                l2->next=dup->next;
                free(dup);
            }
            else
                l2=l2->next;
        }
        lst=lst->next;
    }
    if (f==0)
       printf("No duplicate numbers found");
    else{
        printf("Elements after removing duplicates : ");
        disp(ptr);
    }
}
void main(){
    printf("Zoyah Afsheen Sayeed \n21052990\n");
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Elements before delete : ");
    disp(head);
    rmvduplicate(head);
}