#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;

    long long int n,m,x,y;
    while(tc--)
    {
        cin >> n >> m >> x >> y;

        vector<long long int> v1(n);
        for(long long int i=0; i<n; i++){
            cin >> v1[i];
        }

        vector<long long int> v2(m);
        for(long long int i=0; i<m; i++){
            cin >> v2[i];
        }

        // long long int count = 0;
        // for(long long int i=0; i<n; i++){
        //     if(x >= v1[i]){
        //         count++;
        //     }
        // }

        // for(long long int i=0; i<m; i++){
        //     if(y >= v2[i]){
        //         count++;
        //     }
        // }

        cout << n+m << endl;

    }
}