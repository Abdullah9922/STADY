#include<stdio.h>

void swp(int*, int*);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);// 5 3

    swp(&a,&b);

    printf("\n\n%d  %d\n\n",a,b);
}


void swp(int *x,int *y)
{
    int t;

    t=*x;
    *x=*y;
    *y=t;
}
