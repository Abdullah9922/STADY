#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        vector <int> store(n);
        for(int i=0; i<n; i++){
            cin>>store[i];
        }

        sort(store.begin(),store.end());
        int mid = store[n/2];

        int total = 0;
        for(int i=0; i<n; i++){
            total += abs(store[i] - mid);
        }

        cout<<total<<endl;
    }
}