#include<stdio.h>
int main()
{
    add();
    even();
    add();
}

add()
{
    int a,b,s;
    printf("Enter two number: ");
    scanf("%d%d", &a,&b);
    s=a+b;
    printf("Rusalt= %d\n", s);
}


even()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even number\n");
    else
        printf("Odd number\n");


}
