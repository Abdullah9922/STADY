#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cin >> *i;
    }

    cout << "Element of v:" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    cout << "Element of v2:" << endl;
    for (auto x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
}