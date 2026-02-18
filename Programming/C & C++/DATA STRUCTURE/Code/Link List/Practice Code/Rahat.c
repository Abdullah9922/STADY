#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node
{
    int id;
    float cgp;
    char name[10];
    struct node *link;
};


struct node* createNode()
{
    struct node *t;
    t=(struct node*) malloc (sizeof(struct node));
    return t;
};


int main()
{
    //Input 1st node
    struct node *head;
    head=(struct node*) malloc (sizeof(struct node));
    head->id=918;
    head->cgp=3.24;
    strcpy(head->name,"Abdullah");
    head->link=NULL;


    //Input 2nd node
    struct node *second;
    second=createNode();
    second->id=391;
    second->cgp=3.17;
    strcpy(second->name,"Himel");
    second->link=NULL;


    //Input 3rd node
    struct node *third;
    third=createNode();
    third->id=339;
    third->cgp=3.38;
    strcpy(third->name,"Rahat");
    third->link=NULL;


    //link those node
    head->link=second;
    second->link=third;


    //Printing nodes
    printf("Data entered in the list:\n\n");
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("Name : %s\nId : %d\nCGP : %.2f\n\n",temp->name, temp->id, temp->cgp);
        temp=temp->link;
    }
    temp=NULL;



    // input new node for insertion
    struct node *newnode;
    newnode=createNode();
    newnode->id=481;
    newnode->cgp=3.56;
    strcpy(newnode->name,"Rabbil");
    newnode->link=NULL;

    //inputing position for insert
    int pos,count=0;
    printf("Enter position for insertion : ");
    scanf("%d",&pos);

    //Finding the position for insert
    temp=head;
    if(pos==1){
        newnode->link=head;
        head=newnode;
    }
    else{
        for(int i=1;i<pos-1;i++){
            temp=temp->link;
            if(temp==NULL){
                printf("Position is out of the range.\n");
                count++;
                break;
            }
        }
    }

    // linking the new node in the list
    if(count==0){
        newnode->link=temp->link;
        temp->link=newnode;
    }



    //Printing nodes after insertion
    printf("Data entered in the list:\n\n");
    temp=head;
    while(temp!=NULL){
        printf("Name : %s\nId : %d\nCGP : %.2f\n\n",temp->name, temp->id, temp->cgp);
        temp=temp->link;
    }
    temp=NULL;




    // Input the position for deletion
    int pos2,count2=0;
    printf("Enter a position for deletion : ");
    scanf("%d",&pos2);

    // Finding position for deletion
    struct node *temp2;
    temp2=head;
    temp=head;
    if(pos2==1){
        struct node *toDelete= head;
        head=head->link;
        free(toDelete);
    }
    else{
        for(int i=1;i<pos2;i++){
            temp2=temp;
            temp=temp->link;
            if(temp==NULL){
                printf("Position is out of the range.\n");
                count2++;
                break;
            }
        }
    }

    // delete the node from the list
    if(count2==0){
        temp2->link=temp->link;
        free(temp);
    }
    temp=NULL;
    temp2=NULL;



    //Printing nodes after deletion
    printf("Data entered in the list:\n\n");
    temp=head;
    while(temp!=NULL){
        printf("Name : %s\nId : %d\nCGP : %.2f\n\n",temp->name, temp->id, temp->cgp);
        temp=temp->link;
    }
    temp=NULL;
}
