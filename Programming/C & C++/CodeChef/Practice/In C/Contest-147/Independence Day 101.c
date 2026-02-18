#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int a,b,c;
    while(tc--){
        scanf("%d %d %d",&a,&b,&c);

        if(a==b && b==c && a==c){
            printf("Yes\n");
            continue;
        }

        int big;

        if(a>=b && a>=c) big=a;
        else if(b>=a && b>=c) big = b;
        else big=c;

        int sum=a+b+c-big;

        if(big<=sum+1)
            printf("YES\n");
        else printf("NO\n");

    }
}
