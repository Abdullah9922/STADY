#include<stdio.h>

struct node{
    int info;
    struct node *link;
};

struct node *start=NULL;


struct node * createNode()
{
    struct node *n;
    n=(struct node *) malloc(sizeof (struct node));
    return n;
};


void insertNode()
{
    struct node *temp,*t;
    temp=createNode();

    printf("Enter a number: ");
    scanf("%d",&temp->info);
    temp->link=NULL;

    if(start==NULL)
        start=temp;
    else{
        t=start;
        while(t->link!=NULL)
            t=t->lnik;
        t->link=temp;
    }
}
