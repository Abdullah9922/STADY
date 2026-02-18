#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int a;

    for(int i=0; i<s.length(); i++){

        if((s[i] >= 'a') && (s[i] <= 'z')){
            if(s[i] == 'z') s[i] = 'a';
            else{
                a = s[i];
                a++;
                s[i] = (char)a;
            }
        }
    }

    cout << s << endl;
}

/*

else{
    a = s[i];
    a++;
    s[i] = (char)a;
}

aeter bodole :

s[i] = (s[i] == 'z') ? 'a' : s[i] + 1;


*/