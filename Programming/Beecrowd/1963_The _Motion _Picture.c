//https://judge.beecrowd.com/en/problems/view/1963
#include<stdio.h>
int main()
{
    double a,b,c;
    while (scanf("%lf %lf",&a,&b)!=EOF){
        c=b-a;
        a=100.00/a;
        printf("%.2lf%%\n",c*a);
    }

}
