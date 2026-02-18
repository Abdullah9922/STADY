#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<s.length(); j++){
            if(s[j] < s[i]){
                swap(s[i],s[j]);
            }
        }
    }

    cout << s << endl;
}