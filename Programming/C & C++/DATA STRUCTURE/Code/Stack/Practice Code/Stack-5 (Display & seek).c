#include<stdio.h>
#include<stdlib.h>

int array_stack[5];
int top=-1;

int isFull()
{
    if(top==5)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void push(int item)
{
    if(isFull())
        printf("\nStack is Full.\n");
    else{
        top++;
        array_stack[top]=item;
    }
}

int pop()
{
    if(isEmpty()){
        printf("\nStack is Empty.\n");
        return -1;
    }
    else{
        int item = array_stack[top];
        top--;
        return item;
    }
}

void display()
{
    if(isEmpty())
        printf("\nStack is Empty.\n");
    else{
        for(int i=top;i>=0;i--)
            printf("%d  ",array_stack[i]);
        printf("\n");
    }
}

int seek()
{
    if(isEmpty())
        printf("\nStack is Full.\n");
    else{
        printf("\nTop element of the array is : %d\n",array_stack[top]);
    }
}


int main()
{
    int ch,item;
    while(1){
        printf("\n1. Push.\n");
        printf("2. Pop.\n");
        printf("3. Display.\n");
        printf("4. Seek.\n");
        printf("5. Exit.\n");
        printf("\nEnter a number : ");
        scanf("%d",&ch);

        switch(ch){
        case 1:
            printf("\nInput item : ");
            scanf("%d",&item);
            push(item);
            break;

        case 2:
            item=pop();
            if(item!=-1)
                printf("\nPoped item is : %d\n",item);
            break;

        case 3:
            printf("\nData entered in the stack :\n");
            display();
            break;

        case 4:
            seek();
            break;

        case 5:
            exit(0);

        default:
            printf("\nWrong input.\n");
            break;
        }
    }
}
