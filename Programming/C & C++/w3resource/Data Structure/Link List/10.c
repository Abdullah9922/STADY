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
    n=(struct node*) malloc (sizeof(struct node));
    return n;
};

void createNodeList(int n)
{
    struct node *t1,*t2;

    start=createNode();
    if(start==NULL)
        printf("Memory can not be allocated.");

    printf("Input data for node 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;


    t1=start;
    for(int i=2;i<=n;i++){
        t2=createNode();

        if(t2==NULL){
            printf("Memory can not be allocated.");
            return;
        }
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
            printf("Data = %d\n",t->info);
            t=t->link;
        }
    }
}


void search()
{
    int n,count = 0;
    struct node *t;

    if(start==NULL)
        printf("List is empty.");

    else{
        t=start;
        printf("Input the element to be searched : ");
        scanf("%d",&n);

        for(int i=1;t!=NULL;i++){
            if(t->info==n){
                printf("Element founf at node -> %d\n",i);
                count++;
            }
            t=t->link;
        }
        if(count==0)
            printf("The element is not found.");
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

    search();

    return 0;
}
