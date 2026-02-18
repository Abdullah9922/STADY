#include<stdio.h>


struct node* Find(struct node *root,int data)
{
    if(root == NULL) return;

    if(data<root -> data)
        return (Find(root -> left,data))
    else if(data > root->data)
        return (Find(root->right,data))
    else
        return (root);
};
