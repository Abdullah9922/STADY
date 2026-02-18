#include<stdio.h>
#include<stdlib.h>


struct node
{
    int info;
    struct node *next,*prev;
};

struct node *start = NULL;

struct node* createNode()
{
    struct node *n;
    n=(struct node*) malloc(sizeof(struct node));
    return n;
};


void insertAsFristNode()
{
    struct node *a;
    a=createNode();

    printf("Enter a number: ");
    scanf("%d",&a->info);

    a->next=NULL;
    a->prev=NULL;

    if(start==NULL)
        start=a;

    else{
        a->next=start;
        start->prev=a;
        start=a;
    }
}


void deleteFirstNode()
{
    struct node *r;

    if(start==NULL)
        printf("List is empty.");

    else{
        r=start;
        start=start->next;
        start->prev=NULL;
        free(r);
    }
}


void viewList()
{
    struct node *t;
    if(start == NULL)
        printf("List is empty.");

    else{
        t=start;
        while(t->next!=NULL){
            printf("%d ",t->info);
            t=t->next;

        }
    }
}













