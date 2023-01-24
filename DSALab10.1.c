/* Write the following menu driven program for the binary search tree create 1. Count number of leaf nodes in the tree 2. count number of non-leaf 
nodes in the tree. 3. find number of nodes in the tree. 4. find sum of all nodes of the tree. 5. print height and depth of the tree. 6. 
find nodes which are at maximum depth in the tree.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void create(struct node **h)
{
    int k;
    printf("Enter the data to be inserted- ");
    scanf("%d", &k);
    struct node *p, *q, *nw = (struct node *)malloc(sizeof(struct node));
    q = (*h);
    nw->data = k;
    nw->left = NULL;
    nw->right = NULL;
    if (q == NULL)
    {
        (*h) = nw;
    }
    else
    {
        while (q != NULL)
        {
            p = q;
            if (k > q->data)
            {
                q = q->right;
            }
            else
            {
                q = q->left;
            }
        }
        if (p->data > k)
        {
            p->left = nw;
        }
        else
        {
            p->right = nw;
        }
    }
}
void count(struct node *h, int *c)
{
    if (h == NULL)
    {
        return;
    }
    (*c)++;
    count(h->left, c);
    count(h->right, c);
}
void cont_leaf(struct node *h, int *c)
{
    if (h == NULL)
    {
        return;
    }
    else if (h->left == NULL && h->right == NULL)
    {
        (*c)++;
    }
    cont_leaf(h->left, c);
    cont_leaf(h->right, c);
}
void cont_nleaf(struct node *h, int *c)
{
    if (h == NULL)
    {
        return;
    }
    else if (h->left != NULL || h->right != NULL)
    {
        (*c)++;
    }
    cont_nleaf(h->left, c);
    cont_nleaf(h->right, c);
}
void sum(struct node *h, int *c)
{
    if (h == NULL)
    {
        return;
    }
    (*c) += h->data;
    sum(h->left, c);
    sum(h->right, c);
}
void leaf_end(struct node *h, int *c)
{
    if (h->left == NULL && h->right == NULL)
    {
        return;
    }
    else if (h->left != NULL)
    {
        (*c)++;
        leaf_end(h->left, c);
    }
    else
    {
        (*c)++;
        leaf_end(h->right, c);
    }   
}
void height(struct node *t, int *h)
{
    int a = 0, b = 0;
    if (t->left != NULL)
    {
        a++;
        leaf_end(t->left, &a);
    }
    if (t->right != NULL)
    {
        b++;
        leaf_end(t->right, &b);
    }
    if (a > b)
    {
        (*h) = a;
    }
    else
    {
        (*h) = b;
    }
}
void depth_nodes(struct node *h, int *c, int cn)
{
    if (h == NULL)
    {
        return;
    }
    else if ((*c) == cn)
    {
        printf("%d ", h->data);
        (*c) = 0;
        return;
    }
    else
    {
        int org = (*c);
        (*c)++;
        depth_nodes(h->left, c, cn);
        (*c) = org;
        (*c)++;
        depth_nodes(h->right, c, cn);
    }
}
int main()
{
    int size, cnt = 0, choice, depth = 0;
    menu:
        printf("\n\n---MENU---");
        printf("\n1)Create\n2)No of leaf nodes\n3)No of non-leafnodes\n4)Tot no of nodes\n5)Sum of all nodes\n6)Height and depth");
        printf("\n7)No of nodes at maximum depth of tree\n8)Exit");
        printf("Enter your choice- ");
        scanf("%d", &choice);
    switch (choice)
    {
        case 1: printf("Enter size of BST- ");
                scanf("%d", &size);
                struct node *tree = NULL;
                while (size!=0)
                {
                    create(&tree);
                    size--;
                }
                goto menu;
        case 2: cont_leaf(tree, &cnt);
                printf("\nNo of leaf nodes is- %d", cnt);
                cnt = 0;
                goto menu;
        case 3: cont_nleaf(tree, &cnt);
                printf("\nNo of non-leaf nodes is- %d",cnt);
                cnt = 0;
                goto menu;
        case 4: count(tree, &cnt);
                printf("\nTotal no of nodes is- %d",cnt);
                cnt = 0;
                goto menu;
        case 5: sum(tree, &cnt);
                printf("\nSum of all nodes is- %d", cnt);
                cnt = 0;
                goto menu;
        case 6: height(tree, &cnt);
                printf("\nHeight and Depth- %d ",cnt);
                cnt = 0;
                goto menu;
        case 7: height(tree, &cnt);
                printf("No of nodes at maximum depth is- ");
                depth_nodes(tree, &depth, cnt);
                goto menu;
        case 8: break;
    }
    return 0;
}
