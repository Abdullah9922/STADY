#include<stdio.h>
#include<conio.h>
int add(int,int); // take something return somthing
int main()
{
    int s,x,y;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("Rusalt= %d", s);
}

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
