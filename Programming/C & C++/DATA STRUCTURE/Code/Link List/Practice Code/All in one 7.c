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
        printf("Memory can not be allocated.\n");

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
            printf("Data = %d\n",t->info);
            t=t->link;
        }
    }
}


void insertion()
{
    int pos;
    struct node *t,*t1,*t2;

    t=createNode();
    printf("Input value for insert : ");
    scanf("%d",&t->info);
    t->link=NULL;

    printf("Input position to insert : ");
    scanf("%d",&pos);

    if(start==NULL)
        start=t;

    else{
        t1=start;
        for(int i=1;i<pos;i++){
            t2=t1;
            t1=t1->link;
            if(t1==NULL){
                printf("Position is out of the range.\n");
                return;
            }
        }
        t2->link=t;
        t->link=t1;
    }
}


void deletion()
{
    int pos;
    struct node *t1,*t2;

    printf("Input the position for deletion : ");
    scanf("%d",&pos);

    if(start==NULL)
        printf("List is Empty.\n");

    else{
        t1=start;
        for(int i=1;i<pos;i++){
            t2=t1;
            t1=t1->link;
            if(t1==NULL){
                printf("Position is out of the range.\n");
                return;
            }
        }
        t2->link=t1->link;
        free(t1);
    }
}


void search()
{
    int n;
    struct node *t;

    printf("Input the number you want to search : ");
    scanf("%d",&n);

    if(start==NULL)
        printf("List is empty.\n");

    else{
        t=start;
        int count=1;
        while(t!=NULL){
            if(t->info==n){
                printf("Value found in the node : %d\n",count);
                return;
            }
            else{
                count++;
                t=t->link;
            }
        }
        printf("Value not in the list.\n");
    }
}


int menu()
{
    int ch;
    printf("\n1. Create Node List.");
    printf("\n2. Display List.");
    printf("\n3. Insert value.");
    printf("\n4. Delete value.");
    printf("\n5. Search value.");
    printf("\n6. Exit.");

    printf("\n\nEnter your choice : ");
    scanf("%d",&ch);
    return ch;
}


int main()
{
    int item;
    while(1){
        switch(menu()){
        case 1:
            printf("\nInput the node number : ");
            scanf("%d",&item);
            createNodeList(item);
            break;

        case 2:
            printf("Data entered in the list : \n");
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
            exit (0);

        default:
            printf("\nWrong input.\n");
        }
    }
}
