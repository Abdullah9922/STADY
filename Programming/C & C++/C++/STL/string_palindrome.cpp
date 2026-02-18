#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int st = 0, end = s.size()-1;
    while(st <= end){
        if(s[st++] != s[end--]){
            cout << "Not Palindorme" << endl;
            return 0;
        }
    }

    cout << "Palindorme" << endl;
    return 0;
}