#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y'){
            s.erase(s.begin()+i);
            i--;
        }
    }

    for(auto &x : s){
        x = tolower(x);
    }

    
    for(int i=s.size()-1; i>=0; i--){
        s.insert(s.begin()+i,'.');
       
    }

    cout<<s<<endl;
}