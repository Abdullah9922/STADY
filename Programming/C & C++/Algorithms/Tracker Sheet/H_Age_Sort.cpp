#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    while(true){
        cin>>n;

        if(n == 0) return 0;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        sort(v.begin(), v.end());
        int i;
        for(i=0; i<n-1; i++){
            cout<<v[i]<<" ";
        }
        cout<<v[i]<<endl;
    }
}