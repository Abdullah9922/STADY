#include<stdio.h>
#include<stdlib.h>

struct array_stack
{
    int top;
    int capacity;
    int *array_link;
};

struct array_stack *stack=NULL;

void createStack()
{
    stack=(struct array_stack*) malloc(sizeof(struct array_stack));
    stack->top=-1;
    stack->capacity=4;
    stack->array_link=(int*) malloc(sizeof(int) * stack->capacity);
}


int isFull()
{
    if(stack->top==stack->capacity-1)
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


void push(int item)
{
    if(isFull()){
        printf("Stack is Full.\n\n");
        return;
    }
    stack->top++;
    stack->array_link[stack->top]=item;
}


int pop()
{
    int item;
    if(isEmpty()){
        printf("Stack is Empty.\n");
        return -1;
    }
    item=stack->array_link[stack->top];
    stack->top--;
    return item;
}


int main()
{
    int ch,item;
    createStack();

    while(1){
        printf("1. Push item.\n");
        printf("2. Pop item.\n");
        printf("3. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("\nEnter a number : ");
                scanf("%d",&item);
                push(item);
                break;

            case 2:
                item=pop();
                if(item!=-1)
                    printf("\nPoped item is : %d\n",item);
                break;

            case 3:
                printf("\n\nBYE BYE\n\n");
                exit(0);

            default:
                printf("\nWrong input.\n");
        }
    }
}
