#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc; 

    int n,k;
    while(tc--){
        cin >> n >> k;

        vector<int> v(n);
        for(auto &x : v){
            cin >> x;
        }

        long long product;
        int count, ans = 0, Ans = INT_MAX;

        for(int i=0; i<n; i++){

            count = 0;
            while(true){

                v[i] += count;
                product = accumulate(v.begin(), v.end(), 1LL, multiplies<long long>());

                if(product % k == 0){
                    ans = count;
                    break;
                }

                else {
                    count += 1;
                }
                
            }

            if(ans < Ans){
                Ans = ans;
            }
        }

        cout << Ans << endl;
    }
}