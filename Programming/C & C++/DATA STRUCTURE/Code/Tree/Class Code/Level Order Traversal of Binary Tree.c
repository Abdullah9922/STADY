#include<stdio.h>


struct levelOrder(struct node *root)
{
    struct node *temp;
    struct Queue *Q = CreateQueue();

    if(!root) return;

    enQueue(Q,root);
    while(!isEmptyQueue(Q)){
        temp = deQueue(Q);
        printf("%d ",temp -> info);

        if(temp -> left)
            enQueue(Q,temp -> left);

        if(temp -> right)
            enQueue(Q,temp -> right);
    }
    deleteQueue(Q);
};
