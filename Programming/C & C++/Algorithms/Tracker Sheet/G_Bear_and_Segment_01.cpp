#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    string s;
    while(tc--){
        cin>>s;

        int flag = 0, flag2 = 0, count = 0;
        for(auto i=0; i<s.size()-1; i++){

            if(s[i] == '1' && flag == 0) flag++;

            if(s[i] == '0' && flag>0 ) flag2++;

            if(flag > 0 && flag2 > 0 && s[i] == '1'){
                cout<<"NO"<<endl;
                count++;
                break;
            }

        }

        
        if(flag == 0){
            cout<<"NO"<<endl;
                count++;
        }

        if(count == 0) cout<<"YES"<<endl;

    }
}