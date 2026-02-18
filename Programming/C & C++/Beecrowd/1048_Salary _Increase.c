//https://judge.beecrowd.com/en/problems/view/1048
#include<stdio.h>
int main()
{
    float a,b;
    char c='%';
    scanf("%f",&a);
    if(a>=0 && a<=400.00){
        b=(a*.15)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(b-a));
        printf("Em percentual: 15 %c\n",c);
    }

    if(a>400.00 && a<=800.00){
        b=(a*.12)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(b-a));
        printf("Em percentual: 12 %c\n",c);
    }

    if(a>800.00 && a<=1200.00){
        b=(a*.10)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(b-a));
        printf("Em percentual: 10 %c\n",c);
    }

    if(a>1200.00 && a<=2000.00){
        b=(a*.07)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(b-a));
        printf("Em percentual: 7 %c\n",c);
    }


    if(a>2000.00){
        b=(a*.04)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(b-a));
        printf("Em percentual: 4 %c\n",c);
    }





}
