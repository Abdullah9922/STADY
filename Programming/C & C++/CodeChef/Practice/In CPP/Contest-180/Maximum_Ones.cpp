#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            v[i] = s[i];
        }

        int i = 0;
        while(k >= 0){
            
            if(v[i] == 0 && v[i+1] == 0 || v[i] == 1 && v[i+1] == 1){
                i++;
            }

            else if(v[i] == 0 && v[i+1] == 1){
                v[i] = 1;
                k--;
            }

            else if(v[i] == 1 && v[i+1] == 0){
                v[i+1] = 1;
                k--;
            }
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(v[i] == 1 ) count++;
        }

        cout << count << endl;
    }
}