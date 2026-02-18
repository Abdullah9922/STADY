#include<stdio.h>


struct node* Delete(struct node *root,int data)
{
    struct node *temp;

    if(root == NULL)
        printf("No such element in the tree.\n");

    else if(data < root -> data)
        root -> left = Delete(root -> left,data);

    else if(data > root -> data)
        root -> right = Delete(root -> right,data);


    else{

        if(root -> left && root -> right){
            temp = FindMax(root -> left);
            root -> data = temp -> data;
            root -> left = Delete(root -> left,root -> data);
        }

        else{
            temp = root;

            if(root -> left == NULL)
                root = root -> right;

            if(root -> right == NULL)
                root = root -> left;

            free(temp);
        }
        return root;
    }

};
