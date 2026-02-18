#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    int a,b,c,d;
    while(tc--){
        cin >> a >> b >> c >> d;

        if( a == b && b == c && c == d && d == a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}