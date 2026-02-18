//https://www.beecrowd.com.br/judge/en/problems/view/1015
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,s,a,b,c;
    double x2,y2;
    scanf("%lf %lf", &x1,&y1);
    scanf("%lf %lf", &x2,&y2);
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    c=a+b;
    s=sqrt(c);
    printf("%.4lf\n",s);
}
