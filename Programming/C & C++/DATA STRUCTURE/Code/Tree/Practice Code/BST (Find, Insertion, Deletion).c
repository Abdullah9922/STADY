#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *left;
    struct node *right;
};


struct node* Find(struct node *root, int data)
{
    if(root == NULL) return root;

    else if(root -> data > data)
        return Find(root -> left,data);

    else if(root -> data < data)
        return Find(root -> right, data);

    else return root;
};


void Insert(struct node *root, int data)
{
    struct node *temp;
    struct node *n;

    n = (struct node*) malloc(sizeof(struct node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;

    if(root == NULL){
        root = n;
        return;
    }


    temp = root;
    while(temp != NULL){

        if(temp -> data> data){
            if(temp -> left == NULL)
                temp -> left = n;
            temp = temp ->left;
        }

        else if(temp -> data < data){
            if(temp -> right == NULL)
                temp -> right = n;
            temp = temp -> right;
        }
    }
}


struct node* Delete(struct node *root, int data)
{
    struct node *temp;

    if(root == NULL)
        printf("No such element in the Tree.\n");

    else if(root -> data > data)
        root -> left = Delete(root -> left, data);

    else if(root -> data < data)
        root -> right = Delete(root -> right, data);

    else{

        if( root -> right != NULL && root -> left != NULL){
            temp = FindMax(root -> left);
            root -> data = temp -> data;
            root -> left = Delete(root -> left, root -> data);
        }

        else {
            temp = root;

            if(root -> left == NULL)
                root = root -> right;

            else if(root -> right == NULL)
                root = root -> left;
            free(temp);
        }
        return root;
    }
};
