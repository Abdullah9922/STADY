#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    int x,n;
    for(int i=0; i<tc; i++)
    {
        cin >> x >> n;

        if(n % 2 == 0) cout << "0" << endl;
        else cout << x << endl;

    }
}