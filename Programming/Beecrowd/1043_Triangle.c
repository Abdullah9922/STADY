//https://judge.beecrowd.com/en/problems/view/1043
#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    if ( (a+b)>c && (a+c)>b && (b+c)>a)

        printf("Perimetro = %.1f\n",(a+b+c));


    else
        printf("Area = %.1f\n",(.5*c*(a+b)));

}
