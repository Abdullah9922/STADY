#include <stdio.h>

int main()
{
 long long int n;
 scanf("%lld",&n);


 double A,a,pi=3.1416,s,b,ans;

 A=(double)n*n;
 s=(double)n/2;
 a=s*s;
 b=(double)((pi*s*s)/4);
 ans=(double)(A-a-b-b);
 printf("%.4lf\n",ans);
    return 0;
}
