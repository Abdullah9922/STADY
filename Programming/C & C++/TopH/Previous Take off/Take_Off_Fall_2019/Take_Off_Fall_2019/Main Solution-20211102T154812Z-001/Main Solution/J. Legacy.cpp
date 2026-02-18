#include <bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f

int ar[101], n;
int DP[101][205];
int vis[101][205], now;

int solve(int pos, int cur){
    if(pos == n) return 0;
    if(n - pos > 201 - cur) return inf;
    int &ret = DP[pos][cur];
    if(vis[pos][cur] == now) return ret;
    vis[pos][cur] = now; 
    ret = solve(pos, cur + 1);
    ret = min(ret, solve(pos + 1, cur + 1) + abs(cur - ar[pos]));
    return ret;
}

int main(){
  
    int t, tc=0; scanf("%d", &t);
    while(t--){
        now++; scanf("%d", &n);
        int res = 0;
        for(int i = 0; i < n; i++){
            int x, y; scanf("%d %d", &x, &y);
            res += y;
            ar[i] = x + 51;
        }
        sort(ar, ar+n);
        printf("Case #%d: %d\n", ++tc, solve(0, 0) + res);
    }

    return 0;
}