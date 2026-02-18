#include <bits/stdc++.h>

#define MAX 1000010
#define INF 10000000000000000
#define MOD 10000007

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

void IO()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
}

ll ppower[MAX+5];
bool isprime[MAX+5];

vector < ll > prime,fact;

void sieve()
{
    for(ll i=3;i*i<=MAX;i+=2){
        if(!isprime[i]){
            for(ll j=i*i;j<=MAX;j+=i*2){
                isprime[j]=true;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3;i<=MAX;i+=2){
        if(!isprime[i]){
            prime.push_back(i);
        }
    }
}

void FacM(ll m)
{
    for(ll i=0;prime[i]*prime[i]<=m;i++){
        if(m%prime[i]==0){
            ll cnt=0;
            while(m%prime[i]==0){
                cnt++;
                m/=prime[i];
            }
            ppower[prime[i]]=cnt;
            fact.push_back(prime[i]);
        }
    }
    if(m>1){
        ppower[m]=1;
        fact.push_back(m);
    }
}

ll FacN(ll n)
{
    ll minm=INF;
    ll si=fact.size();
    for(ll i=0;i<si;i++){
        ll x=n,cnt=0;
        while(x/fact[i]){
            cnt+=(x/fact[i]);
            x/=fact[i];
        }
        minm=min(minm,(cnt/ppower[fact[i]]));
    }
    return minm;
}

ll BM(ll m, ll p)
{
    if(p==0)return 1;
    if(p%2==0){
        ll ret=BM(m,p/2);
        return ((ret%MOD)*(ret%MOD))%MOD;
    }
    else{
        ll ret=BM(m,p-1);
        return ((ret%MOD)*(m%MOD))%MOD;
    }
}

int main()
{
    //IO();
    sieve();
    ll t,n,m;
    scanf("%lld",&t);
    for(ll i=1;i<=t;i++){
        scanf("%lld %lld",&n,&m);
        fact.clear();
        FacM(m);
        printf("%lld\n",BM(m,FacN(n))%MOD);
    }
    return 0;
}