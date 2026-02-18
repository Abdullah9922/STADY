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
    struct node *t1,*t2;

    start=createNode();
    if(start==NULL){
        printf("Memory can not be allocate.");
        return;
    }

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
            printf("Data = %d\n",t->info);
            t=t->link;
        }
    }
}


void insertion()
{
    int p;
    struct node *t,*t1,*t2;

    t=createNode();
    printf("Input value for insertion: ");
    scanf("%d",&t->info);
    t->link=NULL;

    printf("Input the position : ");
    scanf("%d",&p);

    if(start==NULL)
        start=t;

    else{
        t1=start;
        for(int i=1;i<p;i++){
            t2=t1;
            t1=t1->link;

            if(t1==NULL){
                printf("Position is out of the range.");
                return;
            }
        }
        t2->link=t;
        t->link=t1;
    }
}


void deletion()
{
    int p;
    struct node *t1,*t2;

    printf("\nInput the node number for deletion : ");
    scanf("%d",&p);

    if(start==NULL)
        printf("List is empty.");

    else{
        t1=start;
        for(int i=1;i<p;i++){
            t2=t1;
            t1=t1->link;

            if(t1==NULL){
                printf("Position is out of the range.");
                return;
            }
        }
        t2->link=t1->link;
        free(t1);
    }
}


int menu()
{
    int ch;

    printf("\n1. Create Node List.");
    printf("\n2. View list.");
    printf("\n3. Insert Node.");
    printf("\n4. Delete Node.");
    printf("\n5. Exit.\n");
    printf("Enter your choice: ");

    scanf("%d",&ch);
    return ch;
}


int main()
{
    int n;
    while(1){
        switch(menu()){
        case 1:
            printf("\nInput the Node number : ");
            scanf("%d",&n);
            createNodeList(n);
            break;

        case 2:
            printf("\nAll data from all nodes:\n");
            displayList();
            break;

        case 3:
            insertion();
            break;

        case 4:
            deletion();
            break;

        case 5:
            exit(0);

        default:
            printf("\nWrong input.\n");
        }
    }
}
