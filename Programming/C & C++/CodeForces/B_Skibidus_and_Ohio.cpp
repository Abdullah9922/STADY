#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    string s;
    while(tc--){
        cin>>s;

        if(s.size() == 1){
            cout<<"1"<<endl;
            continue;
        }

        int flag = 0; 
        for(int i=0; i<s.size()-1; i++){
            if(s[i] == s[i+1]){
                cout<<"1"<<endl;
                flag++;
                break;
            } 
        }

        if(flag == 0) cout<<s.size()<<endl;

    }
}