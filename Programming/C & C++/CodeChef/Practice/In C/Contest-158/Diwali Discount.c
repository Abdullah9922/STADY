#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(b>=a) printf("0\n");
    else printf("%d\n",a-b);
}
