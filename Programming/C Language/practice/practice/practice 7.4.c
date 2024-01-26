#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
            printf("Large number is %d", a);
        else
            printf("Large number is %d", c);

    }

    else
    {
        if (b>c)
            printf("Large number is %d", b);
        else
            printf("Large number is %d", c);

    }
}
