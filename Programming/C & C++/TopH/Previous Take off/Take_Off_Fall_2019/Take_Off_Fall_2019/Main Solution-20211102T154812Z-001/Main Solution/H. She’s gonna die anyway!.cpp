#include <stdio.h>
struct series{
    int term;
    int value;
};
int main(){
    int tc;
    scanf("%d",&tc);
    for(int cs = 1 ; cs <= tc;  ++cs){
        int n,m;scanf("%d",&m);
        struct series S[m+5];
        for(int i = 0; i < m; i++){
            scanf("%d %d",&S[i].term,&S[i].value);
        }
        scanf("%d",&n);
        if(m == 1){
            printf("Case %d: %lld\n",cs,1LL*S[0].value*n);
            continue;
        }
        int firstValue = S[0].value,firstTerm = S[0].term;
        int lastValue=  S[1].value,lastTerm = S[1].term;
        int d = (lastValue-firstValue)/(lastTerm-firstTerm);
        int initialValue = firstValue - (d*(firstTerm-1));
        long long sum = (n*(2*initialValue+(n-1)*d)) / 2;
        printf("Case %d: %lld\n",cs,sum);
    }
    return 0;
}