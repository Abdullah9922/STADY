#include<stdio.h>
int main()
{
    int choice, a, b, s;
    while(1)
    {
    printf("\n n1: Addition");
    printf("\n n2: Even or odd");
    printf("\n n3: Print N number");
    printf("\n n4: Exit\n");

    scanf("\n\n%d", &choice);
    switch (choice)
    {
    case 1:
        {
            printf("Enter two number: ");
            scanf("%d%d", &a,&b);
            sum: s=a+b;
            printf("Sum is %d", s);
            break;
        }

    case 2:
        {
            printf("Enter a number: ");
            scanf("%d", &a);
            if (a%2==0)
                printf("It is a Even number");
            else
                printf("It is a Odd number");
            break;
        }

    case 3:
        {
            printf("Enter a number: ");
            scanf("%d", &a);
            for (b=1; b<=a; b++)
                printf(" Your natiral number:%d\n", b);
            break;
        }
    case 4: exit(0);

    default:
        printf("Your number is invalid");

    }
    }
    return 0;
}
