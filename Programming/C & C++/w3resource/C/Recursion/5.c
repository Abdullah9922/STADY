#include<stdio.h>

int count(int );

int main()
{
    int a,c2;
    scanf("%d",&a);

    c2=count(a);
    printf("\n\ncounter = %d\n",c2);
}


int count(int a)
{
    int x=0;
    static int c=0;

    x=a%10;
    a=a/10;
    c++;

    if(a==0)
        return (c);

    count (a);
}
