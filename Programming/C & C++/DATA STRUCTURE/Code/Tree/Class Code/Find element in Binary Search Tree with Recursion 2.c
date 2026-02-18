#include<stdio.h>


struct node* Find(struct node *root, int data)
{
    if (root == NULL)
        return NULL;

    else if(data > root -> data)
        return (root -> left)

    else if(data < root -> data)
        return (root -> right)

    else
        return root;
};
