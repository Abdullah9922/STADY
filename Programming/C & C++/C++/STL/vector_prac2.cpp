#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,5,0,3,1,7};

    for(auto i=v.begin()+1; i != (v.end()-1); i++){
        if(*i < *(i-1) && *i < *(i+1)){
            cout << *i << endl;
        }
        
    }


    for(auto i=v.begin()+1; i != (v.end()-1); i++){

        cout << *i << " ";
        
    }
    cout << endl;
}