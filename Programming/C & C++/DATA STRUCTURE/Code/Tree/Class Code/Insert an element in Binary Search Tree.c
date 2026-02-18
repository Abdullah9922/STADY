#include<stdio.h>


struct node
{
    int data;
    struct node *left;
    struct node *right;
};


void Insert(struct node *root,int data)
{
    struct node *temp;
    struct node *n = malloc(sizeof(struct node));

    n->left = NULL;
    n-> right = NULL;
    n-> data = data;

    if(root == NULL) root = n;

}
