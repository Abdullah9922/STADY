#include<stdio.h>
#include<stdlib.h>


struct queue_array
{
    int capacity;
    int front,rear;
    int *array_link;
};


struct queue_array *q = NULL;


void createQueue()
{
    if(q == NULL){
        q = (struct queue_array*) malloc (sizeof(struct queue_array));
        q -> front = q -> rear = -1;

        printf("\nEnter a size of Queue: ");
        scanf("%d",&q->capacity);

        q->array_link = (int*) malloc (q->capacity * sizeof(int));
    }

    else{
        printf("\nQueue is already exist with capacity: %d\n",q->capacity);
    }
}



int isFull()
{
    return ((q->rear+1)%q->capacity == q->front);
}



int isEmpty()
{
    return (q->front == -1);
}


void enQueue()
{
    if(q==NULL)
        printf("\nQueue do not exist\n");
    else if(isFull())
        printf("\nQueue is Full\n");
    else{
        int data;
        printf("\nEnter a number:- ");
        scanf("%d",&data);

        q->rear++;
        q->rear = q->rear%q->capacity;
        q->array_link[q->rear] = data;
        printf("Insertion successful\n");
    }
}



void displayQueue()
{
    if(q==NULL)
        printf("\nQueue do not exist\n");
    else if(isEmpty())
        printf("\nQueue is Empty\n");
    else{
        int i=q->front;
        printf("Data entered in the list:\n");
        do{
            printf("%d  ",q->array_link[i]);
            i = (i+1) + q->capacity;
        }while(i != (q->rear + 1) % q->capacity);
        printf("\n\n");
    }
}



void deQueue()
{
    if(q==NULL)
        printf("\nQueue do not exist\n");
    else if(isEmpty())
        printf("\nQueue is Empty\n");
    else{
        int data;

        data = q->array_link[q->front];
        q->front++;
        q->front = q->front%q->capacity;
        printf("Your deleted item is: %d\n",data);
    }
}


void QueueSize()
{
    if(q==NULL)
        printf("\nQueue do not exist\n");
    else if(isEmpty())
        printf("\nQueue is Empty\n");
    else{
        int n;
        n = (q->capacity - q->front + q->rear + 1) % q->capacity;

        if(n!=0) printf("There are %d free space in Queue\n",q->capacity-n);
        else printf("There is no free space in Queue");
    }
}



void deleteQueue()
{
    if(q==NULL)
        printf("\nQueue do not exist\n");
    else{
        free(q->array_link);
        free(q);
        q = NULL;
        printf("Total queue is delete successfully\n");
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
            enQueue();
            break;

        case 4:
            deQueue();
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
