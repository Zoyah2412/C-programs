//WAP to count the number of occurences of a node in a singular linked list of n nodes
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
int occurence(node *ptr,int num){
    int ctr=0;
    while(ptr!=NULL){
        if(ptr->no==num)
            ctr++;
        ptr=ptr->next;
    }
    return ctr;
}
void main(){
    printf("Zoyah Afsheen Sayeed \n21052990\n");
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Original linked list : ");
    disp(head);
    int n;
    printf("\nEnter element whose occurence you want to know : ");
    scanf("%d",&n);
    int ctr=occurence(head,n);
    printf("Number of occurences of %d in linked list : %d",n,ctr);
}