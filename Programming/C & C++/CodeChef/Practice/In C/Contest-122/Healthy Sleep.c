#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n<8) printf("LESS\n");
    else if(n>8) printf("MORE\n");
    else printf("PERFECT\n");
}
