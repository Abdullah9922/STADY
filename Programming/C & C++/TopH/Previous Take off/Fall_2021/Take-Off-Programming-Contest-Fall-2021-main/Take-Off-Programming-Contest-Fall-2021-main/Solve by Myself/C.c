#include<stdio.h>

int main()
{
    int d,x,a,t;
    scanf("%d %d",&d,&x);
    scanf("%d %d",&a,&t);

    int s1=d-x;
    float s2=0.5*a*t*t;

    if(s2>=s1) printf("Allah bachaise!!!\n");
    else printf("Moira gesi!!!\n");
}
