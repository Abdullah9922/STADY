#include<stdio.h>
float sum (int,int);
int main(void)
{
    float T;
    T=sum(5,6);
    printf("Total=%d",T);
}


float sum (int a,int b)
{
    float s;
    printf("%d %d\n",a,b);
    s=a/b;
    return s;
}
