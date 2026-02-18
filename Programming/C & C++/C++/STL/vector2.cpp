#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1,3,5,2,6};
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;

    v.erase(v.begin()+2);

    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;


    v.insert(v.begin()+2,100);
    v.insert(v.begin()+3,200);

    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;

    v.erase(v.begin()+2,v.begin()+4);

    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;


    cout << "Is empty: " << v.empty()<<endl;

}