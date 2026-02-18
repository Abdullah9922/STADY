#include<stdio.h>

int stack[1000];
int top=-1;

void push(int item)
{
    if(top==999){
        printf("Stack is overflow.\n");
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
    for(int i=1;i<=4;i++){
        printf("Push data %d\n",i);
        push(i);
    }
    printf("\n");

    while(1){
        int item=pop();
        printf("Pop data: %d\n",item);
        if(top==-1) break;
    }
    printf("\n");

    printf("Check a stack is empty or not?\n");
    if(top==-1)
        printf("Stack is empty.\n");
    else
        printf("Stack is not empty.\n");
}
