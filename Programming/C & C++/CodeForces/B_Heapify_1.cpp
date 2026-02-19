#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;

    int n;
    while (tc--)
    {
        cin >> n;

        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }

        for (int i = 0; i < n / 2; i++)
        {
            if (v[i] > v[2 * i + 1])
            {
                swap(v[i], v[2 * i + 1]);
            }
        }

        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}