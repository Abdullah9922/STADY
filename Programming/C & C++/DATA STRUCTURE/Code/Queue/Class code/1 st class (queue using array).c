#include<stdio.h>
#include<stdlib.h>


struct ArrayQueue
{
    int front,rear;
    int capacity;
    int *array;
};


struct ArrayQueue* createQueue(int capacity)
{
    struct ArrayQueue *Q = (struct ArrayQueue*) malloc (sizeof(struct ArrayQueue));

    if(!Q) return NULL; // if queue do not create then it return NULL;
    Q->capacity=capacity;
    Q->front=-1;
    Q->rear=-1;
    Q->array=(int*) malloc(Q->capacity * sizeof(int));
    if(!Q->array) return NULL;
    return Q;
};


int isEmpty(struct ArrayQueue *Q)
{
    return (Q->front==-1);
}


int isFull(struct ArrayQueue *Q)
{
    return ((Q->rear+1)%Q->capacity==Q->front);
}


int QueueSize(struct ArrayQueue *Q)
{
    return ((Q->capacity - Q->front + Q->rear +1) % Q->capacity);
}


void insertion (struct ArrayQueue *Q , int data)
{
    if(isFull())
        printf("Overflow\n");
    else{
        Q->rear = (Q->rear + 1) % Q->capacity;
        Q->array[Q->rear] = data;

        if(Q->front == -1)
            Q->front = Q->rear;
    }
}


int deletion (struct ArrayQueue *Q)
{
    int data = -1;
    if(isEmpty()){
        printf("Queue is Empty.\n");
        return -1;
    }
    else{
        data = Q->array[Q->front];
        if(Q->front == Q->rear)  Q->front = Q->rear = -1;
        else  Q->front = (Q->front+1) % Q->capacity;
    }
    return data;
}


void deleteQueue (struct ArrayQueue *Q)
{
    if(Q){
        if(Q->array){
            free(Q->array);
        }
        free(Q);
    }
}
