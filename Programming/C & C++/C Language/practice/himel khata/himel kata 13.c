#include<stdio.h>
#include<conio.h>
int main ()
{
    int i=1,n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (i<=n-1)
    {
        s=n%i; i=i+1;
        if(s==0)
        {
            printf("%d is not a prime number",n);
            break;
        }

            printf("%d is a prime number",n);
    }
}
