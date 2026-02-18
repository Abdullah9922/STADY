#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int min_moves = (n + 1) / 2;

    while (min_moves <= n) {
        if (min_moves % m == 0) {
            cout << min_moves << endl;
            return 0;
        }
        min_moves++;
    }

    cout << -1 << endl;
    return 0;
}
