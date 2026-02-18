#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    string s;
    while(tc--){

        cin >> s;

        for(int i=s.size(); i >= 0; i--){
            if( s[i] == 'p' ) cout << "q";
            else if( s[i] == 'q' ) cout << "p";
            else if(s[i] == 'w') cout << "w";
        }
        cout<<endl;
    }
}