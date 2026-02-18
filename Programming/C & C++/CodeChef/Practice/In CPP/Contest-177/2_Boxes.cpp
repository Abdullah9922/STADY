#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    int x, y, k;
    while (tc--)
    {
        cin >> x >> y >> k;

        if (abs(k - abs(x - y)) % 2 == 0) {
            cout << abs(k - abs(x - y)) / 2 << endl;
        } else {
            cout << -1 << endl;
        }
        
    }
}
