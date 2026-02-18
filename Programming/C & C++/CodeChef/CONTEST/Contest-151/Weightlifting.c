#include<stdio.h>

int main()
{
    int a1,a2,b1,b2,c1,c2;
    scanf("%d %d %d %d %d %d",&a1,&a2,&b1,&b2,&c1,&c2);
    int a=a1>a2?a1:a2;
    int b=b1>b2?b1:b2;
    int c=c1>c2?c1:c2;

    printf("%d\n",a+b+c);
}
