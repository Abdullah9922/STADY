#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};


void Insert(struct node *root , int data)
{
    struct node *temp;
    struct node *n = (struct node*) malloc(sizeof(struct node));

    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;

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
                if( temp -> right == NULL)
                    temp -> right = n;
                temp = temp -> right;
            }
        }
    }
}


struct node* Find(struct node *root, int data)
{
    if(root == NULL) return root;

    else if(root -> data > data)
        return (Find(root -> left,data));

    else if(root -> data <data)
        return (Find(root -> right,data));

    else return root;
};
