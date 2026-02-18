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
    if(stack==NULL){
        stack=(struct dym_array_stack*) malloc (sizeof(struct dym_array_stack));
        stack->top=-1;
        printf("\nEnter the size of stack : ");
        scanf("%d",&stack->size);
        stack->array_link=(int*) malloc(stack->size * sizeof(int));
        printf("\nStack is create successfuly.\n");
    }
    else{
        printf("\nStack of size %d already exists\n",stack->size);
    }
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
    if(stack==NULL)
        printf("\nStack is not exist.\n");
    else if(isFull())
        printf("\nStack is Full.\n");
    else{
        int item;
        printf("Enter a number : ");
        scanf("%d",&item);
        stack->top++;
        stack->array_link[stack->top]=item;
    }
}


int pop()
{
    if(stack == NULL)
        printf("\nStack is not exist.\n");
    else if(isEmpty())
        printf("\nStack is Empty.\n");
    else{
        int item;
        item=stack->array_link[stack->top];
        stack->top--;
        printf("\nYour poped item is : %d\n",item);
    }
}


void display()
{
    if(stack == NULL)
        printf("\nStack is not exist.\n");
    else if(isEmpty())
        printf("\nStack is Empty.\n");
    else{
        for(int i=stack->top;i>=0;i--)
            printf("%d  ",stack->array_link[i]);
        printf("\n");
    }
}


void seek()
{
    if(stack == NULL)
        printf("\nStack is not exist.\n");
    else if(isEmpty())
        printf("\nStack is Empty.\n");
    else{
        printf("\nTop value of stack is : %d\n",stack->array_link[stack->top]);
    }
}


void delete_stack()
{
    if(stack == NULL)
        printf("\nStack is not exist.\n");
    else{
        struct dym_array_stack *temp;
        temp=stack;
        stack=NULL;
        free(temp);
        printf("\nStack is delete successfuly.\n");
    }
}


int main()
{
    int ch;
    while(1){
        printf("\n1. Create Stack.");
        printf("\n2. Display.");
        printf("\n3. Push.");
        printf("\n4. Pop.");
        printf("\n5. Seek.");
        printf("\n6. Delete Stack.");
        printf("\n7. Exit.");
        printf("\n\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch){
        case 1:
            createStack();
            break;

        case 2:
            display();
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
            exit(0);

        default:
            printf("\nWrong Input.\n");
            break;
        }
    }
}
