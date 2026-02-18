#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l = {1,3,4,2,4,5};
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    list <int> l2;
    l2.push_back(4);
    l2.push_back(3);
    l2.push_front(4);
    l2.push_front(9);

    for(auto i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<l[2]<endl;//it not posible in list, becouse it is duble link list

}