//https://judge.beecrowd.com/en/problems/view/1161

#include<stdio.h>

int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n) != EOF){

        long long int sum =0;
        long long int mul =1;

        for(int i=1;i<=m;i++)
            mul = mul*i;

        sum = mul;
        mul = 1;

        for(int i=1;i<=n;i++)
            mul = mul*i;

        sum += mul;
        printf("%lld\n",sum);
    }
}
