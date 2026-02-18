#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;


    if(n == 1 && t == 10) cout << "-1" << endl;

    else{
        
        string s(n,to_string(t)[0]);
        cout << s << endl;
    }

}