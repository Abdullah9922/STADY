#include<stdio.h>

int main()
{
    unsigned int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    unsigned int mul=a*b*c*d;

    mul=mul%100;

    if(mul>0 && mul<24) printf("level 0\n");
    else if(mul>24 && mul<49) printf("level 1\n");
    else if(mul>50 && mul<74) printf("level 2\n");
    else if(mul>75 && mul<99) printf("level 3\n");

}
