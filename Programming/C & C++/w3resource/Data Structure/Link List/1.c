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
    n= (struct node*) malloc(sizeof(struct node));
    return n;
};



void createNodeList(int n)
{

    struct node *temp,*temp2;

    start=createNode();

    if(start==NULL)
        printf("Memory can not be allocated.");

    else{
        printf("Input data for node 1 : ");
        scanf("%d",&start->info);
        start->link=NULL;

        temp=start;

        for(int i=2;i<=n;i++){
            temp2=createNode();

            if(temp2==NULL){
                printf("Memory can not be allocated.");
                break;
            }

            else{
                printf("Input data for node %d : ",i);
                scanf("%d",&temp2->info);
                temp2->link=NULL;

                temp->link=temp2;
                temp=temp->link;
            }
        }
    }
}


void displayList()
{
    struct node *temp;

    if(start == NULL)
        printf("List is empty.");

    else{
        temp=start;
        while(temp!=NULL){
            printf("Data = %d\n",temp->info);
            temp=temp->link;
        }
    }
}


int main()
{
    int n;

    printf("\n\n Linked List : To create and display Singly Linked List:\n");
    printf("-------------------------------------------------------------\n");

    printf("Input the number of nodes: ");
    scanf("%d",&n);

    createNodeList(n);

    printf("\nData entered in the list: \n");
    displayList();

    return 0;
}
