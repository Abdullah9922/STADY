#include<stdio.h>
int main()
{
    int i=1,s=0;
    A:
        s=s+i;
        i=i+1;
        if (i<=100)
            goto A;
        printf("%d", s);

}
