//https://www.beecrowd.com.br/judge/en/problems/view/1021
#include<stdio.h>

int main()
{

    float n;
    int n1;
    scanf("%f",&n);
    n1=n;
    printf("%d",n1);

    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    int a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1;
    a=n/100;
    a1=n1%100;
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

    h=g1/1.00;
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
printf("%d nota(s) de R$ 100.00\n",a);
printf("%d nota(s) de R$ 50,00\n",b);
printf("%d nota(s) de R$ 20,00\n",c);
printf("%d nota(s) de R$ 10,00\n",d);
printf("%d nota(s) de R$ 5,00\n",e);
printf("%d nota(s) de R$ 2,00\n",f);
printf("%d nota(s) de R$ 1,00\n",g);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",h);
printf("%d moeda(s) de R$ 0.50\n",i);
printf("%d moeda(s) de R$ 0.20\n",j);
printf("%d moeda(s) de R$ 0.10\n",k);
printf("%d moeda(s) de R$ 0.05\n",l);
printf("%d moeda(s) de R$ 0.01\n",m);
}

