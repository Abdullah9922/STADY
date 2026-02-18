#include<stdio.h>


struct node
{
    int data;
    struct node *left;
    struct node *right;
};


void preOrder(struct node *root)
{
    if(root == NULL)
        return;

    printf("%d  ",root->data);
    preOrder(root -> left);
    preOrder(root -> right);
}


void main()
{
    struct node *root;
    root = NULL;
    printf("PreOrder is :  ");
    preOrder(root);
}
