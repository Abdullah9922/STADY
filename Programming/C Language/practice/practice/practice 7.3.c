#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
    {
        printf("Large number=%d",a);
    }
    else
    {
        if(b>c)
            printf("Large number=%d",b);
        else
            printf("Large number=%d",c);
    }
}
