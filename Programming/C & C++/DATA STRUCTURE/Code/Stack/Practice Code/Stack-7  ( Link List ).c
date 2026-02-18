#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *link;
};


struct node *top = NULL;


struct node* createNode()
{
    struct node *t;
    t = (struct node*) malloc (sizeof(struct node));
    return t;
};


void push()
{
    if(top == NULL){

        top = createNode();
        printf("Enter a number : ");
        scanf("%d",&top->data);
        top->link = NULL;

    }

    else{
        struct node *temp;
        temp = createNode();

        printf("Enter a number : ");
        scanf("%d",&temp->data);
        temp->link = NULL;

        temp->link = top;
        top = temp;
    }
}


void pop()
{
    if(top == NULL){
        printf("\nStack is Empty.\n");
        return;
    }

    struct node *temp;
    temp=top;
    top=top->link;

    printf("Your poped item is : %d.\n",temp->data);
    free(temp);
}


void display()
{
    if(top == NULL){
        printf("\nStack is Empty.\n");
        return;
    }

    struct node *temp;
    temp = top;

    printf("Data entered in the Stack :\n");
    while(temp != NULL){
        printf("Data = %d\n",temp->data);
        temp = temp->link;
    }
}


void search()
{
    if(top == NULL){
        printf("\nStack is Empty.\n");
        return;
    }

    int n,count=1;
    struct node *temp;

    printf("\nEnter a number for Search : ");
    scanf("%d",&n);

    temp = top;
    while(temp->link != NULL){
        if(temp->data == n){
            printf("\nData found in node : %d\n",count);
            return;
        }
        count++;
        temp=temp->link;
    }
    printf("\nData do not found in the Stack.\n");
}


void seek()
{
    if(top == NULL){
        printf("\nStack is Empty.\n");
        return;
    }

    printf("\nTop element of stack is : %d\n",top->data);
}


void deleteStack()
{
    if(top == NULL){
        printf("\nStack is Empty.\n");
        return;
    }

    free(top);
    top = NULL;
    printf("\nAll data successfully delete.\n");

}


int menu()
{
    int ch;
    printf("\n1. Push.\n");
    printf("2. Pop.\n");
    printf("3. Display.\n");
    printf("4. Search.\n");
    printf("5. Peek.\n");
    printf("6. Delete All Data.\n");
    printf("7. Exit.\n");
    printf("\nEnter Your choice --> ");
    scanf("%d",&ch);

    return ch;
}



int main()
{
    while(1){
        switch(menu()){
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            search();
            break;

        case 5:
            seek();
            break;

        case 6:
            deleteStack();
            break;

        case 7:
            printf("\n\n\tBYE BYE\n\tSEE YOU SOON\n\n");
            exit(0);

        default:
            printf("\nWrong Input\n");
            break;
        }
    }
}
