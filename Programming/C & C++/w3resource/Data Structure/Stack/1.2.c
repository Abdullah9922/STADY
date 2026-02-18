#include<stdio.h>

int stack[1000];
int top=-1;

void push(int item)
{
    if(top==999){
        printf("Overflow stack!\n");
        return;
    }
    top++;
    stack[top]=item;
}


int pop()
{
    if(top==-1){
        printf("Stack is empty.\n");
        return -1;
    }
    int item=stack[top];
    top--;
    return item;
}


int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(3);

    printf("Elements in the stack are : ");
    while(top!=-1)
        printf("%d ",pop());
    printf("\n");
}
