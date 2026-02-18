#include<stdio.h>
int main()
{
    int x, a=4, b=5;
    x=a>b? x=a : (x=b);
    printf("%d", x);
}
