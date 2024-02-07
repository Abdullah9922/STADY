#include<stdio.h>
int main ()
{
    int i,a=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a = a * i;
    }
        printf("The Factorial of %d is: %d",n,a);
}
