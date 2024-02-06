#include<stdio.h>
int main()
{
    float a,b,SUM,SUB,DIV,MUL;
    int c,d,REMAINDER;
    scanf("%f %f", &a,&b);
    scanf("%d %d", &c,&d);
    SUM=(a+b);
    SUB=(a-b);
    DIV=(a/b);
    MUL=(a*b);
    REMAINDER=(c%d);
    printf("SUM= %.2f\n SUB= %.2f\n DIV= %.2f\n MUL= %.2f\n REMAINDER= %d\n",SUM,SUB,DIV,MUL,REMAINDER);
}
