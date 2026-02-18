//https://www.beecrowd.com.br/judge/en/problems/view/1020
#include<stdio.h>
int main()
{
    int x,a,b,c,a1,b1;
    scanf("%d",&x);
    a=x/365;
    a1=x%365;
    b=a1/30;
    b1=a1%30;
    c=b1;

    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",b);
    printf("%d dia(s)\n",c);

}
