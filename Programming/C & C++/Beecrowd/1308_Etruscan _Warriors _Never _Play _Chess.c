//https://judge.beecrowd.com/en/problems/view/1308
#include<stdio.h>
#include<math.h>
int main()
{
    int t ,i;
    long long int n ;
    double delta , j ;
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%lld",&n);
        delta=1+8*n;
        j=(-1 + sqrt(delta))/2;

        printf("%lld\n",(long long int)j);

    }

     return 0;
}
