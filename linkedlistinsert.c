#include <stdio.h>
#include <stdlib.h>
struct linklist
  {
     int no;
     struct linklist *next;
  };
typedef struct linklist node;
node *ibeg(node *lst) 
  {
     node *nw,*head=lst;
     nw=(node *)malloc(sizeof(node));
     printf("Enter no to be inserted at beginning : ");
     scanf("%d",&nw->no);
     nw->next=lst;
     return nw;
  }
node* iend(node *lst) {
     node *head=lst;
     node *nw;
     nw=(node *)malloc(sizeof(node));
     printf("Enter no to be inserted at end : ");
     scanf("%d",&nw->no);
     while(lst->next!= NULL)
	    lst=lst->next;
     lst->next=nw;
     return head;
  }
node *ipos(node *lst) 
  {
     node *nw,*prev,*head=lst;
     int p,ctr=1;
     nw=(node *)malloc(sizeof(node));
     printf("Enter no to be inserted at given position : ");
     scanf("%d",&nw->no);
     printf("Enter position at which node is to be inserted ");
     scanf("%d",&p);
     if (p==1){
        nw->next=lst;
        return nw;
     }
    else{
        while(p!=ctr){
            prev=lst;
            lst=lst->next;
            ctr++;
        }
        nw->next=lst;
        prev->next=nw;
    return head;
    }
  }
void disp(node *lst)   
  {
     while(lst != NULL)
       {
	  printf("%d   ",lst->no);
	  lst=lst->next;
       }
  }
void create_list(node *lst)   
  {
      int r;
      printf("How many nos ");  
      scanf("%d",&r);          
      while(r != 0)              
	 {                       
	    printf("Enter no ");  
	    scanf("%d",&lst->no);
	    r--;
	    if(r==0)
	       break;
	    lst->next=(node *)malloc(sizeof(node));
	    lst=lst->next;
	 }
	 lst->next=NULL;
  }
void main()
  {
    node *head;
    head=(node *)malloc(sizeof(node));  
    create_list(head);
    printf("\nElemnts Before insert-");
    disp(head);
    head=ibeg(head);
    printf("\nElemnts after insertion at beginning -");
    disp(head);
    head=iend(head);
    printf("\nElemnts after insertion at end -");
    disp(head);
    head=ipos(head);
    printf("\nElemnts after insertion at given -");
    disp(head);
  }