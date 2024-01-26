#include<stdio.h>
int main()
{
    int choice, a, b, s;
    printf("\n1. Addition");
    printf("\n2. Minus");
    printf("\n3. Times");
    printf("\n4. Division");
    printf("\n\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            {
                printf("Enter two number: ");
                scanf("%d%d",&a,&b);
                s=a+b;
                printf("Rusalt= %d", s);
                break;
            }

        case 2:
            {
                printf("Enter two number: ");
                scanf("%d%d", &a,&b);
                s=a-b;
                printf("Rusalt= %d", s);
                break;
            }

        case 3:
            {
                printf("Enter two number: ");
                scanf("%d%d", &a,&b);
                s=a*b;
                printf("Rusalt= %d", s);
                break;
            }

        case 4:
            {
                printf("Enter two number: ");
                scanf("%d%d", &a,&b);
                s=a/b;
                printf("Rusalt= %d", s);
                break;
            }
        default:
            printf("Invlid number");



    }



}
