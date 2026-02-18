#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s ("Ishyaq Ahmed Abdullah");
    string :: iterator it;

    cout<<endl;
    for(it = s.begin(); it != s.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;

    s += " + amr gf";
    cout<<s<<endl;

    cout<<"Size of the string: "<<s.size()<<endl;
    cout<<"Lenght of string: "<<s.length()<<endl;
    cout<<"Max size of string: "<<s.max_size()<<endl;
    cout<<"Capacity of string: "<<s.capacity()<<endl;


    cout<<endl<<endl;
    cout<<s.substr(0,7)<<endl;  // (start index,lenght);
    cout<<s.find("gf")<<endl;  // ("string name i want to search",start searching  from this position );
    cout<<s.find("Abdullah",7)<<endl;
}