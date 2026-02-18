#include<stdio.h>
int main()
{
    long long int n;
    scanf("%d",&n);

    long long int a=n-1;
    long long int sum=((a*(a+1))/2);
    printf("%lld\n",sum);

}
