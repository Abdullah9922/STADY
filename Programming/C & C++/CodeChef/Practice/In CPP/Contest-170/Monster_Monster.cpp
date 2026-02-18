#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int n, k;
    while(tc--){
        cin>>n>>k;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }


        sort(v.rbegin(),v.rend());
        long long max = 0;
        for(int i=0; i<n; i++){
            long long curr = v[i] + 1LL * i * k;

            if(curr>max) max = curr;
        }

        cout<<max<<endl;


        // long long int max = *max_element(v.begin(),v.end());
        // long long int min = *min_element(v.begin(), v.end());

        // long long int A = min + (k * (n-1));

        // cout<< (max>A?max:A) <<endl;
    }
}