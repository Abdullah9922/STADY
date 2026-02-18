#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n,k;
    while(tc--){
        scanf("%d %d",&n,&k);

        int s=(k*(k+1))/2;
        if(s+k-1<=n) printf("YES\n");
        else printf("NO\n");
    }
}
