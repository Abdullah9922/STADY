#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool all_upper  = true;
    for(int i=1; i<s.size(); i++){
        if(islower(s[i])){
            all_upper = false;
            break;
        }
    }

    if(islower(s[0]) && all_upper){
        s[0] = toupper(s[0]);
        for(int i=1; i<s.size(); i++){
            s[i] = tolower(s[i]);
        }

        cout << s << endl;
    }
    
    else if(all_upper){
        for(auto &x : s){
            x = tolower(x);
        }

        cout << s << endl;
    }
    else cout << s << endl;
}