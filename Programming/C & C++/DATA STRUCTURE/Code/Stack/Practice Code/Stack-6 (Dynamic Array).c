#include<stdio.h>
#include<stdlib.h>

struct dym_array_stack
{
    int top;
    int capacity;
    int *array_link;
};


struct dym_array_stack *stack=NULL;


void createStack(int n)
{
    stack=(struct dym_array_stack*) malloc (sizeof(struct dym_array_stack));
    stack->top=-1;
    stack->capacity=n;
    stack->array_link = (int*) malloc(stack->capacity * sizeof (int));
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


void display_stack()
{
    if(isEmpty())
        printf("\nStack is Empty.\n");
    else{
        for(int i=stack->top;i>=0;i--)
            printf("%d  ",stack->array_link[i]);
        printf("\n");
    }
}


void push(int item)
{
    if(isFull())
        printf("\nStack is Full.\n");
    else{
        stack->top++;
        stack->array_link[stack->top]=item;
    }
}


int pop()
{
    if(isEmpty()){
        printf("\nStack is Empty.\n");
        return -1;
    }
    else{
        int item=stack->array_link[stack->top];
        stack->top--;
        return item;
    }
}


int seek()
{
    if(isEmpty()){
        printf("\nStack is Empty.\n");
        return -1;
    }
    else{
        int item=stack->array_link[stack->top];
        return item;
    }
}


int main()
{
    int ch,item,n;
    printf("Enter the capacity of the array : ");
    scanf("%d",&n);
    createStack(n);

    while(1){
        printf("\n1. Push.");
        printf("\n2. Pop.");
        printf("\n3. Display.");
        printf("\n4. Seek.");
        printf("\n5. Exit.");
        printf("\n\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch){
        case 1:
            printf("\nEnter a number :- ");
            scanf("%d",&item);
            push(item);
            break;

        case 2:
            item=pop();
            if(item!=-1)
                printf("\nPoped item is : %d\n",item);
            break;

        case 3:
            printf("\nData entered in the stack : ");
            display_stack();
            break;

        case 4:
            item=seek();
            if(item!=-1)
                printf("\nValue of the top index is : %d\n",item);
            break;

        case 5:
            printf("\n\n\tBYE BYE\n\n");
            exit(0);

        default:
            printf("\nWrong Input.\n");
            break;

        }
    }
}
