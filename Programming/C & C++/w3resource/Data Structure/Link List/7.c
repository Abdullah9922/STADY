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
    struct node *t,*t2;

    start=createNode();
    printf("Input data for node 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Memory can not be allocate.");
    else{
        t=start;
        for(int i=2;i<=n;i++){
            t2=createNode();

            printf("Input data for node %d : ",i);
            scanf("%d",&t2->info);
            t2->link=NULL;

            t->link=t2;
            t=t->link;
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
    struct node *t,*t2;


    if(start==NULL)
        printf("List is empty.");

    else{
        t=start;
        t2=t->link;
        start=t2;
        free(t);
    }
}


int main()
{
    int n;
    printf("Input the number of nodes : ");
    scanf("%d",&n);

    createNodeList(n);

    printf("Data entered in the list are : \n");
    displayList();

    printf("Data deletion of first node : \n");
    deletion();
    displayList();

    return 0;
}
