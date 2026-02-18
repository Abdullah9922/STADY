#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    for(int i=1; i<=tc; i++){
        int n;
        cin>>n;

        vector <int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];

        int min = *max_element(v.begin(),v.end());

        cout << "Case " << i << ": " << min << endl;
    }
}