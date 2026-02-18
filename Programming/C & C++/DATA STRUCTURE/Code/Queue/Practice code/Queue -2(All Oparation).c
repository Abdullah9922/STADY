#include<stdio.h>
#include<stdlib.h>


struct ArrayQueue
{
    int front,rear;
    int capacity;
    int *array_link;
};


struct ArrayQueue *Q = NULL;


void createQueue()
{
    int cap;
    if(Q==NULL){
       Q = (struct ArrayQueue*) malloc (sizeof(struct ArrayQueue));
       Q->front=Q->rear=-1;

       printf("\nEnter the capacity of Queue : ");
       scanf("%d",&cap);

       Q->capacity=cap;
       Q->array_link=(int*) malloc (Q->capacity * sizeof(int));
       printf("Queue is create successfully with the size of %d\n",Q->capacity);
    }

    else{
        printf("A Queue is already exist with size of %d.\n",Q->capacity);
    }
}


int isFull()
{
    return ((Q->rear+1) % Q->capacity == Q->front);
}


int isEmpty()
{
    return (Q->front == -1);
}


void displayQueue()
{
    if(Q==NULL)
        printf("\nQueue is not exist.\n");
    else if(isEmpty())
        printf("\nQueue is Empty.\n");
    else{
        int count=0;
        int i=Q->front;

        do{
            printf("%d  ",Q->array_link[i]);
            i=(i+1) % Q->capacity;
            count++;
        } while(count < Q->capacity && i != Q->front);
        printf("\n\n");
    }
}


void insertion()
{
    if(Q==NULL)
        printf("\nQueue is not exist.\n");
    else if(isFull())
        printf("\nQueue is Full.\n");
    else{
        int data;
        printf("\nEnter a data for insert: ");
        scanf("%d",&data);

        Q->rear=(Q->rear+1) % Q->capacity;
        Q->array_link[Q->rear]=data;

        if(Q->front == -1)
            Q->front = Q->rear;

        printf("\nInsertion successful.\n");
    }
}


void deletion()
{
    if(Q==NULL)
        printf("\nQueue is not exist.\n");
    else if(isEmpty())
        printf("\nQueue is Empty.\n");
    else{
        int data;
        data = Q->array_link[Q->front];

        if(Q->front == Q->rear)
            Q->front = Q->rear = -1;

        else
            Q->rear = (Q->rear + 1) % Q->capacity;

        printf("%d data is deleted\n",data);
    }
}


void QueueSize()
{
    if(Q==NULL)
        printf("\nQueue is not exist.\n");
    else{

        int n=((Q->capacity - Q->front + Q->rear + 1) % Q->capacity);

        if(n!=0)
            printf("\nThere are %d data in Queue\n",n);

        else
            printf("\nThere is no free space in Queue\n");
    }
}


void deleteQueue()
{
    if(Q==NULL)
        printf("\nQueue is not exist.\n");

    else{
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
    printf("2. Display All data\n");
    printf("3. Insertion\n");
    printf("4. Deletion\n");
    printf("5. Size of Queue\n");
    printf("6. Delete Queue\n");
    printf("7. Exit\n");

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
            createQueue();
            break;

        case 2:
            displayQueue();
            break;

        case 3:
            insertion();
            break;

        case 4:
            deletion();
            break;

        case 5:
            QueueSize();
            break;

        case 6:
            deleteQueue();
            break;

        case 7:
            exit(0);

        default:
            printf("\nWrong input.\n");
            break;
        }
    }
}

