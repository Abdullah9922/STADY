//https://judge.beecrowd.com/en/problems/view/1805
#include<stdio.h>
int main()
{
    long long int a,b,sum;
    scanf("%lld %lld",&a,&b);

    sum = ((b * (b + 1)) - (a * (a - 1))) / 2;

    printf("%lld\n",sum);
}
