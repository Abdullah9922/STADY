#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for(auto i=0; i < s.size()-1; i += 2){
        for(auto j=0; j < s.size()-1; j += 2){

            if(s[j]> s[j+2])
            swap(s[j],s[j+2]);
        }
    }

    for(auto i: s){
        cout<<i;
    }
    cout<<endl;
}