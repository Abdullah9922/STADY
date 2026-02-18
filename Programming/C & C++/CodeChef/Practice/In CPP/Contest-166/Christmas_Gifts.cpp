#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int h,l,w;
    while(tc--){
        cin>>h>>l>>w;

        int x = 2 * ((h*l) + (l*w) + (h*w));
        int ans = 1000/x;

        cout<<ans<<endl;
    }
}
