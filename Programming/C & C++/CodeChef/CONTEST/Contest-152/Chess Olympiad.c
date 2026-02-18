#include<stdio.h>

int main()
{
    int x,y,z;

    scanf("%d %d %d",&x,&y,&z);

    float point = x+(.5*y);
    int match = x+y+z;

    if(match == 4 && point <=2 ) printf("No\n");
    else if(match == 3 && point <=1 ) printf("No\n");
    else if(match == 2 && point == 0) printf("No\n");
    else printf("Yes\n");

}
