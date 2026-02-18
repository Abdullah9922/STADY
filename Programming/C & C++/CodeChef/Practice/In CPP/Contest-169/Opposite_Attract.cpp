#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        
        string v;
        cin >> v;

        string v2 = "";
        
        for (int i = 0; i < n; i++) {
            if (v[i] == '0') v2 += '1';
            else if (v[i] == '1') v2 += '0';
        }

        cout << v2 << endl;
    }

    return 0;
}
