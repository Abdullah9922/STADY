#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = {"Ishtyaq Ahmed"};

    for(int i=0; i<s.length(); i++){
        cout << s[i];
    }
    cout << endl;

    for(auto x : s){
        cout << x << " ";
    }
    cout << endl;
}