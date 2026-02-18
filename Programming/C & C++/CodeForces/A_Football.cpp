#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    string s, s1, s2;
    int cunt1 = 0, cunt2 = 0;

    while(tc--){
        cin >> s;

        if(s1.empty()){
            s1 = s;
            cunt1++;
        }

        if(!s1.empty() && s2.empty() && s1 != s){
            s2 = s;
            cunt2++;
        }

        if(s == s1) cunt1++;
        else cunt2++;

    }

    if(cunt1 > cunt2) cout << s1 << endl;
    else cout << s2 << endl;
}