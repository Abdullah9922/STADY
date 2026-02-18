//https://judge.beecrowd.com/en/problems/view/1198

#include<stdio.h>

int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b) != EOF){

        long long int temp;
        if(a<b) temp = b-a;
        else temp = a-b;

        printf("%lld\n",temp);

    }
}
