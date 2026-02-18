#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;
    s.push(3);
    s.push(9);
    s.push(1);

    while(!s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
    cout<<endl;

    stack <int> s2;
    s2.swap(s);

    cout<<"s size: "<<s.size()<<endl;
    cout<<"s2 size: "<<s2.size()<<endl;
}