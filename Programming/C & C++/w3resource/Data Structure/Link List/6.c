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
    n=(struct node*) malloc (sizeof(struct node));
    return n;
};


void createNodeList(int n)
{
    struct node *t1,*t2;

    start=createNode();

    printf("Input data for node 1 :");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Memory can not be allocated.");

    else{
        t1=start;

        for(int i=2;i<=n;i++){
            t2=createNode();

            printf("Input data for node %d :",i);
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

    if(start==NULL){
        printf("List is empty.");
        //return;
    }

    else{
        t=start;

        while(t!=NULL){
            printf("Data = %d\n",t->info);
            t=t->link;
        }
    }
}


void insertion()
{
    int p;
    struct node *t,*t2;

    t=createNode();
    printf("Input data for insert : ");
    scanf("%d",&t->info);
    t->link=NULL;

    printf("Input the position : ");
    scanf("%d",&p);


//    if(p==1){
//        t->link=start;
//        start=t;
//    }

    t2=start;
    for(int i=1;i<p-1 && t2!=NULL;i++)
        t2=t2->link;

//    if(t2==NULL){
//        printf("Position is out of range.\n");
//        free(t);
//        return;
//    }

    t->link=t2->link;
    t2->link=t;
}


int main()
{
    int n;
    printf("Input the number of nodes (3 or more) : ");
    scanf("%d",&n);

    createNodeList(n);

    printf("Data entered in the list : ");
    displayList();

    insertion();
    printf("\nIsertion completed successfully.\n");

    printf("\nThe new list are: \n");
    displayList();

    return 0;
}
