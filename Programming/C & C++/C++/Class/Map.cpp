#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> m;
    m["tv"] = 100;
    m["laptop"] = 800;
    m["headphone"] = 433;
    m["phone"] = 100;

    m.erase("tv");

    for(auto p:m){
        cout<<p.first<< "  " <<p.second<<endl;
    }

    cout<<"Count:- "<<m.count("laptop")<<endl;
    cout<<"Value:- "<<m["laptop"]<<endl;

    if(m.find("camera") != m.end()){
        cout<< "\nfound";
    }
    else cout<<"Not found";

    cout<<endl;
}