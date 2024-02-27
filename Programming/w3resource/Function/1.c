#include<stdio.h>
int sum (int,int);
int main(void)
{
    int T;
    T=sum(5,6);
    printf("Total=%d",T);
}
int sum (int a,int b)
{
    int s;
    s=a+b;
    return s;
}
