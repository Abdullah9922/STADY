#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        long long int temp=1;
        while(n--)
            temp=temp*10;

        printf("%lld\n",temp);
    }
}
