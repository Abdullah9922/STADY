#include<stdio.h>'
int main()
{
    int i=1;
    A:
        printf("%d\n", i);
        i=i+1;
        if (i<=100)
            goto A;

}
