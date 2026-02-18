#include<stdio.h>
int main()
{
    int a,b,*p,*q,sum;
    scanf("%d %d",&a,&b);

    p=&a;
    q=&b;
    sum=*p+*q;
    printf("Total= %d",sum);
}
