#include<stdio.h>

int main()
{
    int a,b,c,x;
    scanf("%d %d %d %d",&a,&b,&c,&x);

    int A=a*b*c;
    int X=x*x*x;

    if(A==X) printf("Equal\n");
    else if(A>X) printf("Cuboid\n");
    else if(A<X) printf("Cube\n");

}
