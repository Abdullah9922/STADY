#include <stdio.h>
#include <math.h>
int main() {
    int t,co=1,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        double ans=n;
        double cash=(1.0*n*m)/100.0;
        ans+=cash;
        while(cash>=1)
        {
            cash=(1.0*m*cash)/100.0;
            ans+=cash;
        }
        printf("Case %d: %.2f\n",co++,ans);
    }
    return 0;
}