#include<stdio.h>

int n=1;
int printN(int );

void main(void)
{
    printN(n);
}


int printN(int n)
{
    if(n<=50){
        printf("%d\n",n);
        printN(n+1);
            return (n);
    }
}
