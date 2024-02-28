#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,*p,*q;
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;

    if(*p>*q)
        printf("p is maximum number");

    else
        printf("q is maximum number");


}
