#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    vector<int> v(6);

    v[0] = (a+b) * c;
    v[1] = (a*b) + c;
    v[2] = a + (b*c);
    v[3] = a * (b+c);
    v[4] = a * b * c;
    v[5] = a + b + c;

    int max = *max_element(v.begin(), v.end());

    cout << max << endl;
}