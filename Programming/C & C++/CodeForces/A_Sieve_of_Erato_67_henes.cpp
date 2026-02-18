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


        int flag = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v[i]*v[j] == 67 || v[i] == 67){
                    cout << "YES" << endl;
                    flag++;
                    break;
                }
            }

            if(flag != 0){
                break;
            }
        }

        if(flag == 0){
            cout << "NO" << endl;
        }
    }
}