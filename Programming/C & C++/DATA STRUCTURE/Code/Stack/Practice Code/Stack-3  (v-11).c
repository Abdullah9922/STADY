#include<stdio.h>
#include<stdlib.h>

struct array_stack
{
    int top;
    int capacity;
    int *array;
};

//struct array_stack *stack=NULL;

struct array_stack* createStack()
{
    struct array_stack *stack;
    stack=(struct array_stack *) malloc(sizeof(struct array_stack));
    stack->top=-1;
    stack->capacity=4;
    stack->array=(int*) malloc (sizeof (int) * stack->capacity);

    return stack;
};


int isFull(struct array_stack *stack)
{
    if(stack->top==stack->capacity-1)
        return 1;
    else
        return 0;
}


int isEmpty(struct array_stack *stack)
{
    if(stack->top==-1)
        return 1;
    else
        return 0;
}


void push(struct array_stack *stack,int item)
{
    //struct array_stack *stack;

    if(isFull(stack)){
        printf("Stack is full.");
        return;
    }
    stack->top++;
    stack->array[stack->top]=item;
}


int pop(struct array_stack *stack)
{
    int item;
    if(isEmpty(stack)){
        printf("Stack is empty.");
        return -1;
    }
    item=stack->array[stack->top];
    stack->top--;
    return item;
}


int main()
{
    int ch,item;
    struct array_stack *stack;
    stack=createStack();

    while(1){
        printf("\n1. Push.");
        printf("\n2. Pop.");
        printf("\n3. Exit.");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("\nEnter a number for push : ");
                scanf("%d",&item);
                push(stack,item);
                break;

            case 2:
                item=pop(stack);

                if(item!=-1)
                    printf("\nPoped item is : %d\n",item);
                break;

            case 3:
                exit(0);

            default:
                printf("\nWrong input.");

        }
    }
}
