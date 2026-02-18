#include<stdio.h>
#include<math.h>

int main()
{
    int x1,x2,y1,y2;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);

    int x=x2-x1;
    x=x*x;

    int y=y2-y1;
    y=y*y;

    float d=x+y;
    d=sqrt(d);

    printf("%.2f\n",d);
}
