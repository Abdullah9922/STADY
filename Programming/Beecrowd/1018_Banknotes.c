//https://www.beecrowd.com.br/judge/en/problems/view/1018
#include<stdio.h>

int main()
{
    //100, 50, 20, 10, 5, 2 and 1
    int n;//598
    scanf("%d",&n);

    int a,a1,b,b1,c,c1,d,d1,e,e1,f,f1,g,g1;
    a=n/100;//598
    a1=n%100;
    b=a1/50;
    b1=a1%50;
    c=b1/20;
    c1=b1%20;
    d=c1/10;
    d1=c1%10;
    e=d1/5;
    e1=d1%5;
    f=e1/2;
    f1=e1%2;
    g=f1/1;
    g1=f1%1;


printf("%d\n",n);
printf("%d nota(s) de R$ 100,00\n",a);
printf("%d nota(s) de R$ 50,00\n",b);
printf("%d nota(s) de R$ 20,00\n",c);
printf("%d nota(s) de R$ 10,00\n",d);
printf("%d nota(s) de R$ 5,00\n",e);
printf("%d nota(s) de R$ 2,00\n",f);
printf("%d nota(s) de R$ 1,00\n",g);

return 0;
}
