#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,5,0,3,6,7};
    sort(v.begin(),v.end());

    for(auto i=v.begin(); i != (v.end()-1); i++){
        if(*i + 1 != *(i+1)){
            cout << "Fulse"<<endl;
            return 0;
        }
    }

    cout << "True" << endl;
    return 0;

}