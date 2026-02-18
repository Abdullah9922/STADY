#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> s;
    s.push(3);
    s.push(9);
    s.push(1);

    while(!s.empty()){
        cout<<s.front()<<"  ";
        s.pop();
    }
    cout<<endl;

    queue <int> s2;
    s2.swap(s);

    cout<<"s size: "<<s.size()<<endl;
    cout<<"s2 size: "<<s2.size()<<endl;
}