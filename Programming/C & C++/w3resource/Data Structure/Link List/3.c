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
    struct node *temp,*temp2;

    start=createNode();
    printf("Enter value number 1: ");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Memory is can not be allocated.");

    else{
        temp=start;
        for(int i=2;i<=n;i++){

            temp2=createNode();
            printf("Enter value number %d: ",i);
            scanf("%d",&temp2->info);
            temp2->link=NULL;

            temp->link=temp2;
            temp=temp->link;
        }
    }
}


int displayList()
{
    int cont=0;
    struct node *temp;

    if(start==NULL)
        printf("List is empty.");

    else{
        temp=start;
        while(temp!=NULL){
            printf("Data = %d\n",temp->info);
            temp=temp->link;
            cont++;
        }
    }
    return cont;
}



int main()
{
    int n,x;
    printf("Input the number of nodes: ");
    scanf("%d",&n);

    createNodeList(n);

    printf("Data entered in the list are: \n");
    x=displayList();

    printf("\nTotal number of nodes = %d",x);
}
