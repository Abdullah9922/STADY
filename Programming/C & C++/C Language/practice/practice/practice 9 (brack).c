#include<stdio.h>
int main()
{
    int x,i=1;
    while (i<=5)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if (x<0)
            break;
        i++;
    }

    i==6 ? printf("End normaly") : printf("Applied brack");

}
