#include<stdio.h>

int stack[6];
int top=-1;
int sorted_stack[6];

void push(int item)
{
    if(top==5){
        printf("Stack is full.\n");
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



void sort_stack()
{
    int temp;
    int stop=-1;

    while(top!=-1){

    }
}



int main()
{
    int item=0;
    push(8);
    push(3);
    push(2);
    push(5);
    push(5);
    push(1);

    printf("Original stack: ");
    while(top!=-1){
        printf("%d ",pop());
    }

    push(8);
    push(3);
    push(2);
    push(5);
    push(5);
    push(1);
}
