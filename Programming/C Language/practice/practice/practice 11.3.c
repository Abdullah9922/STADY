#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    void add(int,int); // take something output nothing
    printf("Enter two number: ");
    scanf("%d%d", x,y);
    add (x,y);
}

void add(int a, int b)
{
    int s;
    s=a+b;
    printf("Sum= %d", s);
}
