//https://www.beecrowd.com.br/judge/en/problems/view/1021
#include<stdio.h>

int main()
{
    //100, 50, 20, 10, 5, 2 and 1
    float n;//598
    scanf("%f",&n);

    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    int a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1;
    a=n/100.00;//598
    a1=n%100;
    b=a1/50.00;
    b1=a1%50.00;
    c=b1/20.00;
    c1=b1%20.00;
    d=c1/10.00;
    d1=c1%10.00;
    e=d1/5.00;
    e1=d1%5.00;
    f=e1/2.00;
    f1=e1%2.00;
    g=f1/1.00;
    g1=f1%1.00;

    h=g1/1.00;//598
    h1=g1%1.00;
    i=h1/0.50;
    i1=h1%0.50;
    j=i1/0.20;
    j1=i1%0.20;
    k=j1/0.10;
    k1=j1%0.10;
    l=k1/0.05;
    l1=k1%0.05;
    m=l1/0.01;
    m1=l1%0.01;


printf("NOTAS:\n");
printf("%f nota(s) de R$ 100,00\n",a);
printf("%f nota(s) de R$ 50,00\n",b);
printf("%f nota(s) de R$ 20,00\n",c);
printf("%f nota(s) de R$ 10,00\n",d);
printf("%f nota(s) de R$ 5,00\n",e);
printf("%f nota(s) de R$ 2,00\n",f);
printf("%f nota(s) de R$ 1,00\n",g);

printf("MOEDAS:\n");
printf("%f moeda(s) de R$ 1.00\n",h);
printf("%f moeda(s) de R$ 0.50\n",i);
printf("%f moeda(s) de R$ 0.20\n",j);
printf("%f moeda(s) de R$ 0.10\n",k);
printf("%f moeda(s) de R$ 0.05\n",l);
printf("%f moeda(s) de R$ 0.01\n",m);
}

