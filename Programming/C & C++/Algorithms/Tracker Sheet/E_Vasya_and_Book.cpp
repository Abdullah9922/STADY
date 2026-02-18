#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y, d;
    cin >> n >> x >> y >> d;

    
    if (abs(y - x) % d == 0) {
        cout << abs(y - x) / d << endl;
        return;
    }

    int ans = INT_MAX;

    
    if ((y - 1) % d == 0) {
        ans = min(ans, (x - 1 + d - 1) / d + (y - 1) / d);
    }

    
    if ((n - y) % d == 0) {
        ans = min(ans, (n - x + d - 1) / d + (n - y) / d);
    }

    
    if (ans == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
