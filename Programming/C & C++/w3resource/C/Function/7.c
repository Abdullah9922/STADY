#include<stdio.h>

int a(int);

main()
{
    int p,n;
    scanf("%d",&n);  // 7
    p= a(n);
    if(p==1)
        printf("prime number");
    else
        printf("Is not prime number");
}


int a(int x) // 7
{
    for(int i=2;i<=x-1;i++)
    {
        if(x%i==0)
            return 2;
    }
    return 1;
}
