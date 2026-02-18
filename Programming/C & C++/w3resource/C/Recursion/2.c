#include<stdio.h>

int n;
int sum(int);

int main()
{
    int n,total;
    scanf("%d",&n);

    total=sum(n);

    printf("Total = %d",total);
}


int sum(int a)
{
    int t;
    if(a==1)
        return a;

    t=a+sum(a-1);

    return t;

}
