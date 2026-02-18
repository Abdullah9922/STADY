#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    if( k>=n ){
        auto m = max_element(v.begin(),v.end());
        cout<<*m<<endl;
    }

    else if(k == 1){
        int sum = accumulate(v.begin(), v.end(), 0);
        cout<<sum<<endl;
    }

    else {
        
    }
}