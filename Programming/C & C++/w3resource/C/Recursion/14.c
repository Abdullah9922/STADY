#include<stdio.h>

int fun(int ,int );

int main()
{
    int stval,n;
    scanf("%d",&n);

    printf ("Even number:  ");
    fun(2,n);

    printf ("\nOdd number:  ");
    fun(1,n);
    printf("\n\n");
}


int fun(int stval ,int n)
{
    if(stval>n)
        return;
    printf("%d ",stval);
    fun(stval+2,n);
}




