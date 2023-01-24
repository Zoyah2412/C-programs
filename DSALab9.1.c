/*1. Write the following menu driven program for the binary search tree 0. Quit 1. Create2. In-Order Traversal3. Pre-Order Traversal4. Post-Order 
traversal 5. Search 6. Find Smallest Element 7. Find Largest Element 8. Deletion of Tree*/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create()
{
    int key;
    struct node *nw = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to be inserted (press -1 to add no new node):");
    scanf("%d", &key);
    if (key == -1)
    {
        nw = NULL;
        return nw;
    }
    else
    {
        nw->data = key;
        printf("enter the left child of %d", key);
        nw->left = create();
        printf("enter the right child of %d", key);
        nw->right = create();
        return nw;
    }
}
void inorder(struct node *h)
{
    if (h == NULL)
    {
        return;
    }
    inorder(h->left);
    printf("%d ", h->data);
    inorder(h->right);
}
void pre(struct node *h)
{
    if (h == NULL)
    {
        return;
    }
    printf("%d ", h->data);
    pre(h->left);
    pre(h->right);
}
void post(struct node *h)
{
    if (h == NULL)
    {
        return;
    }
    post(h->left);
    post(h->right);
    printf("%d ", h->data);
}
void search(struct node *h, int key, int *f)
{
    if (h == NULL)
    {
        return;
    }
    else if (h->data == key)
    {
        *f = 1;
        return;
    }
    search(h->left, key, f);
    search(h->right, key, f);
}
void smallest(struct node *h, int *s)
{
    if (h == NULL)
    {
        return;
    }
    else if (h->data < *(s))
    {
        *s = h->data;
    }
    smallest(h->left, s);
    smallest(h->right, s);
}
void largest(struct node *h, int *s)
{
    if (h == NULL)
    {
        return;
    }
    else if (h->data > *(s))
    {
        *s = h->data;
    }
    largest(h->left, s);
    largest(h->right, s);
}
void del(struct node *h)
{
    if(h==NULL){
		return;
	}
	del(h->left);
	del(h->right);
	free(h);
}
int main()
{
    struct node *tree;
    int key,flag,choice;
    menu:
        printf("\n\n---MENU---");
        printf("\n0)Quit\n1)Create\n2)In-order\n3)Pre-Order\n4)Post-Order\n5)Search\n6)Smallest element\n7)Largest elment\n8)Deletion of Tree");
        printf("\n\nEnter your choice- ");
        scanf("%d",&choice);
    int small,larg;
    switch(choice)
        {
            case 0: break;
            case 1: tree = create();
                    goto menu;
            case 2: inorder(tree);
                    goto menu;
            case 3: pre(tree);
                    goto menu;
            case 4: post(tree);
                    goto menu;
            case 5: printf("Enter element to be searched- ");
                    scanf("%d",&key);
                    search(tree, key, &flag);
                    if (flag == 0)
                        {
                            printf("Element not found");
                        }
                    else
                        {
                            printf("Element found");
                        }
                    goto menu; 
            case 6: small=tree->data;
                    smallest(tree,&small);
                    printf("Smallest element- %d", small);
                    goto menu; 
            case 7: larg=tree->data;
                    largest(tree,&larg);
                    printf("Largest element- %d",larg);
                    goto menu; 
            case 8: del(tree);
                    tree=NULL;
                    goto menu;
        }
    return 0;
}