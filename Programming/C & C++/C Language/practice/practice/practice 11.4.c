#include<stdio.h>
#include<conio.h>
int add(void);
void main()
{
    int s;
    s=add();
    printf("Rusalt= %d", s);
}

int add()
{
    int a,b,c;
    printf("Enter two number: ");
    scanf("%d%d", &a,&b);
    c=a+b;
    return c;
}
