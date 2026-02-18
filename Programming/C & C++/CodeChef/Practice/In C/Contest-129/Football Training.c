#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(x>y) printf("FREEKICK\n");
    else if(y>x) printf("PENALTY\n");
}
