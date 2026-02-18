#include<stdio.h>


struct BinaryTreeNode
{
    int info;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};



void postOrder(struct BinaryTreeNode *root)
{
    if(root){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d  ",root->info);
    }
}

