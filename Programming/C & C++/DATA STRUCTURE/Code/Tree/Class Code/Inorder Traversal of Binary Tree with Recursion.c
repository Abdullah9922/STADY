#include<stdio.h>


struct BinaryTreeNode
{
    int info;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};



void inOrder(struct BinaryTreeNode *root)
{
    if(root){
        inOrder(root->left);
        printf("%d  ",root->info);
        inOrder(root->right);
    }
}

