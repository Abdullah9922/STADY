#include<stdio.h>
#include<stdlib.h>


struct ArrayQueue
{
    int front,rear;
    int capacity;
    int *array_link;
};

struct ArrayQueue *Q = NULL;

struct ArrayQueue* createQueue(int capacity)
{
    Q = (struct ArrayQueue*) malloc (sizeof(struct ArrayQueue));
    Q->front=Q->rear=-1;
    Q->capacity=capacity;
    Q->array_link = (int*) malloc (Q->capacity * sizeof(int));
    return Q;
};


int isEmpty()
{
    return (Q->front==-1);
}


int isFull()
{
    return ((Q->rear + 1)% Q->capacity == Q->front);
}


int QueueSize()
{
    return ((Q->capacity - Q->front + Q->rear + 1) % Q->capacity);
}


int  insertion(int data)
{
    if(isFull()){
        printf("OverFlow\n");
        return -1;
    }

    else{
        Q->rear = (Q->rear + 1) % Q->capacity;
        Q->array_link[Q->rear]=data;

        if(Q->front==-1)
            Q->front = Q->rear;

        printf("Insertion successfull\n");
    }
}


int deletion()
{
    if(isEmpty()){
        printf("Queue is Empty.\n");
        return -1;
    }

    else{
        int data = Q->array_link[Q->front];

        if(Q->rear == Q->front)
            Q->rear = Q->front = -1;

        else
            Q->front = (Q->front + 1) % Q->capacity;

        return data;

    }
}


void deleteQueue()
{
    if(!Q){
        if(!Q->array_link){
            free(Q->array_link);
            Q->array_link = NULL;
        }
        free(Q);
        Q=NULL;
    }
}


int menu()
{
    int ch;
    printf("\n1. Create Queue\n");
    printf("2. Insertion\n");
    printf("3. Deletion\n");
    printf("4. Size of Queue\n");
    printf("5. Delete Queue\n");
    printf("6. Exit\n");

    printf("\nEnter your choice --> ");
    scanf("%d",&ch);
    printf("\n");
    return ch;
}



int main()
{
    int data;
    while(1){

        switch(menu()){
        case 1:
            printf("\nEnter the capacity of Queue : ");
            scanf("%d",&data);
            createQueue(data);
            printf("Queue of %d capacity is create successfully.\n",data);
            break;

        case 2:
            printf("\nEnter data for insert : ");
            scanf("%d",&data);
            insertion(data);
            break;

        case 3:
            data = deletion();
            if(data!=-1)
                printf("%d data is deleted\n",data);
            break;

        case 4:
            data = QueueSize();
            if(data == 0)
                printf("There is no free space in Queue\n");
            else
                printf("There are %d data in Queue\n",data);
            break;

        case 5:
            deleteQueue();
            printf("\nQueue is deleted successfully.\n");
            break;

        case 6:
            exit(0);

        default:
            printf("\nWrong input.\n");
            break;
        }
    }
}
