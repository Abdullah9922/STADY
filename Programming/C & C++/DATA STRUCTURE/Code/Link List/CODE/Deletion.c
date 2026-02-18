#include<stdio.h>

struct node
{
    int info;
    struct node *link;
};

struct node *start=NULL;


struct node * createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
};


void deleteNode()
{
    struct node *r;
    if(start==NULL)
        printf("List is empty.");
    else{
        r=start;
        start = start -> link;
        free(r);
    }

}
