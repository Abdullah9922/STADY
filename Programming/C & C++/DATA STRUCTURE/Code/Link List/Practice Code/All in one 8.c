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
    struct node *t;
    t=(struct node*) malloc (sizeof(struct node));
    return t;
};

void createNodeList()
{
    if(start!=NULL){
        printf("\nList is already exist\n");
        return;
    }
    else{
        int n;
        printf("Enter amount of node : ");
        scanf("%d",&n);

        start=createNode();
        printf("\nInput value for node 1: ");
        scanf("%d",&start->info);
        start->link=NULL;

        struct node *t1,*t2;
        t1=start;
        for(int i=2;i<=n;i++){
            t2=createNode();
            printf("Input value for node %d: ",i);
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
        printf("\nList is empty\n");
    else{
        t=start;
        printf("\nData entered in the list.\n");
        while(t!=NULL){
            printf("Data = %d\n",t->info);
            t=t->link;
        }
    }
}


void insertion()
{
    struct node *t,*t1,*t2;

    t=createNode();
    printf("\nInput value for insert : ");
    scanf("%d",&t->info);
    t->link=NULL;

    if(start==NULL){
        start=t;
        printf("\nInsertion successful\n");
    }
    else{
        int pos;
        printf("Inter position for insert : ");
        scanf("%d",&pos);

        t1=start;
        for(int i=1;i<pos;i++){
            t2=t1;
            t1=t1->link;
            if(t1==NULL){
                printf("Position is out of the range.\n");
                return;
            }
        }
        t->link=t1;
        t2->link=t;
        printf("\nInsertion successful\n");
    }
}


void deletion()
{
    struct node *t1,*t2;
    if(start==NULL){
        printf("\nList is empty\n");
        return ;
    }

    int pos;
    printf("Input position for delete node : ");
    scanf("%d",&pos);

    if(pos==1){
        struct node *t3;
        t3=start;
        free(t3);
        start=NULL;
        printf("\nDeletion successful\n");
        return;
    }

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
    printf("\nDeletion successful\n");
}


void search()
{
    if(start==NULL){
        printf("\nList is empty\n");
        return ;
    }
    else{
        int n,count=1;
        printf("Input the value for search : ");
        scanf("%d",&n);

        struct node *t;
        t=start;
        while(t!=NULL){
            if(t->info==n){
                printf("\nValue found in the node : %d\n",count);
                return;
            }
            t=t->link;
            count++;
        }
        printf("\nThe value not in the list.\n");
    }
}


void deleteList()
{
    if(start==NULL){
        printf("\nList is empty\n");
        return ;
    }
    else{
        free(start);
        start=NULL;
        printf("Full list is delete successfully\n");
    }
}


int menu()
{
    int ch;
    printf("\n1. Create Node List.");
    printf("\n2. Display List.");
    printf("\n3. Insert Value.");
    printf("\n4. Delete Value.");
    printf("\n5. Search Value.");
    printf("\n6. Delete Full List.");
    printf("\n7. Exit.");

    printf("\n\nEnter your choice : ");
    scanf("%d",&ch);
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
            deleteList();
            break;

        case 7:
            printf("\n\n\tBYE BYE\n\n");
            exit(0);

        default:
            printf("\nWrong input.\n");
        }
    }
}
