//https://www.beecrowd.com.br/judge/en/problems/view/1012
#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("TRIANGULO: %.3lf\n", (0.5*a*c));
    printf("CIRCULO: %.3lf\n", (3.14159*c*c));
    printf("TRAPEZIO: %.3lf\n", (0.5*c*(a+b)));
    printf("QUADRADO: %.3lf\n", (b*b));
    printf("RETANGULO: %.3lf\n", (a*b));

}
