#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc; 

    int n;
    while(tc--){
        cin >> n; 

        vector<int> v(n);
        for(auto &x : v){
            cin >> x;
        }

        int even = 0;
        for(int i=0; i<n; i++){
            if(v[i] % 2 == 0){
                even = v[i];
                break;
            }
        }

        int odd = 0;
        for(int i=0; i<n; i++){
            if(v[i] % 2 != 0){
                odd = v[i];
                break;
            }
        }

        if(even != 0 && odd != 0){
            sort(v.begin(), v.end());

        }

        for(auto x : v){
            cout << x << " ";
        }
        cout << endl;

        
    }
}