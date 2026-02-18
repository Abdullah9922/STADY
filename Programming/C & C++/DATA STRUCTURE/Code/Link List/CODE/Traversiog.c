#include<stdio.h>


struct node
{
    int info;
    struct node *link;
};

struct node *start=NULL;

struct node* createNode()
{
    struct node *n;
    n=(struct node*) malloc(sizeof(struct node));
    return n;
};


void viewNode()
{
    struct node *t;

    if(start == NULL)
        printf("List is empty.");

    else{
        t=start;
        while(t->link!=NULL){
            printf("%d ",t->info);
            t=t->link;
        }
    }

}
