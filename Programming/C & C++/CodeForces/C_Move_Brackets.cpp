#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    string s;
    int n;

    while(tc--){
        cin >> n >> s;

        int count = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                count++;
            }
            else{
                count--;
                if( count < 0){
                    count = 0;
                    ans++;
                }
            }
        }

        cout << ans << endl;

    }
}