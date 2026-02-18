#include <bits/stdc++.h>
using namespace std;

int GCD(long long int big, long long int sml)
{
    while (sml != 0)
    {
        int rem = big % sml;
        big = sml;
        sml = rem;
    }
    return big;
}

int main()
{
    int tc;
    cin >> tc;

    int n;
    while(tc--){
        cin >> n; 
        vector <long long int> v(n);
        
        for(auto &x : v){
            cin >> x;
        }

        long long int ans=0, Ans = INT_MAX;
        for(int i=0; i<n; i++){

            long long int count=2;
            while(true){

                long long int temp = GCD(count,v[i]);
                if( temp == 1){
                    ans = count;
                    break;
                }

                else{
                    count++;
                    continue;
                }   
            }

            if(ans < Ans){
                Ans = ans;
            }

            //cout << v[i] <<"-> "<< ans << endl;
        }

        cout << Ans << endl;
    }
}