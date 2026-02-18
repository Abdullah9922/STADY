#include <bits/stdc++.h>
using namespace std;

bool check(const vector<int>& a, int k) {
    int n = a.size();
    if (k == 0) return true;
    if (k > n) return false;
    int start = n - k;
    for (int j = 0; j < k; ++j) {
        int pos = start + j;
        if (a[pos] < j + 1) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int left = 0, right = n;
    int ans = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (check(a, mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}