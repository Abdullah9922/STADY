#include<stdio.h>

int a(int);

int main()
{
    int p,n;
    scanf("%d",&n);
    p= a(n);
    if(p==1)
        printf("prime number");
    else
        printf("Is not prime number");
}


int a(int x)
{
    for(int i=2;i<=x-1;i++)
    {
        if(x%i==0)
            return 2;
        else
            return 1;
    }
}
