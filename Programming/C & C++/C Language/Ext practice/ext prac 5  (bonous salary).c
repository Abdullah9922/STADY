
#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",&s);

    double a,b,c,d;
    scanf("%lf %lf", &a,&b);
    c=((b*15)/100);
    d=(a+b);
    printf("TOTAL = R$ %.2lf\n", d);

}
