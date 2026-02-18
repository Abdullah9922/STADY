#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};


struct node* create()
{
    int x;
    struct node *newnode;
    newnode = (struct node*) malloc (sizeof(struct node));
    printf("\nEnter data (-1 for no node) in node: ");
    scanf("%d",&x);

    if(x == -1)
        return 0;

    newnode -> data = x;
    printf("\nEnter left child: ");
    newnode -> left = create();

    printf("\nEnter Right child: ");
    newnode -> right = create();
    return newnode;
};


void inOrder(struct node *root)
{
    if(root){
        inOrder(root->left);
        printf("%d  ",root->data);
        inOrder(root->right);
    }
}


void main()
{
    struct node *root;
    root = NULL;
    root = create();

    inOrder(root);
}
