#include<stdio.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    int a =x - y*z;

    if(a>0) printf("%d\n",a);
    else if(a==0) printf("0\n");
    else printf("-1\n");
}
