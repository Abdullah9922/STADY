#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair <int,float> p(23,59.25);
    cout<<p.first<<"  "<< p.second<<endl;


    pair <int,string> p2;
    p2 = make_pair(12,"jenny");
    cout<<p2.first<<"  "<< p2.second<<endl;


    auto p3 = make_pair("Rahul","R");
    cout<<p3.first<<"  "<< p3.second<<endl;


    pair <int,float> p4(p);
    cout<<p.first<<"  "<< p.second<<endl;


    pair <bool,string> p5;
    p5.first = true;
    p5.second= "kola";
    cout<<p5.first<<"  "<< p5.second<<endl;


    pair <int,float> p6(101010,99999.25);
    p.swap(p6);
    cout<<p.first<<"  "<< p.second<<endl;
    cout<<p6.first<<"  "<< p6.second<<endl;


    cout<<(p == p6)<<endl;
}