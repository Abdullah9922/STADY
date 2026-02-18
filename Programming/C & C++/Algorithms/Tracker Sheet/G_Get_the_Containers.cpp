#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int n,m;
    for(int k=1; k<=tc; k++){
        cin>>n>>m;

        vector <int> v(n);
        for(int j=0; j<n; j++){
            cin>>v[j];
        }

        int sum = 0;
        if(m>n){
            
            for(int i=0; i<n; i++){
                sum += v[i];
            }
        }

        else{
            
            for(int i=0; i<m; i++){
                sum += v[i];
            }
        }

        cout<<"Case "<<k<<": "<<sum<<endl;
    }
}