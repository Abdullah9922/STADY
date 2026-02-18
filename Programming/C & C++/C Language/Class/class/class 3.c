#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    if (a>b)
        printf("%d is larger %d and %d", a,a,b);
    else
        printf("%d is larger %d and %d", b,a,b);
}
