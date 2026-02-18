#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue <int> s;
    s.push(3);
    s.push(9);
    s.push(1);

    while(!s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
    cout<<endl;

    
}