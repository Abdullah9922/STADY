#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    a=a-b;
    if(a<0) a=a*(-1);

    if(a<=c) printf("Yes\n");

    else printf("No\n");
}
