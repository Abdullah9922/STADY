#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        a>c ? printf("Large number is %d", a): printf("Large number is %d", c);

    }

    else
    {
        b>c ? printf("Large number is %d", b) : printf("Large number is %d", c);

    }
}

