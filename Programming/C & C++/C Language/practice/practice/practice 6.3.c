#include<stdio.h>
int main()
{
    int x=5,y;
    y=x++;
    printf("%d, %d\n", x, y);
    y=++x;
    printf("%d, %d", x, y);
}
