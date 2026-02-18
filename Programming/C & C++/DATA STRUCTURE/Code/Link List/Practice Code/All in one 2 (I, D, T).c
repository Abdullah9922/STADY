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
    printf("Input data for node 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Memory can not be allocate.");

    else{
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
    int p,temp;
    struct node *t,*t1,*t2;

    t=createNode();
    printf("\nInput the value for insertion: ");
    scanf("%d",&t->info);
    t->link=NULL;

    printf("\nInput the position for insertion:");
    scanf("%d",&p);

    if(start==NULL)
        start=t;

    else{
        t1=start;
        for(int i=1;i<p;i++){
            t2=t1;
            t1=t1->link;
            if(t1==NULL){
                printf("Position is out of the range.\n");
                break;
            }
        }

        t2->link=t;
        t->link=t1;
    }
    printf("Insertion Complete.\n");
    printf("If you want to see the new List press 1: ");
    scanf("%d",&temp);

    if(temp==1){
        printf("New list before insertion:\n");
        displayList();
    }
}


void deletion()
{
    int p,temp;
    struct node *t1,*t2;

    if(start==NULL)
        printf("List is empty.");

    printf("\nInput the node Number you want to delete : ");
    scanf("%d",&p);

    t1=start;
    for(int i=1;i<p;i++){
        t2=t1;
        t1=t1->link;
        if(t1==NULL){
            printf("Position is out of the range.");
            break;
        }
    }

    t2->link=t1->link;
    free(t1);

    printf("Deletion Complete.");

    printf("\nIf you want to see the new List press 1: ");
    scanf("%d",&temp);

    if(temp==1){
        printf("New list before Deletion:\n");
        displayList();
    }
}


int menu()
{
    int ch;
    printf("\n1. Create node list.");
    printf("\n2. Delete from the list.");
    printf("\n3. Insert to the list.");
    printf("\n4. View list.");
    printf("\n5. Exit.");
    printf("\n\nEnter your choice: ");
    scanf("%d",&ch);
    return ch;
}

int main()
{
    int n;
    while(1){
        switch(menu()){
        case 1:
            printf("\nInput the number of nodes: ");
            scanf("%d",&n);
            createNodeList(n);
            break;

        case 2:
            deletion();
            break;

        case 3:
            insertion();
            break;

        case 4:
            printf("\nData entered in the list:\n");
            displayList();
            break;

        case 5:
            exit(0);

        default:
            printf("\nInvalid choice.\n");
        }
    }
}
