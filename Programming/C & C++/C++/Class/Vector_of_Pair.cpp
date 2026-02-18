#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <pair<int , string>> s = { {1,"Jenny"},{2,"Payal"}};

    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i].first<< "  " << s[i].second<<endl;
    }
    cout<<endl<<endl;

    s.push_back({3,"Jiya"});
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i].first<< "  " << s[i].second<<endl;
    }
    cout<<endl<<endl;


    s.erase(s.begin()+2);
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i].first<< "  " << s[i].second<<endl;
    }
    cout<<endl<<endl;
}