#include<stdio.h>

struct node* Delete(struct node *root, int data)
{
    struct node *temp;

    if(root == NULL) printf("No such element in the tree.\n");

    else if(root -> data > data)
        root -> left = Delete(root -> left,data);

    else if(root -> data < data)
        root -> right = Delete(root -> right,data)

    else{

        if(root -> left != NULL && root -> right != NULL){

            temp = FindMax(root -> left);
            root -> data = temp -> data;
            root -> left = Delete(root -> left, root -> data);
        }

        else{


        }
    }

    return root;
};
