// WAP to check if a linked list is a palindrome
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
int palindromecheck(node *ptr){
    int r=0,n=0,x=1;
    while(ptr!=NULL){
        r=(r*10)+ptr->no;
        n=(ptr->no)*x+n;
        x=x*10;
        ptr=ptr->next;
    }
    if(r==n)
        return 1;
    else
        return 0;
}
void main(){
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("Elements of the linked list : ");
    disp(head);
    int result=palindromecheck(head);
    if(result==1)
        printf("\nLinked list is a palindrome");
    else
        printf("\nLinked list is not a palindrome");
}