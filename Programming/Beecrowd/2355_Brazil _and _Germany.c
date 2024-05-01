//https://judge.beecrowd.com/en/problems/view/2355
#include<stdio.h>
#include<math.h>
int main()
{
    long int n ;
    double a , b ;
    while (scanf("%ld",&n)!=0)
    {
        if (n==0)
        {
            break;
        }

        a=(int)ceil(7*(double)n/90);
        b=(int)floor(n/90);
        printf("Brasil %.0lf x Alemanha %.0lf\n",b,a);
    }

     return 0;
}
