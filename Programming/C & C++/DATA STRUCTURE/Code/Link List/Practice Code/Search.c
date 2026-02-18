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

    start=createNode();

    if(start==NULL)
        printf("Memory can not be allocate.");

    printf("Input data for node 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;

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


void displayList()
{
    struct node *t;

    if(start==NULL)
        printf("List is empty.");

    else{
        t=start;
        while(t!=NULL){
            printf("Data : %d\n",t->info);
            t=t->link;
        }
    }
}


void search()
{
    int temp;
    struct node *t;

    printf("Enter the number you want to search : ");
    scanf("%d",&temp);

    t=start;
    int count=1;
    while(t!=NULL){
        if(t->info==temp){
            printf("\nData found in the node number : %d\n",count);\
            return;
        }
        else{
            t=t->link;
            count++;
        }
    }

    printf("\nData can not find in the list.\n");
    return;
}


int main()
{
    int n;
    printf("Input the node number : ");
    scanf("%d",&n);
    createNodeList(n);

    printf("\nData entered in the list : \n");
    displayList();

    search();

    return 0;
}
