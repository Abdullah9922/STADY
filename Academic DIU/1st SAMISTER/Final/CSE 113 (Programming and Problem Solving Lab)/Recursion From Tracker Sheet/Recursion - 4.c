#include<stdio.h>

int fact(int );

int  main()
{
    int n;
    scanf("%d",&n);

    a=fact(n);

    printf("%d",a);
}


int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}
