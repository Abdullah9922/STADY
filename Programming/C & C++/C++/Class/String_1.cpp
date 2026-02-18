#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    s = ("jenny");
    cout<<s<<endl;

    string s2  {s};
    cout<<s2<<endl;

    string s3 (10,'a');
    cout<<s3<<endl;

    string s4 {s,3};
    cout<<s4<<endl;

    string s5 = {"Abdullah",3};
    cout<<s5<<endl;

    string s6;
    cout<<"Enter Your name: ";
    cin>>s6;
    cout<<s6<<endl;


    cin.ignore();
    string ss;
    cout<<"Enter your gf name: ";
    getline(cin,ss);
    cout<<ss<<endl;


    cout<<ss[3]<<endl;  // can't provide bound cheak 
    cout<<ss.at(3)<<endl; // with bound cheak

    for(auto i:ss)
        cout<<i<<"  ";
    cout<<endl;

    cout<<ss+s6<<endl;
    cout<<ss+"  "+s6+"  xxxxxx  "<<endl;
    cout<<ss.length()<<endl;


    cout<<(ss == s6)<<endl;
    cout<<(ss < s6)<<endl; // use askii value 
}