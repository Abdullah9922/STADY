#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if((a%2!=0 && b%2!=0) || (a%2!=0 && c%2!=0) || (c%2!=0 && b%2!=0))
        printf("3 Kimonos for Nezuko\n");
    else printf("You have to choose two\n");
}
