#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    int n,m;
    while(tc--){
        cin >> n >> m;

        vector<int> a(n), b(m);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        int b_val = b[0];
        int prev = min( a[0] , b_val - a[0]);
        bool possible = true;

        int condidate = -1;
        for(int i=1; i<n; i++){

            int current = a[i];
            int flipped = b_val - a[i];
            int option1 = current;
            int option2 = flipped;

            if(option1 >= prev && option2 >= prev)
                condidate = min(option1, option2);
            else if(option1 >= prev)
                condidate = option1;
            else if(option2 >= prev)
                condidate = option2;
            else{
                possible = false;
                break;
            }
            prev = condidate;
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
}