#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if (x>0)
    {
        printf("Your number is posative", x);
    }
    if (x<=0)
    {
        printf("Your number is non posative", x);
    }
    return 0;
}
