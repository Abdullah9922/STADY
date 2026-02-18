#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> l = {1,3,4,2,4,5};
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    deque <int> l2;
    l2.push_back(4);
    l2.push_back(3);
    l2.push_front(4);
    l2.push_front(9);

    for(auto i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<l[3]<<endl; // it is posible becouse it is dynamic array

}