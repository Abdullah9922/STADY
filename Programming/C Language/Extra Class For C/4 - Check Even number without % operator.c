#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n\n");
    scanf("%d",&a);

    if(a&1)
        printf("\nOdd number\n\n");
    else
        printf("\nEven number\n\n");
}
