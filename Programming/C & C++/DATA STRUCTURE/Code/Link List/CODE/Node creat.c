#include<stdio.h>

struct node{
    int info;
    struct node *link;
};

struct node *START=NULL;


struct node* createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
};


void insertNode(x)
{
    struct node *temp , *t;
    temp=createNode();

    temp=x;
    // struct node info -> x;
    temp->link=NULL;

    if(START==NULL)
        START=temp;

    else{
        t=START;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }

//    printf("Enter a number: ");
//    scanf("%d",&temp->info);
//    temp->link=NULL;
}


int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    insertNode(x);
}
