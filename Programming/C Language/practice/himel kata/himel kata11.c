#include<stdio.h>
int main()
{
    int i=1,n,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    A:
        a=a*i;
        i=i+1;
        if (i<=n)
            goto A;
    printf("%d",a);

}
