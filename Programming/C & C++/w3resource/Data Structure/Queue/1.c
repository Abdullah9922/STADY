#include<stdio.h>

int size = 5;
int array_queue[5];

int front = -1;
int rear = -1;


int isEmpty()
{
    return (front == -1 || front > rear);
}


void insert(int data)
{
    if(rear == size -1){
        printf("Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    array_queue[rear] = data;
}


void display()
{
    if(isEmpty()){
        printf("Underflow\n");
        return;
    }

    printf("Queue elements are: ");
    for(int i=front; i<=rear; i++)
        printf("%d  ",array_queue[i]);

    printf("\n");
}


int main()
{
    printf("Initialize a queue!");
    printf("\nCheck the queue is empty or not? %s\n", isEmpty() ? "Yes" : "No");

    insert(1);
    insert(2);
    insert(3);

    display();
    printf("\nInsert another element into the queue:\n");

    insert(4);
    display();
    printf("\nCheck the queue is empty or not? %s\n", isEmpty() ? "Yes" : "No");
}
