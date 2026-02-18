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
    struct node *temp,*temp2;

    start=createNode();

    printf("Input data for node 1: ");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Memory can not be allocated.");

    else{
        temp=start;

        for(int i=2;i<=n;i++){
            temp2=createNode();

            printf("input data for node %d: ",i);
            scanf("%d",&temp2->info);
            temp2->link=NULL;

            temp->link=temp2;
            temp=temp->link;
        }
    }
}


void displayList()
{
    struct node *temp;

    if(start==NULL)
        printf("List is empty.");

    else{
        temp=start;

        printf("Data entered in the list are : \n");
        while(temp!=NULL){
            printf("Data = %d\n",temp->info);
            temp=temp->link;
        }
    }
}


struct node* revList()
{
    struct node *temp,*temp2;
    temp=temp2=NULL;
    if(start==NULL)
        printf("List is empty.");

    else{
        while(start!=NULL){
            temp2=start->link;
            start->link=temp;

            temp=start;
            start=temp2;
        }
    }
    return temp;

};


void displayRevList()
{
    struct node *t;

    t=revList();

    if(t==NULL)
        printf("List is empty.");

    else{
        while(t!=NULL){
            printf("Data : %d\n",t->info);
            t=t->link;
        }
    }
}


int main()
{
    int n;
    printf("Input the number of node : ");
    scanf("%d",&n);

    createNodeList(n);

    displayList();

    displayRevList();

    return 0;
}
