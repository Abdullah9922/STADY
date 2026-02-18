#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s , n;
    cin >> s >> n;

    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }

    for(int i=0; i<n; i++){
        if(s > v[i].first){
            s += v[i].second;
        }

        else{
            cout << "NO" <<endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}