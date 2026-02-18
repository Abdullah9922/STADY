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


void createNodeList()
{
    int n;
    struct node *t1,*t2;

    start=createNode();
    if(start==NULL)
        printf("Memory can not be allocate.");

    printf("Input the node number : ");
    scanf("%d",&n);

    printf("Input value for node 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;

    t1=start;
    for(int i=2;i<=n;i++){
        t2=createNode();

        printf("Input value for node %d : ",i);
        scanf("%d",&t2->info);
        t2->link=NULL;

        t1->link=t2;
        t1=t1->link;
    }
    printf("\n\n");
}


void displayList()
{
    struct node *t;

    if(start==NULL){
        printf("List is empty.");
        printf("\n\n");
        return;
    }

    else{
        t=start;
        while(t!=NULL){
            printf("Data : %d\n",t->info);
            t=t->link;
        }
    }
    printf("\n\n");
}


void insertion()
{
    int p;
    struct node *t1, *t2, *t3;

    t1=createNode();
    printf("Input the value for insert : ");
    scanf("%d",&t1->info);
    t1->link=NULL;

    printf("Input the position : ");
    scanf("%d",&p);

    if(start==NULL){
        start=t1;
        printf("Insert is successful.");
        printf("\n\n");
        return;
    }

    else{
        t2=start;
        for(int i=1;i<p;i++){
            t3=t2;
            t2=t2->link;

            if(t2==NULL){
                printf("Position is out of the range\n.");
                return;
            }
        }
        t3->link=t1;
        t1->link=t2;
    }
    printf("Insert is successful.");
    printf("\n\n");
}


void deletion()
{
    int p;
    struct node *t1,*t2;

    if(start==NULL){
        printf("List is empty.\n");
        printf("\n\n");
        return;
    }

    printf("Enter position for deletion : ");
    scanf("%d",&p);

    t1=start;
    for(int i=1;i<p;i++){
        t2=t1;
        t1=t1->link;

        if(t1==NULL){
            printf("Position is out of the range.\n");
            printf("\n\n");
            return;
        }
    }

    t2->link=t1->link;
    free(t1);
    printf("Deletion successful.");
    printf("\n\n");
}


void search()
{
    int s;
    struct node *t1;

    if(start==NULL){
        printf("List is empty.");
        printf("\n\n");
        return;
    }

    printf("\nInput the data you want to search : ");
    scanf("%d",&s);

    t1=start;
    int count=1;
    while(t1!=NULL){
        if(t1->info==s){
            printf("Data found in node number : %d\n",count);
            printf("\n\n");
            return;
        }
        else{
            t1=t1->link;
            count++;
        }
    }
    printf("Data is not in the list.\n");
    printf("\n\n");
}


int menu()
{
    int ch;

    printf("1. Create node list.\n");
    printf("2. View list.\n");
    printf("3. Insert data in the list.\n");
    printf("4. Delete data from the list.\n");
    printf("5. Search data in the list.\n");
    printf("6. Exit\n");

    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    printf("\n\n");
    return ch;
}


int main()
{
    while(1){
        switch(menu()){

        case 1:
            createNodeList();
            break;

        case 2:
            printf("\nData entered in the list : \n");
            displayList();
            break;

        case 3:
            insertion();
            break;

        case 4:
            deletion();
            break;

        case 5:
            search();
            break;

        case 6:
            exit(0);

        default:
            printf("\nWrong input.\n");

        }
    }
}
