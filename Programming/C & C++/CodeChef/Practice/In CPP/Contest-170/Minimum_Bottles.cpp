#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
    cin>>tc;

    int n,k;
    while(tc--){
        cin>>n>>k;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int sum=0;
        for(int i=0; i<n; i++){
            sum += v[i];
        }

        int count = 0;
        while(sum>0){
            sum -= k;
            ++count;
        }

        cout<<count<<endl;
    }

}
