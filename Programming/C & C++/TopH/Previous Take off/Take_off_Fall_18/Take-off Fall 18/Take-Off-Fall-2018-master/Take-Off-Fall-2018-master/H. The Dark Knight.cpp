#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t, tc=0;
    scanf("%d", &t);
    while(t--){
        ll r, d, h1, h2;
        scanf("%lld %lld %lld %lld", &r, &d, &h1, &h2);
        h1*=h1, h2*=h2;
        ll y=r*r-d*d;
        if(y>h1 && y<h2) printf("Case %d: Yes\n", ++tc);
        else printf("Case %d: No\n", ++tc);
    }
    return 0;
}
