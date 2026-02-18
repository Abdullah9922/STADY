#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,k,f;
    for(int i=1;i<=tc;i++){
        scanf("%d %d %d",&n,&k,&f);
        f=f*2;
        int a=n/k;
        if(n%k==0) printf("Case %d: %d\n",i,f*a);
        else printf("Case %d: %d\n",i,(f*a)+f);
    }
}
