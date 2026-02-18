#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for(auto &i : vec) cin >> i;

    for(int i=0; i< n; i++){
        if( vec[i] == 1 || vec[i] == 0){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

}