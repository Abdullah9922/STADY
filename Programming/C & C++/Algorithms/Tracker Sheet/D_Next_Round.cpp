#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (k > n) {
        cout << "0\n";
        return 0;
    }

    int temp = v[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] >= temp && v[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
