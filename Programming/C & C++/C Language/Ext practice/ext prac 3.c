#include<stdio.h>
#include<stdio.h>
int add(int,int);
int main()
{
    int x,y,s;  // take somthing return something
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("Rusalt= %d",s);
}

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
