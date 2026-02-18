#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    string s;
    while(tc--){
        cin>>s;

        s[s.size()-2] = 'i';
        s.erase(s.end()-1); 
        cout<<s<<endl;
        
    }
}