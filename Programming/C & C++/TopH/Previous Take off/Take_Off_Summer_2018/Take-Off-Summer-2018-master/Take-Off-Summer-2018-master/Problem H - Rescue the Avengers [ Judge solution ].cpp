#include<bits/stdc++.h>
using namespace std;

int main(){
     int tc, n;
     cin >> tc;
     for(int i = 0; i < tc; i++){
        cin >> n;
        cout<<"Case "<<i+1<<": ";
        cout << ceil(log2(n)) << endl;
     }  
    return 0;
