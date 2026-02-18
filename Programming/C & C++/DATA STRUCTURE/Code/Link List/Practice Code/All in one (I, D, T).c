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


void insertion()
{
    struct node *temp, *i;
    temp=createNode();

    printf("Enter a number: ");
    scanf("%d",&temp->info);
    temp->link=NULL;

    if(start==NULL)
        start = temp;

    else{i=start;
        while(i->link!=NULL)
            i=i->link;
        i->link=temp;
    }
}


void deleteNode()
{
    struct node *d;

    if(start == NULL)
        printf("List is empty.");

    else{
        d=start;
        start=start->link;
        free(d);
    }
}


void viewList()
{
    struct node *t;

    if(start==NULL)
        printf("List is empty.");
    else{
        t=start;
        while(t->link!=NULL){
            printf("%d ",t->info);
            t=t->link;
        }
    }
}


int menu()
{
    int ch;
    printf("\n1. Add value to the list");
    printf("\n2. Delete value from the list");
    printf("\n3. View list");
    printf("\n4. Exit");
    printf("\n\nEnter Your Choice");
    scanf("%d",&ch);
    return ch;
}


int main()
{
    while(1){
        switch(menu()){
        case 1:
            insertion();
            break;

        case 2:
            deleteNode();
            break;

        case 3:
            viewList();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice.");
        }
    }
}



