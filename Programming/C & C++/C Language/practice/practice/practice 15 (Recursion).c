#include<stdio.h>

int SUM(int );

void main(void)
{
    int p,a=5;

    p=SUM(a);

    printf("Rusalt = %d\n",p);
}


int SUM(int a)
{
    int sum;
    if(a==1)
        return(a);
    sum=a+(SUM(a-1));
    return (sum);
}
