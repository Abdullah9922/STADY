#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int state = 0; 

    for(int i = 0; i < s.size(); i++)
    {
        if(state == 0 && s[i] == 'h') state++;
        else if(state == 1 && s[i] == 'e') state++;
        else if(state == 2 && s[i] == 'l') state++;
        else if(state == 3 && s[i] == 'l') state++;
        else if(state == 4 && s[i] == 'o') state++;
    }

    if(state == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
}