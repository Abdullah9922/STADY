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

    printf("Enter value for node number 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Memory is can not be allocet.");
    else{
        temp=start;
        for(int i=2;i<=n;i++){
            temp2=createNode();

            printf("Enter value for node number %d : ",i);
            scanf("%d",&temp2->info);
            temp2->link=NULL;

            temp->link=temp2;
            temp=temp->link;
        }
    }
}


void displayList()
{
    int i=1;
    struct node *temp;

    if(start == NULL)
        printf("List is empty.");

    else{
        temp=start;

        while(temp!=NULL){
            printf("Data number %d = %d\n",i++,temp->info);
            temp=temp->link;

        }
    }
}



struct node* revList()
{
    struct node *t1,*t2;

    t1=t2=NULL;

    while(start!=NULL){
        t2=start->link;
        start->link=t1;
        t1=start;
        start=t2;
    }

    return t1;
};


void printRevList()
{
    int i=1;
    struct node *temp;
    temp=revList();

    if(temp==NULL)
        printf("List is empty.");

    else{
        while(temp!=NULL){
            printf("Data number %d is = %d\n",i++,temp->info);
            temp=temp->link;
        }
    }
}


int main()
{
    int n;
    printf("Enter the node number: ");
    scanf("%d",&n);

    printf("Enter value for nodes: \n");
    createNodeList(n);

    printf("Your created node list is: \n");
    displayList();

    printf("Reverse Form of the list is: \n");
    printRevList();

    return 0;
}
