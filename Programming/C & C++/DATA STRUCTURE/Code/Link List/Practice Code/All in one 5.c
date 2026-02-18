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
    struct node *t1,*t2;

    start=createNode();
    printf("Input value for node 1 : ");
    scanf("%d",&start->info);
    start->link=NULL;

    if(start==NULL)
        printf("Meomory can not be allocated.\n");
    else{
        t1=start;
        for(int i=2;i<=n;i++){
            t2=createNode();
            printf("Input value for node %d : ",i);
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
        printf("List is empty.\n");

    else{
        t=start;
        while(t!=NULL){
            printf("Data : %d\n",t->info);
            t=t->link;
        }
    }
}


void insertion()
{
    int pos;
    struct node *t,*t1,*t2;

    t=createNode();
    printf("Input the value for insert : ");
    scanf("%d",&t->info);
    t->link=NULL;

    printf("Input the position : ");
    scanf("%d",&pos);

    t1=start;
    if(t1==NULL)
        t1=t;

    else{
        for(int i=1;i<pos;i++){
            t2=t1;
            t1=t1->link;
        }
        t2->link=t;
        t->link=t1;
    }
}


void deletion()
{
    int pos;
    struct node *t1,*t2;

    printf("Input the position number : ");
    scanf("%d",&pos);

    if(start==NULL)
        printf("List is empty.\n");
    else{
        t1=start;
        for(int i=1;i<pos;i++){
            t2=t1;
            t1=t1->link;

            if(t1==NULL){
                printf("Position is out of range.\n");
                return;
            }
        }
        t2->link=t1->link;
        free(t1);
    }
}


void search()
{
    struct node *t;

    int num,count=1;
    printf("Inter the value for search : ");
    scanf("%d",&num);

    if(start==NULL)
        printf("List is empty.\n");

    else{
        t=start;
        while(t!=NULL){
            if(t->info==num){
                printf("Value found in node : %d\n",count);
                return;
            }
            t=t->link;
            count++;
        }
        printf("\n The value can not found in the list.\n");
    }
}


int menu()
{
    int ch;
    printf("\n1. Create node list");
    printf("\n2. View list");
    printf("\n3. Insert value");
    printf("\n4. Delete value");
    printf("\n5. Search value");
    printf("\n6. Exit");
    printf("\n\nEnter  your choice : ");
    scanf("%d",&ch);

    return ch;
}


int main()
{
    int n;
    while(1){
        switch(menu()){
        case 1:
            printf("\nInput the node number :");
            scanf("%d",&n);
            createNodeList(n);
            break;

        case 2:
            printf("\nData entered in the list :\n");
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
            printf("\nBYE BYE\n");
            exit(0);
            break;

        default:
            printf("\nWrong input.\n");

        }
    }
}
