#include<stdio.h>
#include<stdlib.h>


struct ArrayQueue
{
    int front,rear;
    int capacity;
    int *array_link;
};


struct ArrayQueue *q = NULL;


void createQueue()
{
    if(q==NULL){
        q= (struct ArrayQueue*) malloc (sizeof(struct ArrayQueue));
        q->front = q->rear = -1;

        int cap;
        printf("Enter capacity of Queue : ");
        scanf("%d",&cap);

        q->capacity = cap;
        q->array_link = (int*) malloc (q->capacity * sizeof(int));
        printf("\nQueue create successfully with the size of %d.\n",q->capacity);
    }

    else
        printf("\nQueue is already exist with the size of %d\n",q->capacity);
}


int isEmpty()
{
    return (q->front == -1);
}


int isFull()
{
    return ((q->rear+1) % q->capacity == q->front);
}


void displayQueue()
{
    if(q==NULL)
        printf("\nQueue do not exist\n");
    else if(isEmpty())
        printf("\nQueue is Empty.\n");
    else{
        int i=q->front;
        do{
            printf("%d  ",q->array_link[i]);
            i=(i+1)%q->capacity;
        }while(i!= (q->rear+1) % q->capacity);
    }
}


void insertion()
{
    if(q==NULL)
        printf("\nQueue do not exist\n");
    else if(isFull())
        printf("\nQueue is Full.\n");
    else{
        int data;
        printf("\nEnter data for insert : ");
        scanf("%d",&data);

        q->front = (q->front+1) %q->capacity;
        q->array_link[q->front]=data;

        if(q->rear == -1)
            q->rear = q->front;

        printf("\nInsertion successful.\n");
    }
}


void deletion()
{
    if(q==NULL)
        printf("\nQueue do not exist\n");
    else if(isEmpty())
        printf("\nQueue is Empty.\n");
    else{
        int data;
        data = q->array_link[q->front];

        if(q->front == q->rear)
            q->front = q->rear = -1;
        else
            q->front = (q->front+1) % q->capacity;

        printf("\nYour deleted data is %d\n",data);
    }
}



void QueueSize()
{
    if(q==NULL){
        printf("\nQueue do not exist\n");
        return;
    }
    int n;
    n = (q->capacity - q->front + q->rear + 1) % q->capacity;

    if(n!=0)
            printf("\nThere are %d data in Queue\n",n);

        else
            printf("\nThere is no free space in Queue\n");
}


void deleteQueue()
{
    if(q==NULL)
        printf("\nQueue is not exist.\n");

    else{
        if(!q->array_link){
            free(q->array_link);
            q->array_link = NULL;
        }
        free(q);
        q=NULL;
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
