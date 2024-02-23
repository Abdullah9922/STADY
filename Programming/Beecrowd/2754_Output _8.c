//https://judge.beecrowd.com/en/problems/view/2754
#include<stdio.h>
int main()
{
    double a=234.345, b=45.698;
    printf("%lf - %lf\n",a,b);
    printf("%.0lf - %.0lf\n",a,b);
    printf("%.1lf - %.1lf\n",a,b);
    printf("%.2lf - %.2lf\n",a,b);
    printf("%.3lf - %.3f\n",a,b);
    printf("%.6e - %.6e\n",a,b);
    printf("%.6E - %.6E\n",a,b);
    printf("%.3lf - %.3f\n",a,b);
    printf("%.3lf - %.3f\n",a,b);
}
