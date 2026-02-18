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


int main()
{
    int n;
    printf("Input the number of nodes: ");
    scanf("%d",&n);
    createNodeList(n);

    struct node *t;
    t=start;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=t->info;
        t=t->link;
    }
    printf("\nReturn data entered in the list as a string:\n");
    printf("The linked list: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

}
