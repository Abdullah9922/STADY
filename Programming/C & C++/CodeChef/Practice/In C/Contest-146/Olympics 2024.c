#include<stdio.h>

int main()
{
    int g,s,b;
    scanf("%d %d %d",&g,&s,&b);

    int gN=5-g;
    int sN=5-s;
    int bN=5-b;

    printf("%d\n",gN+sN+bN);
}
