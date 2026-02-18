#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <int> l = {1,3,4,2,4,5};
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    set <int> l2;
    l2.insert(4);
    l2.insert(3);
    l2.insert(4);
    l2.insert(9);

    for(auto i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<< "Lower bound:- "<<*(l2.lower_bound(4)); // 5 ba ter thek kaser boro value print korbe
    cout<< "\nLower bound:- "<<*(l2.lower_bound(10)); // l2.end() ar value print hobe

    cout<< "\nLower bound:- "<<*(l2.upper_bound(5));
}