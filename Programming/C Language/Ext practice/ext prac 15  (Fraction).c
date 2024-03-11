#include<stdio.h>

void main(void)
{
    add();
    mult();
    sub();
}

void add(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("SUM = %d\n",a+b);
}


void mult(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Multification = %d\n",a*b);
}


void sub(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("SUB = %d\n",a-b);
}

