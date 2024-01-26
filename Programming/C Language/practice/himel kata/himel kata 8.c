#include<stdio.h>
int main()
{
    int i=2,n, s;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2; i<=n-1; i=i+1)
    {
         s=n%i;
         if(s==0)
         {
             printf("%d is not a prime number", n);
             break;
         }


         else
            {
            printf("%d is a prime number", n);
            break;
            }
    }

return 0;
}
