#include <bits/stdc++.h>
using namespace std;

int countInRange(vector<int>& v, int l, int r) {
    int left = lower_bound(v.begin(), v.end(), l) - v.begin();
    int right = upper_bound(v.begin(), v.end(), r) - v.begin();
    return right - left;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << countInRange(v, l, r) << endl;
    }

    return 0;
}
