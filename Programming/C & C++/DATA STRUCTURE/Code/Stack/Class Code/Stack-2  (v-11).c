#include<stdio.h>
#include<stdlib.h>

struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};


struct ArrayStack* createStack(int cap)
{
    struct ArrayStack *stack;
    stack=(struct ArrayStack*) malloc(sizeof(struct ArrayStack));
    stack->top=-1;
    stack->capacity=4;
    stack->array=(int*) malloc(sizeof (int) * stack->capacity);

    return stack;
};


int isFull(struct ArrayStack *stack)
{
    if(stack->top==stack->capacity-1)
        return 1;
    else
        return 0;
}


int isEmpty(struct ArrayStack *stack)
{
    if(stack->top==-1)
        return 1;
    else
        return 0;
}


void push(struct ArrayStack *stack, int item)
{
    if(isFull(stack)){
        printf("Stack is full.\n");
        return;
    }

    stack->top++;
    stack->array[stack->top]=item;

}


int pop (struct ArrayStack *stack)
{
    int item;
    if(isEmpty(stack)){
        printf("Stack is Empty.");
        return -1;
    }

    item=stack->array[stack->top];
    stack->top--;
    return item;
}


int main()
{
    int ch,item;
    struct ArrayStack *stack;
    stack=createStack(4);

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
                printf("Poped value is : %d\n",item);
            break;

        case 3:
            exit(0);

        default:
            printf("\nWrong input.\n");
        }
    }
}
