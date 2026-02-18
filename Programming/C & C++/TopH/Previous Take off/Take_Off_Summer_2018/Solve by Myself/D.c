#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int x=(a^b)^c;
    int y=(a^b)^d;

    if(x==y) printf("YES\n");
    else printf("NO\n");

}
