//https://judge.beecrowd.com/en/problems/view/1045
#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a, &b, &c);
    if(a>0 && b>0 && c>0){
        if(a>=(b+c)|| b >= (a+c) || c >= (a+b))
            printf("NAO FORMA TRIANGULO\n");
        else if((a*a)==((b*b)+(c*c))|| b*b == (a*a + c*c) || c*c == (a*a + b*b))
            printf("TRIANGULO RETANGULO\n");
        else if((a*a)>((b*b)+(c*c))|| b*b > (a*a + c*c) || c*c > (a*a + b*b))
            printf("TRIANGULO OBTUSANGULO\n");
        else if((a*a)<((b*b)+(c*c))|| b*b < (a*a + c*c) || c*c < (a*a + b*b))
            printf("TRIANGULO ACUTANGULO\n");
        if(a==b && c==a)
            printf("TRIANGULO EQUILATERO\n");
        if((a==b && c!=a) || (b==c && a!=b) || (a==c && a!=b))
            printf("TRIANGULO ISOSCELES\n");
    }

}
