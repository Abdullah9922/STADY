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

    else{
        temp = root;

        while(temp != NULL){

            if(temp -> data > data){
                if(temp -> left == NULL)
                    temp -> left = n;
                temp = temp -> left;
            }

            else if(temp -> data < data){
                if(temp -> right == NULL)
                    temp -> right = n;
                temp = temp -> right;
            }
        }
    }

}

