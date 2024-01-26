#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    void add(void);
    printf("enter a numbre");
    scanf("%d",&a);
    add();
}


void add()
{
    printf("your lucky number is %d", a);
}
