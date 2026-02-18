#include<stdio.h>
#include<stdlib.h>

struct dym_array_stack
{
    int top;
    int size;
    int *array_link;
};

struct dym_array_stack *stack = NULL;

void createStack()
{
    if(stack == NULL){
        stack = (struct dym_array_stack*) malloc (sizeof(struct dym_array_stack));
        stack->top=-1;
        printf("\nEnter stack size : ");
        scanf("%d",&stack->size);
        stack->array_link = (int*) malloc (stack->size * sizeof(int));
    }
    else
        printf("\nStack of size %d already exists\n",stack->size);
}


int isFull()
{
    if(stack->top==stack->size-1)
        return 1;
    else
        return 0;
}


int isEmpty()
{
    if(stack->top==-1)
        return 1;
    else
        return 0;
}


void push()
{
    int item;
    if(stack==NULL)
        printf("\nStack is not exist\n");

    else if(isFull())
        printf("\nStack is Full.\n");

    else{
        printf("\nEnter item for push : ");
        scanf("%d",&item);
        stack->top++;
        stack->array_link[stack->top]=item;
    }
}


int pop()
{
    if(stack==NULL)
        printf("\nStack is not exist\n");

    else if(isEmpty())
        printf("\nStack is Empty.\n");

    else{
        int item=stack->array_link[stack->top];
        stack->top--;
        printf("\nPoped item is : %d\n",item);
    }
}


int display_stack()
{
    if(stack==NULL)
        printf("\nStack is not exist\n");

    else if(isEmpty())
        printf("\nStack is Empty.\n");

    else{
        printf("Data entered in the stack : ");
        for(int i=stack->top;i>=0;i--)
            printf("%d  ",stack->array_link[i]);
        printf("\n");
    }
}


int seek()
{
    if(stack==NULL)
        printf("\nStack is not exist\n");

    else if(isEmpty())
        printf("\nStack is Empty.\n");

    else{
        int item=stack->array_link[stack->top];
        printf("\nTop item of stack : %d\n",item);
    }
}


void delete_stack()
{
    if(stack==NULL)
        printf("\nStack is not exist.\n");
    else{
        free(stack);
        stack=NULL;
        printf("\nStack is delete successfuly\n");
    }
}


int main()
{
    int ch , item;

    while(1){
        printf("\n1. Create Stack\n");
        printf("2. Display\n");
        printf("3. Push\n");
        printf("4. Pop\n");
        printf("5. Seek\n");
        printf("6. Delete Stack\n");
        printf("7. Exit\n");
        printf("\nEnter Your choice : ");
        scanf("%d",&ch);

        switch(ch){
        case 1:
            createStack();
            break;

        case 2:
            display_stack();
            break;

        case 3:
            push();
            break;

        case 4:
            pop();
            break;

        case 5:
            seek();
            break;

        case 6:
            delete_stack();
            break;

        case 7:
            printf("\n\tBYE BYE\n");
            exit (0);

        default:
            printf("\nWrong Input\n");
            break;
        }
    }
}
