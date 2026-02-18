#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    int khejur = 0;
    for(int i=0; i<n-1; i += 2){
        khejur += v[i+1] - v[i];
    }

    cout<<khejur<<endl;
}