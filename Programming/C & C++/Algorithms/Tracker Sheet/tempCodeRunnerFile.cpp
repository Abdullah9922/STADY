#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int n,q;
    for(int i=1; i<=tc; i++){
        cin>>n>>q;

        int v[n];
        for(int j=0; j<n; j++){
            cin>>v[j];
        }

        int a,b;
        cout<<"Case "<<i<<":"<<endl;
        while(q--){
            cin>>a>>b;

            int cnt = 0;
            for(int j=a; v[n-1] >= j; j++){

                for(int k=0; k<n; k++){

                    if(v[k] == j)
                    cnt++;
                }
            }

            cout<<cnt<<endl;

        }
    }
}