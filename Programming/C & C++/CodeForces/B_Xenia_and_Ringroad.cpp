#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;

    vector<long long int> v(m);
    for(auto &a : v) cin >> a;

    long long int count = 0;
    count = v[0] - 1;
    long long int prev = v[0];
    
    for(int i=1; i<m; i++){

        if(v[i] > prev){
            count += (v[i] - prev);
        }

        else if( v[i] < prev){
            count += ((n+v[i]) - prev );
        }

        else {
            prev = v[i];
            continue;
        }
        prev = v[i];
    }

    cout << count << endl;
}