//https://judge.beecrowd.com/en/problems/view/2345
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int x1=a+d;
    int x2=b+c;
    int x=x1-x2;

    if (x<0)
        printf("%d\n",x*-1);

    else printf("%d\n",x);
}
