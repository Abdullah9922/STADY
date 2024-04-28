//https://judge.beecrowd.com/en/problems/view/2029
#include<stdio.h>
int main()
{
    double v,d;
    while(scanf("%lf%lf",&v,&d)!=EOF)
    {
        double h,r,a,pi=3.14;
        r=d/2;
        a=pi*r*r;
        h=v/(pi*r*r);
        printf("ALTURA = %.2lf\nAREA = %.2lf\n",h,a);
    }
    return 0;
}
