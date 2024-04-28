//https://judge.beecrowd.com/en/problems/view/2518
#include<stdio.h>
#include<math.h>
int main()
{
    double h,c,l,o,area,n;

    while (scanf("%lf %lf %lf %lf",&n,&h,&c,&l)!=EOF){
        o=sqrt(h*h+c*c);
        area=n*l*o;
        printf("%.4lf\n",area/10000);
    }
}
