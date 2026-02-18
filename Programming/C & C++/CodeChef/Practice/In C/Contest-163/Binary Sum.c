#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,k;
    while(tc--){
        scanf("%d %d",&n,&k);

        if(n%2==0){
            n=n/2;
            if(k==n) printf("YES\n");
            else printf("NO\n");
        }

        else{
            n=n+1;
            n=n/2;

            if(k==n || k == (n-1))
                printf("YES\n");
            else printf("NO\n");
        }

    }
}
