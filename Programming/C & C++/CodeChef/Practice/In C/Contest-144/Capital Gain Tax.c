#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(x==y) printf("SAME\n");
    else if(x>y) printf("DECREASED\n");
    else printf("INCREASED\n");
}
