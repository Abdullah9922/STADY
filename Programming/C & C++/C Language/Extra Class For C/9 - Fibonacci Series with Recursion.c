#include<stdio.h>

int fib (int );

int main()
{
    int i,n;
    printf("Enter how many tearm you want to see: ");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
        printf("%d  ",fib(i));
    printf("\n\n");
}


int fib(int n)
{
    if(n==1 || n==2)
        return 1;
    return(fib(n-2)+fib(n-1));
}
