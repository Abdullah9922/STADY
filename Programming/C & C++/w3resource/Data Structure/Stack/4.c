#include<stdio.h>
#include<string.h>

int stack[100];
int top=-1;

void push(int item)
{
    if(top==99){
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

int main()
{
    char s[100];
    printf("Input a string: ");
    gets(s);

    int len=strlen(s);

    int item;
    for(int i=0;i<len;i++){
        item=s[i];
        push(item);
    }

    for(int i=0;i<len;i++){
        item=pop();
        s[i]=item;
    }

    printf("Reversed string using a stack is: ");
    puts(s);
}
