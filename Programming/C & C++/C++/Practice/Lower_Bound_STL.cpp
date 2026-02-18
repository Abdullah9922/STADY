#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x;
    cin >> x;

    while (x--) {
        int y;
        cin >> y;

        auto it = lower_bound(v.begin(), v.end(), y);

        if (it == v.end() || *it != y) 
            cout << "No " << (it - v.begin() + 1) << endl;
        else 
            cout << "Yes " << (it - v.begin() + 1) << endl;
    }

    return 0;
}
