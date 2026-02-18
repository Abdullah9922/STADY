#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    int n;
    while(tc--){
        cin>>n;

        vector<int> v1(n);
        for(int i=0; i<n; i++){
            cin>>v1[i];
        }

        vector<int> v2(n);
        for(int i=0; i<n; i++){
            cin>>v2[i];
        } 
        
        int count1 = 0, count0 = 0;
        for(int i=0; i<n; i++){

            if(v1[i] == 1 && v2[i] == 1){
                count1++;
            }

            if(v1[i] == 0 && v2[i] == 0){
                count0++;
            }
        }

        if(count1 == n) cout<<"NO"<<endl;

        else if(count0 == n) cout<<"NO"<<endl;

        else{
            int rem = n - (count1+count0);

            if(count1 % 2 != 0) cout<<"YES"<<endl;

            else if(count1 % 2 == 0 && rem >= 1) cout<<"YES"<<endl;

            else if(count1 % 2 == 0 && rem == 0) cout<<"NO"<<endl;

            else cout<<"YES"<<endl;

        }
    }

}
