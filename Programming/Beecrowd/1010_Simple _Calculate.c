//https://www.beecrowd.com.br/judge/en/problems/view/1010
#include<stdio.h>
int main()
{
    int a,b;
    float c,s,x,y;
    int A,B;
    float C;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&A,&B,&C);
    x=b*c;
    y=B*C;
    s=(x+y);
    printf("VALOR A PAGAR: R$ %.2f\n",s);
}

