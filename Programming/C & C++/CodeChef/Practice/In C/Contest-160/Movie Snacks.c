#include<stdio.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    int sum=x+y;

    if(sum<z) printf("%d\n",sum*2+y);
    else printf("%d\n",z*2+y);


}
