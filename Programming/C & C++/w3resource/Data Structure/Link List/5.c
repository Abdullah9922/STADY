#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *start = NULL;

struct node* createNode()
{
    struct node *n;
    n=(struct node*) malloc(sizeof(struct node));
    return n;
};


void createNodeList(int n)
{
    int i;
    struct node *t1,*t2;

    start=createNode();

    printf("Input data for node 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Memory can not be allocated.");

    else{
        t1=start;
        for(i=2;i<=n;i++){
            t2=createNode();

            printf("Input data for node %d : ",i);
            scanf("%d",&t2->info);
            t2->link=NULL;

            t1->link=t2;
            t1=t1->link;

        }
    }
}


void displayList()
{
    struct node *t;

    if(start==NULL)
        printf("List is empty.");

    else{
        t=start;
        while(t!=NULL){
            printf("Data = %d\n",t->info);
            t=t->link;
        }
    }
}


void insertAsLast()
{
    struct node *t1,*t2;

    t2=createNode();
    printf("Input data to insert at the end of the list : ");
    scanf("%d",&t2->info);
    t2->link=NULL;

    if(start==NULL)
        start=t2;

    else{
        t1=start;
        while(t1->link!=NULL)
            t1=t1->link;
        t1->link=t2;
    }
}


int main()
{
    int n;
    printf("Input the number of nodes : ");
    scanf("%d",&n);

    createNodeList(n);

    printf("Data entered in the list are: \n");
    displayList();

    insertAsLast();
    printf("Data after insertion in the list are:\n");
    displayList();

    return 0;
}
