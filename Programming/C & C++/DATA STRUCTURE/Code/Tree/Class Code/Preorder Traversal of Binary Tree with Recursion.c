#include<stdio.h>


struct BinaryTreeNode
{
    int info;
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
};



void preOrder(struct BinaryTreeNode *root)
{
    if(root){
        printf("%d  ",root->info);
        preOrder(root->left);
        preOrder(root->right);
    }
}
