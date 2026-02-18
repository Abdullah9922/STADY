#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *prev,*next;
};

struct node *start = NULL;


struct node* createNode()
{
    struct node *n;
    n=(struct node*) malloc (sizeof(struct node));
    return n;
};


void insertAsFristNode()
{
    struct node *a;
    a=createNode();

    printf("Enter a Number: ");
    scanf("%d",&a->info);

    a->next=NULL;
    a->prev=NULL;

    if(start==NULL)
        start=a;

    else{
        start->prev=a;
        a->next=start;
        start=a;
    }
}


void deleteFristNode()
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


void viewlist()
{
    struct node *t;

    if(start==NULL)
        printf("List is empty.");
    else{
        t=start;
        while(t->next!=NULL){
            printf("%d ",t->info);
            t=t->next;
        }
    }
}
