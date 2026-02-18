#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s ("IshyaqAhmed");
    string s2{s,0,6};
    cout<<s2<<endl;

    string s3 {s,6,s.size()};
    cout<<s3<<endl;

    //cout<<s2+ " "+s3<<endl;
    string ss;
    ss = s2+s3;
    ss.insert(6," ");
    cout<<ss<<endl;
}