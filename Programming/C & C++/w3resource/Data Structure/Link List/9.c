#include<stdio.h>
#include<stdlib.h>

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

void createNodeList(int n)
{
    struct node *t1,*t2;

    start = createNode();
    printf("Input data for node 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Memory can not be allocate.");

    else{
        t1=start;
        for(int i=2;i<=n;i++){
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


void deletion()
{
    struct node *t1,*t2;

    if(start==NULL)
        printf("List is empty.");

    else{
        t1=start;
        while(t1->link!=NULL){
            t2=t1;
            t1=t1->link;
        }
        t2->link=NULL;
        free(t1);
    }
}


int main()
{
    int n;
    printf("Input the number of node : ");
    scanf("%d",&n);
    createNodeList(n);

    printf("Data entered in the list are :\n");
    displayList();

    printf("The new list after deletion the last node are : \n");
    deletion();
    displayList();

    return 0;
}
