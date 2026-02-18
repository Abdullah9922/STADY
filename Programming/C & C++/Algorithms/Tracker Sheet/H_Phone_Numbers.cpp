#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int a = 0, count = 0;
    if(n >= 11){
        a = n /11;

        for(auto i:s){
            if(i == '8')
                count++;
        }

        if(count>=a) cout<<a<<endl;
        else cout<<count<<endl;
    }

    else cout<<"0"<<endl;
}