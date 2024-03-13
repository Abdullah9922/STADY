#include<stdio.h>

int even[100],odd[100];
void fun(int ,int );

int main()
{
    int a,b;
    scanf("%d d",&a,&b);
    fun(a,b);
}


void fun(int a,int b)
{
    int i=a,j=0,counteven=0,countodd=0;
    if(i!=b){
        if(i%2==0){
            even[j]=i;
            i++;
            j++;
            counteven++;
            fun(a,b);
        }
        else{
            odd[j]=i;
            j++;
            i++;
            countodd++;
            fun(a,b);
        }
    }
    else{

        printf("EVEN NUMBERS ARE:\n");
        for(int i=0;i<counteven;i++)
            printf("%d  ",even[i]);

        printf("\nOdd NUMBERS ARE:\n");
        for(int i=0;i<countodd;i++)
            printf("%d  ",odd[i]);
    }
}




